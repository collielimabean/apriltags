CC = gcc
AR = ar
BIN_DIR = bin

CFLAGS = -std=gnu99 -Wall -Wextra -Wno-sign-compare -pedantic -pthread -Iinclude -I. -Icommon -g
LDFLAGS = -lpthread -lm

APRILTAG_OBJS = src/apriltag.o src/apriltag_quad_thresh.o src/tag16h5.o src/tag25h7.o src/tag25h9.o src/tag36h10.o src/tag36h11.o src/tag36artoolkit.o src/g2d.o common/zarray.o common/zhash.o common/zmaxheap.o common/unionfind.o common/matd.o common/image_u8.o common/pnm.o common/image_f32.o common/image_u32.o common/workerpool.o common/time_util.o common/svd22.o common/homography.o common/string_util.o common/getopt.o

LIBAPRILTAG := libapriltag.a

all: $(LIBAPRILTAG) apriltag_demo


$(LIBAPRILTAG): $(APRILTAG_OBJS)
	@echo "   [$@]"
	@mkdir -p $(BIN_DIR)
	@$(AR) -cq $(BIN_DIR)/$@ $(APRILTAG_OBJS)

apriltag_demo: src/apriltag_demo.o
	@echo "   [$@]"
	@$(CC) -o $(BIN_DIR)/$@ src/apriltag_demo.o $(APRILTAG_OBJS) $(LDFLAGS)

%.o: %.c
	@echo "   $@"
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean
clean:
	@rm -rf $(BIN_DIR) src/*.o common/*.o
