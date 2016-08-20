#include "AprilTagFamily.hpp"

#define TAG36H11_NUM_CODES 587

const unsigned long *raw_codes = {
    0x0000000d5d628584UL,
    0x0000000d97f18b49UL,
    0x0000000dd280910eUL,
    0x0000000e479e9c98UL,
    0x0000000ebcbca822UL,
    0x0000000f31dab3acUL,
    0x0000000056a5d085UL,
    0x000000010652e1d4UL,
    0x000000022b1dfeadUL,
    0x0000000265ad0472UL,
    0x000000034fe91b86UL,
    0x00000003ff962cd5UL,
    0x000000043a25329aUL,
    0x0000000474b4385fUL,
    0x00000004e9d243e9UL,
    0x00000005246149aeUL,
    0x00000005997f5538UL,
    0x0000000683bb6c4cUL,
    0x00000006be4a7211UL,
    0x00000007e3158eeaUL,
    0x000000081da494afUL,
    0x0000000858339a74UL,
    0x00000008cd51a5feUL,
    0x00000009f21cc2d7UL,
    0x0000000a2cabc89cUL,
    0x0000000adc58d9ebUL,
    0x0000000b16e7dfb0UL,
    0x0000000b8c05eb3aUL,
    0x0000000d25ef139dUL,
    0x0000000d607e1962UL,
    0x0000000e4aba3076UL,
    0x00000002dde6a3daUL,
    0x000000043d40c678UL,
    0x00000005620be351UL,
    0x000000064c47fa65UL,
    0x0000000686d7002aUL,
    0x00000006c16605efUL,
    0x00000006fbf50bb4UL,
    0x00000008d06d39dcUL,
    0x00000009f53856b5UL,
    0x0000000adf746dc9UL,
    0x0000000bc9b084ddUL,
    0x0000000d290aa77bUL,
    0x0000000d9e28b305UL,
    0x0000000e4dd5c454UL,
    0x0000000fad2fe6f2UL,
    0x0000000181a8151aUL,
    0x000000026be42c2eUL,
    0x00000002e10237b8UL,
    0x0000000405cd5491UL,
    0x00000007742eab1cUL,
    0x000000085e6ac230UL,
    0x00000008d388cdbaUL,
    0x00000009f853ea93UL,
    0x0000000c41ea2445UL,
    0x0000000cf1973594UL,
    0x000000014a34a333UL,
    0x000000031eacd15bUL,
    0x00000006c79d2dabUL,
    0x000000073cbb3935UL,
    0x000000089c155bd3UL,
    0x00000008d6a46198UL,
    0x000000091133675dUL,
    0x0000000a708d89fbUL,
    0x0000000ae5ab9585UL,
    0x0000000b9558a6d4UL,
    0x0000000b98743ab2UL,
    0x0000000d6cec68daUL,
    0x00000001506bcaefUL,
    0x00000004becd217aUL,
    0x00000004f95c273fUL,
    0x0000000658b649ddUL,
    0x0000000a76c4b1b7UL,
    0x0000000ecf621f56UL,
    0x00000001c8a56a57UL,
    0x00000003628e92baUL,
    0x000000053706c0e2UL,
    0x00000005e6b3d231UL,
    0x00000007809cfa94UL,
    0x0000000e97eead6fUL,
    0x00000005af40604aUL,
    0x00000007492988adUL,
    0x0000000ed5994712UL,
    0x00000005eceaf9edUL,
    0x00000007c1632815UL,
    0x0000000c1a0095b4UL,
    0x0000000e9e25d52bUL,
    0x00000003a6705419UL,
    0x0000000a8333012fUL,
    0x00000004ce5704d0UL,
    0x0000000508e60a95UL,
    0x0000000877476120UL,
    0x0000000a864e950dUL,
    0x0000000ea45cfce7UL,
    0x000000019da047e8UL,
    0x000000024d4d5937UL,
    0x00000006e079cc9bUL,
    0x000000099f2e11d7UL,
    0x000000033aa50429UL,
    0x0000000499ff26c7UL,
    0x000000050f1d3251UL,
    0x000000066e7754efUL,
    0x000000096ad633ceUL,
    0x00000009a5653993UL,
    0x0000000aca30566cUL,
    0x0000000c298a790aUL,
    0x00000008be44b65dUL,
    0x0000000dc68f354bUL,
    0x000000016f7f919bUL,
    0x00000004dde0e826UL,
    0x0000000d548cbd9fUL,
    0x0000000e0439ceeeUL,
    0x0000000fd8b1fd16UL,
    0x000000076521bb7bUL,
    0x0000000d92375742UL,
    0x0000000cab16d40cUL,
    0x0000000730c9dd72UL,
    0x0000000ad9ba39c2UL,
    0x0000000b14493f87UL,
    0x000000052b15651fUL,
    0x0000000185409cadUL,
    0x000000077ae2c68dUL,
    0x000000094f5af4b5UL,
    0x00000000a13bad55UL,
    0x000000061ea437cdUL,
    0x0000000a022399e2UL,
    0x0000000203b163d1UL,
    0x00000007bba8f40eUL,
    0x000000095bc9442dUL,
    0x000000041c0b5358UL,
    0x00000008e9c6cc81UL,
    0x00000000eb549670UL,
    0x00000009da3a0b51UL,
    0x0000000d832a67a1UL,
    0x0000000dcd4350bcUL,
    0x00000004aa05fdd2UL,
    0x000000060c7bb44eUL,
    0x00000004b358b96cUL,
    0x0000000067299b45UL,
    0x0000000b9c89b5faUL,
    0x00000006975acaeaUL,
    0x000000062b8f7afaUL,
    0x000000033567c3d7UL,
    0x0000000bac139950UL,
    0x0000000a5927c62aUL,
    0x00000005c916e6a4UL,
    0x0000000260ecb7d5UL,
    0x000000029b7bbd9aUL,
    0x0000000903205f26UL,
    0x0000000ae72270a4UL,
    0x00000003d2ec51a7UL,
    0x000000082ea55324UL,
    0x000000011a6f3427UL,
    0x00000001ca1c4576UL,
    0x0000000a40c81aefUL,
    0x0000000bddccd730UL,
    0x00000000e617561eUL,
    0x0000000969317b0fUL,
    0x000000067f781364UL,
    0x0000000610912f96UL,
    0x0000000b2549fdfcUL,
    0x000000006e5aaa6bUL,
    0x0000000b6c475339UL,
    0x0000000c56836a4dUL,
    0x0000000844e351ebUL,
    0x00000004647f83b4UL,
    0x00000000908a04f5UL,
    0x00000007f51034c9UL,
    0x0000000aee537fcaUL,
    0x00000005e92494baUL,
    0x0000000d445808f4UL,
    0x000000028d68b563UL,
    0x000000004d25374bUL,
    0x00000002bc065f65UL,
    0x000000096dc3ea0cUL,
    0x00000004b2ade817UL,
    0x000000007c3fd502UL,
    0x0000000e768b5cafUL,
    0x000000017605cf6cUL,
    0x0000000182741ee4UL,
    0x000000062846097cUL,
    0x000000072b5ebf80UL,
    0x0000000263da6e13UL,
    0x0000000fa841bcb5UL,
    0x00000007e45e8c69UL,
    0x0000000653c81fa0UL,
    0x00000007443b5e70UL,
    0x00000000a5234afdUL,
    0x000000074756f24eUL,
    0x0000000157ebf02aUL,
    0x000000082ef46939UL,
    0x000000080d420264UL,
    0x00000002aeed3e98UL,
    0x0000000b0a1dd4f8UL,
    0x0000000b5436be13UL,
    0x00000007b7b4b13bUL,
    0x00000001ce80d6d3UL,
    0x000000016c08427dUL,
    0x0000000ee54462ddUL,
    0x00000001f7644cceUL,
    0x00000009c7b5cc92UL,
    0x0000000e369138f8UL,
    0x00000005d5a66e91UL,
    0x0000000485d62f49UL,
    0x0000000e6e819e94UL,
    0x0000000b1f340eb5UL,
    0x000000009d198ce2UL,
    0x0000000d60717437UL,
    0x00000000196b856cUL,
    0x0000000f0a6173a5UL,
    0x000000012c0e1ec6UL,
    0x000000062b82d5cfUL,
    0x0000000ad154c067UL,
    0x0000000ce3778832UL,
    0x00000006b0a7b864UL,
    0x00000004c7686694UL,
    0x00000005058ff3ecUL,
    0x0000000d5e21ea23UL,
    0x00000009ff4a76eeUL,
    0x00000009dd981019UL,
    0x00000001bad4d30aUL,
    0x0000000c601896d1UL,
    0x0000000973439b48UL,
    0x00000001ce7431a8UL,
    0x000000057a8021d6UL,
    0x0000000f9dba96e6UL,
    0x000000083a2e4e7cUL,
    0x00000008ea585380UL,
    0x0000000af6c0e744UL,
    0x0000000875b73babUL,
    0x0000000da34ca901UL,
    0x00000002ab9727efUL,
    0x0000000d39f21b9aUL,
    0x00000008a10b742fUL,
    0x00000005f8952dbaUL,
    0x0000000f8da71ab0UL,
    0x0000000c25f9df96UL,
    0x000000006f8a5d94UL,
    0x0000000e42e63e1aUL,
    0x0000000b78409d1bUL,
    0x0000000792229addUL,
    0x00000005acf8c455UL,
    0x00000002fc29a9b0UL,
    0x0000000ea486237bUL,
    0x0000000b0c9685a0UL,
    0x00000001ad748a47UL,
    0x000000003b4712d5UL,
    0x0000000f29216d30UL,
    0x00000008dad65e49UL,
    0x00000000a2cf09ddUL,
    0x00000000b5f174c6UL,
    0x0000000e54f57743UL,
    0x0000000b9cf54d78UL,
    0x00000004a312a88aUL,
    0x000000027babc962UL,
    0x0000000b86897111UL,
    0x0000000f2ff6c116UL,
    0x000000082274bd8aUL,
    0x000000097023505eUL,
    0x000000052d46edd1UL,
    0x0000000585c1f538UL,
    0x0000000bddd00e43UL,
    0x00000005590b74dfUL,
    0x0000000729404a1fUL,
    0x000000065320855eUL,
    0x0000000d3d4b6956UL,
    0x00000007ae374f14UL,
    0x00000002d7a60e06UL,
    0x0000000315cd9b5eUL,
    0x0000000fd36b4eacUL,
    0x0000000f1df7642bUL,
    0x000000055db27726UL,
    0x00000008f15ebc19UL,
    0x0000000992f8c531UL,
    0x000000062dea2a40UL,
    0x0000000928275cabUL,
    0x000000069c263cb9UL,
    0x0000000a774cca9eUL,
    0x0000000266b2110eUL,
    0x00000001b14acbb8UL,
    0x0000000624b8a71bUL,
    0x00000001c539406bUL,
    0x00000003086d529bUL,
    0x00000000111dd66eUL,
    0x000000098cd630bfUL,
    0x00000008b9d1ffdcUL,
    0x000000072b2f61e7UL,
    0x00000009ed9d672bUL,
    0x000000096cdd15f3UL,
    0x00000006366c2504UL,
    0x00000006ca9df73aUL,
    0x0000000a066d60f0UL,
    0x0000000e7a4b8addUL,
    0x00000008264647efUL,
    0x0000000aa195bf81UL,
    0x00000009a3db8244UL,
    0x0000000014d2df6aUL,
    0x00000000b63265b7UL,
    0x00000002f010de73UL,
    0x000000097e774986UL,
    0x0000000248affc29UL,
    0x0000000fb57dcd11UL,
    0x00000000b1a7e4d9UL,
    0x00000004bfa2d07dUL,
    0x000000054e5cdf96UL,
    0x00000004c15c1c86UL,
    0x0000000cd9c61166UL,
    0x0000000499380b2aUL,
    0x0000000540308d09UL,
    0x00000008b63fe66fUL,
    0x0000000c81aeb35eUL,
    0x000000086fe0bd5cUL,
    0x0000000ce2480c2aUL,
    0x00000001ab29ee60UL,
    0x00000008048daa15UL,
    0x0000000dbfeb2d39UL,
    0x0000000567c9858cUL,
    0x00000002b6edc5bcUL,
    0x00000002078fca82UL,
    0x0000000adacc22aaUL,
    0x0000000b92486f49UL,
    0x000000051fac5964UL,
    0x0000000691ee6420UL,
    0x0000000f63b3e129UL,
    0x000000039be7e572UL,
    0x0000000da2ce6c74UL,
    0x000000020cf17a5cUL,
    0x0000000ee55f9b6eUL,
    0x0000000fb8572726UL,
    0x0000000b2c2de548UL,
    0x0000000caa9bce92UL,
    0x0000000ae9182db3UL,
    0x000000074b6e5bd1UL,
    0x0000000137b252afUL,
    0x000000051f686881UL,
    0x0000000d672f6c02UL,
    0x0000000654146ce4UL,
    0x0000000f944bc825UL,
    0x0000000e8327f809UL,
    0x000000076a73fd59UL,
    0x0000000f79da4cb4UL,
    0x0000000956f8099bUL,
    0x00000007b5f2655cUL,
    0x0000000d06b114a6UL,
    0x0000000d0697ca50UL,
    0x000000027c390797UL,
    0x0000000bc61ed9b2UL,
    0x0000000cc12dd19bUL,
    0x0000000eb7818d2cUL,
    0x0000000092fcecdaUL,
    0x000000089ded4ea1UL,
    0x0000000256a0ba34UL,
    0x0000000b6948e627UL,
    0x00000001ef6b1054UL,
    0x00000008639294a2UL,
    0x0000000eda3780a4UL,
    0x000000039ee2af1dUL,
    0x0000000cd257edc5UL,
    0x00000002d9d6bc22UL,
    0x0000000121d3b47dUL,
    0x000000037e23f8adUL,
    0x0000000119f31cf6UL,
    0x00000002c97f4f09UL,
    0x0000000d502abfe0UL,
    0x000000010bc3ca77UL,
    0x000000053d7190efUL,
    0x000000090c3e62a6UL,
    0x00000007e9ebf675UL,
    0x0000000979ce23d1UL,
    0x000000027f0c98e9UL,
    0x0000000eafb4ae59UL,
    0x00000007ca7fe2bdUL,
    0x00000001490ca8f6UL,
    0x00000009123387baUL,
    0x0000000b3bc73888UL,
    0x00000003ea87e325UL,
    0x00000004888964aaUL,
    0x0000000a0188a6b9UL,
    0x0000000cd383c666UL,
    0x000000040029a3fdUL,
    0x0000000e1c00ac5cUL,
    0x000000039e6f2b6eUL,
    0x0000000de664f622UL,
    0x0000000e979a75e8UL,
    0x00000007c6b4c86cUL,
    0x0000000fd492e071UL,
    0x00000008fbb35118UL,
    0x000000040b4a09b7UL,
    0x0000000af80bd6daUL,
    0x000000070e0b2521UL,
    0x00000002f5c54d93UL,
    0x00000003f4a118d5UL,
    0x000000009c1897b9UL,
    0x0000000079776eacUL,
    0x0000000084b00b17UL,
    0x00000003a95ad90eUL,
    0x000000028c544095UL,
    0x000000039d457c05UL,
    0x00000007a3791a78UL,
    0x0000000bb770e22eUL,
    0x00000009a822bd6cUL,
    0x000000068a4b1fedUL,
    0x0000000a5fd27b3bUL,
    0x00000000c3995b79UL,
    0x0000000d1519dff1UL,
    0x00000008e7eee359UL,
    0x0000000cd3ca50b1UL,
    0x0000000b73b8b793UL,
    0x000000057aca1c43UL,
    0x0000000ec2655277UL,
    0x0000000785a2c1b3UL,
    0x000000075a07985aUL,
    0x0000000a4b01eb69UL,
    0x0000000a18a11347UL,
    0x0000000db1f28ca3UL,
    0x0000000877ec3e25UL,
    0x000000031f6341b8UL,
    0x00000001363a3a4cUL,
    0x0000000075d8b9baUL,
    0x00000007ae0792a9UL,
    0x0000000a83a21651UL,
    0x00000007f08f9fb5UL,
    0x00000000d0cf73a9UL,
    0x0000000b04dcc98eUL,
    0x0000000f65c7b0f8UL,
    0x000000065ddaf69aUL,
    0x00000002cf9b86b3UL,
    0x000000014cb51e25UL,
    0x0000000f48027b5bUL,
    0x00000000ec26ea8bUL,
    0x000000044bafd45cUL,
    0x0000000b12c7c0c4UL,
    0x0000000959fd9d82UL,
    0x0000000c77c9725aUL,
    0x000000048a22d462UL,
    0x00000008398e8072UL,
    0x0000000ec89b05ceUL,
    0x0000000bb682d4c9UL,
    0x0000000e5a86d2ffUL,
    0x0000000358f01134UL,
    0x00000008556ddcf6UL,
    0x000000067584b6e2UL,
    0x000000011609439fUL,
    0x000000008488816eUL,
    0x0000000aaf1a2c46UL,
    0x0000000f879898cfUL,
    0x00000008bbe5e2f7UL,
    0x0000000101eee363UL,
    0x0000000690f69377UL,
    0x0000000f5bd93cd9UL,
    0x0000000cea4c2bf6UL,
    0x00000009550be706UL,
    0x00000002c5b38a60UL,
    0x0000000e72033547UL,
    0x00000004458b0629UL,
    0x0000000ee8d9ed41UL,
    0x0000000d2f918d72UL,
    0x000000078dc39fd3UL,
    0x00000008212636f6UL,
    0x00000007450a72a7UL,
    0x0000000c4f0cf4c6UL,
    0x0000000367bcddcdUL,
    0x0000000c1caf8cc6UL,
    0x0000000a7f5b853dUL,
    0x00000009d536818bUL,
    0x0000000535e021b0UL,
    0x0000000a7eb8729eUL,
    0x0000000422a67b49UL,
    0x0000000929e928a6UL,
    0x000000048e8aefccUL,
    0x0000000a9897393cUL,
    0x00000005eb81d37eUL,
    0x00000001e80287b7UL,
    0x000000034770d903UL,
    0x00000002eef86728UL,
    0x000000059266ccb6UL,
    0x00000000110bba61UL,
    0x00000001dfd284efUL,
    0x0000000447439d1bUL,
    0x0000000fece0e599UL,
    0x00000009309f3703UL,
    0x000000080764d1ddUL,
    0x0000000353f1e6a0UL,
    0x00000002c1c12dccUL,
    0x0000000c1d21b9d7UL,
    0x0000000457ee453eUL,
    0x0000000d66faf540UL,
    0x000000044831e652UL,
    0x0000000cfd49a848UL,
    0x00000009312d4133UL,
    0x00000003f097d3eeUL,
    0x00000008c9ebef7aUL,
    0x0000000a99e29e88UL,
    0x00000000e9fab22cUL,
    0x00000004e748f4fbUL,
    0x0000000ecdee4288UL,
    0x0000000abce5f1d0UL,
    0x0000000c42f6876cUL,
    0x00000007ed402ea0UL,
    0x0000000e5c4242c3UL,
    0x0000000d5b2c31aeUL,
    0x0000000286863be6UL,
    0x0000000160444d94UL,
    0x00000005f0f5808eUL,
    0x0000000ae3d44b2aUL,
    0x00000009f5c5d109UL,
    0x00000008ad9316d7UL,
    0x00000003422ba064UL,
    0x00000002fed11d56UL,
    0x0000000bea6e3e04UL,
    0x000000004b029eecUL,
    0x00000006deed7435UL,
    0x00000003718ce17cUL,
    0x000000055857f5e2UL,
    0x00000002edac7b62UL,
    0x0000000085d6c512UL,
    0x0000000d6ca88e0fUL,
    0x00000002b7e1fc69UL,
    0x0000000a699d5c1bUL,
    0x0000000f05ad74deUL,
    0x00000004cf5fb56dUL,
    0x00000005725e07e1UL,
    0x000000072f18a2deUL,
    0x00000001cec52609UL,
    0x000000048534243cUL,
    0x00000002523a4d69UL,
    0x000000035c1b80d1UL,
    0x0000000a4d7338a7UL,
    0x00000000db1af012UL,
    0x0000000e61a9475dUL,
    0x000000005df03f91UL,
    0x000000097ae260bbUL,
    0x000000032d627fefUL,
    0x0000000b640f73c2UL,
    0x000000045a1ac9c6UL,
    0x00000006a2202de1UL,
    0x000000057d3e25f2UL,
    0x00000005aa9f986eUL,
    0x00000000cc859d8aUL,
    0x0000000e3ec6cca8UL,
    0x000000054e95e1aeUL,
    0x0000000446887b06UL,
    0x00000007516732beUL,
    0x00000003817ac8f5UL,
    0x00000003e26d938cUL,
    0x0000000aa81bc235UL,
    0x0000000df387ca1bUL,
    0x00000000f3a3b3f2UL,
    0x0000000b4bf69677UL,
    0x0000000ae21868edUL,
    0x000000081e1d2d9dUL,
    0x0000000a0a9ea14cUL,
    0x00000008eee297a9UL,
    0x00000004740c0559UL,
    0x0000000e8b141837UL,
    0x0000000ac69e0a3dUL,
    0x00000009ed83a1e1UL,
    0x00000005edb55ecbUL,
    0x000000007340fe81UL,
    0x000000050dfbc6bfUL,
    0x00000004f583508aUL,
    0x0000000cb1fb78bcUL,
    0x00000004025ced2fUL,
    0x000000039791ebecUL,
    0x000000053ee388f1UL,
    0x00000007d6c0bd23UL,
    0x000000093a995fbeUL,
    0x00000008a41728deUL,
    0x00000002fe70e053UL,
    0x0000000ab3db443aUL,
    0x00000001364edb05UL,
    0x000000047b6eeed6UL,
    0x000000012e71af01UL,
    0x000000052ff83587UL,
    0x00000003a1575dd8UL,
    0x00000003feaa3564UL,
    0x0000000eacf78ba7UL,
    0x00000000872b94f8UL,
    0x0000000da8ddf9a2UL,
    0x00000009aa920d2bUL,
    0x00000001f350ed36UL,
    0x000000018a5e861fUL,
    0x00000002c35b89c3UL,
    0x00000003347ac48aUL,
    0x00000007f23e022eUL,
    0x00000002459068fbUL,
    0x0000000e83be4b73UL
};

Tag36h11::Tag36h11()
{
    AprilTagFamily("Tag3h11", 6, 11, raw_codes, TAG36H11_NUM_CODES);
}