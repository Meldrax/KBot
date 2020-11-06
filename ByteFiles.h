#pragma once
#include <Windows.h>

//const uint16_t Smite[64][64] = {
//	{0,2048,2080,0,0,2048,2080,4160,4160,6208,6240,6240,8288,8288,8320,10368,12480,14560,14592,16672,20833,20865,20865,22913,29217,29217,31297,33378,35490,37538,45922,56484,41697,39586,43778,48067,43810,43779,43779,43779,43778,43747,43747,41698,43747,43747,43747,43715,43778,60771,64996,50081,37377,58625,62914,62946,62914,60770,58658,58626,58594,58562,58530,56417},
//	{0,0,0,0,0,2080,4128,4160,6208,6208,6240,8288,8288,8320,10368,10400,12480,14560,14592,16672,20865,20865,20865,29217,31297,29217,31297,33410,35490,37538,52195,54371,39585,41666,43810,45923,43810,43811,43779,43779,43779,41731,41699,43747,43747,43747,43715,43715,50082,64995,62883,43681,50017,62882,62915,62914,62914,62883,60803,60738,58658,58626,58562,56417},
//	{0,0,0,0,2048,2080,4160,4160,6208,6240,6240,8320,8320,8320,10400,12448,12480,14592,16640,18752,20864,20865,31265,45856,31264,29217,33345,33410,35490,39650,54372,45890,39586,43778,43810,45858,43810,45858,43811,45923,48069,48071,45958,43812,43747,43747,41699,41699,58628,65060,52162,47906,62851,62947,62915,62947,62915,62947,62915,60802,60770,60738,58626,56417},
//	{0,0,0,2080,2080,4128,4160,4160,6240,6240,6272,8320,8320,10400,10400,12480,14560,16640,18720,20800,20833,31264,54304,39584,29216,31297,33377,35490,37570,43843,50148,39618,43811,43843,43811,45858,45858,45859,45923,45925,45991,43944,48074,54476,45925,41635,39620,50211,65093,62916,54305,62851,65027,64995,64995,64995,62979,62947,62947,62882,60802,60770,58658,56417},
//	{0,0,2080,2080,4128,4160,4160,6240,6240,6240,8320,8320,10368,10400,12480,14560,14592,18752,20832,18720,27104,60704,48000,31232,31297,33377,35458,37570,39682,48036,43811,43779,45891,45891,45891,45891,45891,47939,43781,24935,16519,14438,10277,29224,58798,41671,39621,65095,65158,65027,64995,65060,65060,65060,65060,65060,65060,65060,62947,62915,60802,60770,60706,56417},
//	{0,0,2080,2080,4160,4160,6208,6240,6240,8288,8320,10400,10400,12480,14528,16640,18720,18720,16640,27008,60768,62912,35360,33345,33376,33377,35490,39650,43811,45923,43811,45891,45891,45891,45891,45890,45859,35397,22791,20712,22761,20615,16487,10245,31368,58893,54472,65192,65126,65060,65060,65060,65092,65092,65125,65125,65125,65092,65028,62915,60802,60770,60738,54337},
//	{0,2080,2080,4160,4160,4160,6240,6240,8288,8320,10400,10400,12480,14560,16640,16640,16640,20832,39680,62976,65216,47968,33344,33376,33377,35490,37603,41763,43843,45891,43810,45891,43875,45923,43843,35427,22853,20745,26985,29032,31048,28936,22695,18502,12293,48200,65294,65194,65126,65091,65091,65124,65156,65157,65158,65190,65190,65125,65060,62915,60802,60770,58625,47969},
//	{2048,2080,4128,4160,4160,6208,6240,6240,8320,8320,10400,12480,14560,14592,14561,16608,37568,62944,65248,65280,63008,37441,35424,33376,33409,35522,39683,43843,43843,45924,45956,45988,45956,35460,18692,16582,24905,29064,37384,45736,41512,37256,30952,22662,14340,14435,63116,65357,65259,65325,65359,65390,65388,65355,65355,65256,65190,65157,65093,62947,60802,58626,45858,35329},
//	{2080,2080,4160,4160,6208,6240,6240,8320,8320,10400,12480,14560,16640,16608,20800,54400,65184,65248,65248,65249,50144,35392,35424,33377,35457,37602,41763,43844,43908,50247,54376,54408,50185,31210,31178,37386,43658,47849,52104,60586,56298,49865,45641,37320,18533,16516,54605,65459,65528,65532,65531,65529,65459,63344,65454,65388,65223,65125,65125,62948,54434,37473,35330,37409},
//	{2080,4128,4160,4160,6240,6240,8320,8320,10400,10432,12512,14592,16608,33376,62912,65184,65184,65217,65281,60800,37440,35424,33377,33409,37570,39683,41795,43876,43845,31238,22823,31145,35307,35340,37420,39468,35306,35305,54314,62860,64972,54218,54250,62991,54540,48173,31305,31338,39823,48340,33421,22665,18504,18471,18568,50408,65224,65158,65093,54403,37473,45858,54370,56482},
//	{4128,4160,4160,6240,6240,8320,8320,10400,10400,12480,14560,14560,31264,65056,65153,65153,65186,65249,65153,43744,35360,33376,33377,35489,37602,39715,41827,45956,29188,14440,24874,31148,35309,35276,35275,35275,31051,22633,22633,45865,62891,56523,50090,56590,52365,20741,12293,12324,12292,14340,14341,16391,18471,18471,16390,16423,50373,65190,63078,54468,54369,65028,64963,58562},
//	{4160,4160,6240,6240,8320,8320,8352,10400,12480,14560,14560,16608,56480,65089,65121,65154,65218,65218,52224,35360,33376,33377,35457,35490,37634,41795,43875,39715,16520,16490,20616,20616,24809,26859,28907,28844,26732,24651,24650,22600,45962,60877,56460,52105,58574,54349,22627,16420,16422,18471,18503,18471,18470,18470,20551,16390,14534,63111,65224,65159,65125,62916,48002,39553},
//	{4192,6240,6240,6272,8320,8352,10400,10400,12512,14592,12480,33376,64993,65056,65122,65154,65219,58657,37473,35424,35457,35457,35489,37570,39714,39716,43876,31267,12296,29032,50058,47849,39336,37193,37193,33002,28811,24650,26698,26698,28839,58736,65495,58574,54023,62799,60558,43560,35111,33000,30952,26824,24679,22599,22599,18439,8195,60969,65323,65193,60773,47971,39585,41633},
//	{6240,6240,6272,8320,8320,8352,10400,12480,14560,14560,16640,58624,65025,65025,65057,65154,65123,41696,35425,35488,35488,35489,35521,37602,37667,43876,52326,20803,12294,31176,64844,64907,62730,58538,56362,49866,37194,26731,26698,26730,30825,41578,65497,65531,63061,58509,60752,65076,60625,52013,47691,43434,47692,43532,26728,18471,4098,50472,65292,54470,41698,41634,41634,41634},
//	{8320,6240,8320,8320,8352,10400,10432,12512,14560,12512,29216,64993,64961,64993,65025,65090,58658,35424,35456,35489,35489,35521,37601,37634,41827,54405,37636,10341,18600,29001,35305,56520,65002,65067,65066,60712,54057,39275,26762,28777,30889,34950,54481,65532,65534,65532,58606,62929,65366,65173,62802,60593,58288,49805,28840,18503,4098,41991,65326,48134,41667,41634,41634,41633},
//	{8320,6272,8320,8320,8352,10400,12480,12512,14592,16640,50144,64961,64961,62881,64993,65026,48097,35457,35489,35489,35489,37569,37602,37666,52324,43909,10340,18630,29002,31051,26890,24776,33161,43690,52075,61004,62828,51947,41354,35049,37194,34984,41221,65433,65533,65535,65532,60491,65332,65430,65399,65271,60400,51821,35082,20584,6146,31398,65295,48198,41699,41666,41634,41634},
//	{6240,8320,8320,8320,10400,10400,12480,14560,20800,22848,50145,62913,64993,62913,64961,64961,45952,37537,37537,37537,37569,37569,37634,37698,58726,16613,8197,22698,26924,28972,28971,31052,33100,31084,24681,39563,65427,62799,49802,43466,41289,39209,39076,60786,65533,65534,65534,65140,64878,65526,65495,64914,58223,49773,39275,24712,6147,22981,65231,48199,41699,41666,41634,41633},
//	{6240,8320,8320,8320,10400,10432,14560,18720,20832,20800,22880,39648,62881,62945,64961,64962,46017,35456,37537,37570,37569,37601,37633,39779,58759,16550,29096,35338,31115,29002,28971,31052,33101,31020,22601,20486,56721,65526,58672,45673,43401,41289,39110,56204,65533,65534,65534,65432,65105,65494,65494,64721,60270,51853,41323,26792,8195,12483,63120,48232,41731,41698,41666,41634},
//	{8288,8288,8320,8352,10432,14592,16640,18720,20832,22880,22880,20768,35456,60801,62946,64962,54433,37537,37537,37569,37569,37601,37633,48227,58790,31270,52105,49993,58345,52041,43593,35210,28875,24713,22601,22536,39561,65528,65527,60913,49898,43303,43239,51849,65533,65534,65534,65532,65463,65527,65299,64656,62318,51788,43371,28807,8195,10338,60975,50313,41731,41699,41666,41634},
//	{8288,8320,8320,8352,16608,20768,16640,18720,20800,20832,22912,24960,22848,37537,62849,64994,62850,45953,37536,37601,37602,37666,43971,58791,29222,33353,35368,18600,37383,60491,62571,56299,35146,28809,26761,28777,32935,65399,65529,65529,65431,58576,43238,45381,65401,65534,65534,65532,65529,65074,64913,64688,60270,47595,30887,26855,10275,8257,56782,50313,41731,41699,41666,39586},
//	{8288,8288,8288,10401,29088,18720,16640,18720,20800,20832,20832,24992,27072,24961,43841,62881,64994,60706,41729,39650,39714,41826,54469,29221,14471,29033,24841,18602,20649,35272,58538,65198,49931,35082,35050,35082,30856,50158,65531,65531,65531,65531,60754,43137,65108,65533,65534,65531,62377,64589,65042,64719,45512,24645,37418,33258,8194,8258,52492,50345,41666,39586,41763,52291},
//	{8288,8288,6240,24928,43680,16576,16640,18720,20800,20800,22880,24992,29152,29152,29121,50145,62850,62850,50178,41762,41794,46084,37668,12390,16554,20712,31082,20650,22699,24744,41705,65390,60781,41354,37130,37130,35017,35111,65498,65531,65531,65532,65532,62963,63125,65532,65530,58216,56006,58509,60524,51912,39495,52496,63224,18596,6146,8226,48234,48200,39619,48067,60805,62949},
//	{8288,8288,8256,45856,41632,10336,16640,18720,20800,20800,22880,24960,27072,29184,29152,31233,52225,58562,56450,45986,41826,54470,27172,24904,45737,49896,58313,33097,20618,24714,33129,63118,65489,52076,39209,39177,37098,30821,60884,65532,65532,65532,65532,65531,65531,65205,56070,58182,60620,60653,60750,65268,65529,65497,58802,12323,6146,8194,31333,52327,56548,60869,62981,62949},
//	{6208,6208,12384,62784,39520,8288,16608,18688,18752,20800,20832,22912,27072,29153,29185,29184,39585,50113,52194,50114,41826,54469,25061,29064,47784,49832,60426,49896,26760,24714,28873,54379,65525,65396,49866,39176,37097,32902,50029,65532,65531,65532,65531,65530,65367,62539,65202,65527,65527,65527,65528,65528,65528,65527,65526,52526,31174,31238,54537,65258,65062,62981,62981,62949},
//	{6176,2048,29120,65184,45824,10304,12448,16608,18720,20800,20832,22912,24992,27105,29185,29217,33344,47969,50082,50081,39747,54502,22916,26982,43592,45672,52041,58475,43560,35112,35146,45641,65463,65530,65302,49802,41223,41192,52046,65531,65531,65530,65496,65463,65429,65462,65526,65526,65524,65524,65524,65524,65525,65525,65492,65492,65489,65391,65454,65421,65127,65093,65029,60804},
//	{2048,0,50144,65216,52192,10304,14528,14496,18688,18720,20800,22880,24992,27072,29153,31265,33312,45921,50082,50114,39715,58758,22916,22853,39399,43592,45672,56427,58734,52139,45544,41319,65207,65532,65531,65368,60690,53901,56142,65498,65498,65497,65463,65462,65494,65493,65525,65525,65523,65522,65522,65490,65491,65491,65491,65426,65489,65455,65455,65455,65159,65126,65126,58692},
//	{4096,2048,54400,65152,60640,12352,14528,14496,16640,18720,20800,22880,24960,27072,31233,31265,31232,47937,50082,50114,41763,58759,29221,20740,37319,43560,43560,49993,58733,63153,56687,43397,56398,65533,65533,65532,65532,62966,56110,65433,65497,65496,65463,65462,65526,65493,65200,60715,56362,54218,54251,56332,54412,56525,52301,35369,43816,65424,65456,65422,65159,65125,60837,50211},
//	{6144,2048,48096,65120,64896,14432,14528,14528,16608,18720,20800,22880,22912,29152,35488,29185,31200,47938,50050,50082,43811,52390,52424,24899,33157,41446,41446,50056,63152,65428,65462,60881,54349,65500,65533,65533,65531,65466,65109,65465,65464,65495,65527,65462,60911,49862,45604,47816,52107,52108,47851,41546,39466,37321,24676,20483,33061,65391,65424,65422,65128,56548,43843,39682},
//	{8224,6144,8192,65024,65120,20704,16576,16576,16608,18720,20800,22880,24992,37504,54336,27040,31168,47938,50050,50050,45923,43907,60971,44007,33091,37188,47911,63184,65395,65429,65462,65463,63351,65466,65531,65498,65465,65465,65432,65431,65463,65494,60880,49927,43492,49962,54319,54319,54319,54221,47852,41547,37387,35307,22597,22659,61134,65423,65391,65228,52324,41730,41762,41762},
//	{8224,10272,4096,50080,65184,33312,14496,16608,16608,18720,20800,22880,24992,39648,60736,27008,31200,47905,50050,47970,45923,45924,48262,56779,39330,45830,63248,65426,63380,65430,65431,65432,65432,65465,65465,65465,65465,65465,65432,65464,65332,54024,43395,45606,52140,54351,56399,56367,54254,52077,43627,37355,37387,33193,20612,58927,65488,65391,56617,50245,45955,43875,41794,41730},
//	{8224,10304,6144,12320,64960,52320,16544,16608,16608,18688,20800,22880,24960,41728,62784,24960,31232,47905,47969,45857,48035,50116,45858,43522,45828,63249,65426,65426,63348,65429,65431,65432,65432,65432,65433,65432,65464,65464,65496,62961,47589,47621,52074,52108,52108,54254,54318,54319,52142,47852,39467,37420,33194,24838,58928,65489,61102,29252,25059,50376,45955,43843,41762,39682},
//	{8256,8256,10304,4096,54240,64960,20736,16608,18656,18688,20800,22880,24960,52192,62784,22912,33312,47905,45826,45857,52260,48003,39297,41474,63215,65426,65425,65426,65428,65430,65430,65431,65431,65431,65431,65399,65431,65463,60717,49572,49896,52172,52107,52043,52011,52044,52109,52110,49932,41579,35307,33195,31176,61107,63314,44041,10306,2048,27236,52423,43875,41794,39682,39650},
//	{8256,8256,10336,8224,16512,64768,45888,16576,18656,18688,20768,22880,24928,56448,54368,24960,37440,45825,41601,50146,52260,41473,39233,61004,65425,65425,65426,65427,65428,63349,65397,65397,65396,65364,65332,65397,65364,56264,49668,54056,52140,52076,52043,49963,49866,49867,49900,49900,45708,37387,33194,31146,50384,46254,18629,14406,8195,2048,41925,50278,41795,41762,39650,39617},
//	{8256,8256,10336,10336,8224,54112,60608,27008,16608,18688,20768,22848,27008,56480,33344,31200,39520,41600,41633,56548,50019,37184,58761,65424,65392,65425,65394,65394,65395,63348,65396,63315,65331,65298,65363,65234,52006,51877,54121,54122,49929,49865,49768,47720,49867,49900,47787,45708,43595,33226,29066,26985,18662,16486,16487,18535,6146,4128,56682,46052,43875,39682,39618,37537},
//	{8256,8256,10304,10336,8256,29056,58400,45856,18656,18688,20768,22848,33312,45920,26976,35392,37440,39488,48002,58660,41344,54245,65423,65423,65424,65393,65393,65394,63346,65362,65362,65330,65330,65330,58830,49861,51910,54023,47750,47718,49831,49735,47655,49900,52045,49900,45707,43628,39467,31114,29067,24873,20615,16519,16520,14438,2049,25091,60842,43908,41762,39650,37537,37505},
//	{8288,10304,10304,10336,10304,12352,47872,52128,31200,16608,22848,22848,37504,35392,31200,35360,39520,41600,56516,52098,45634,65389,65422,65391,65392,65392,65393,65393,63345,63313,65329,63249,65297,58699,49796,49829,49797,47749,52005,54119,47686,45607,52012,52110,49900,45707,45676,43596,33194,26954,26954,22793,18600,16520,16520,8195,6208,60876,50214,43843,39650,37538,35457,35425},
//	{10336,10336,12384,10336,10336,8288,31200,52064,41632,14560,24928,24896,35424,31200,33248,35296,39488,52130,58596,45665,63050,65422,65390,65391,65391,65392,63344,65360,65360,63280,63248,65198,56422,47745,51940,54243,60611,62692,52101,39461,39432,49901,49933,47821,45708,45676,43596,37354,24905,22793,22760,18632,16551,16487,14406,4097,44073,63119,41698,39618,37570,35458,35425,33313},
//	{10336,12416,14464,10336,10336,8256,22816,49952,33280,16576,24928,24928,33280,35360,31168,33184,43648,60741,58660,60774,65356,65389,65390,65390,65390,65391,65391,65359,65327,65295,63082,56516,54306,58564,62982,63013,54307,39460,31077,35272,43627,43627,43595,43595,43627,43595,39435,29033,22793,20712,18599,16551,16487,12358,6147,10339,65234,60877,39651,39618,35457,33345,31233,29152},
//	{16512,16544,14464,10336,8288,8288,33280,47840,14528,22816,24896,24960,35424,43808,31104,33184,52194,65126,65191,65289,65356,65389,65389,65390,65390,65358,65358,65326,65293,63114,62981,65029,65061,65126,62948,45762,31011,26885,26918,31047,35241,35241,37321,37354,39434,37354,29033,22792,20680,16551,16518,14438,12358,8228,4098,8258,65235,60943,39555,37538,35425,31232,31200,29152},
//	{18592,18592,12384,8288,8288,8256,47808,33312,12416,24896,22816,24928,50208,41728,31040,41536,62852,65190,65256,65322,65388,65389,65389,65389,65389,65358,65358,65325,65226,63014,65061,65094,65093,54339,35202,28867,24773,24838,24806,24838,26919,26952,29000,29000,26952,24872,22792,20679,18598,16518,14438,14438,10277,8229,8228,4099,44075,65364,41700,35393,33313,31232,29152,29152},
//	{18592,16512,10336,8288,6208,20768,49952,10336,16576,22816,22816,24864,60896,33152,33152,54338,65125,65223,65289,65323,65388,65389,65389,65357,65356,65357,65357,65291,65127,65094,65093,64996,43777,28930,26819,24740,18597,18597,18598,18630,18630,18598,18598,18630,20678,20678,20679,18630,18598,16518,16549,16517,12357,12358,10310,8197,6211,54736,58928,33346,31233,31233,29185,29184},
//	{18592,16512,10336,8288,8288,47808,37440,6176,20736,20736,20736,35456,60928,28928,43744,62948,65189,65256,65322,65355,65356,65356,65356,65356,65356,65356,65291,65159,65126,65125,60739,37440,35361,61165,56843,31172,16484,16516,16517,16517,16517,14469,14469,14469,14501,16549,16581,16549,12389,16548,33316,18629,16487,16519,14439,12358,8196,8259,56848,58798,31234,29153,29152,22912},
//	{18560,14432,8288,8288,8288,49952,20736,10336,20736,20736,18656,54528,50240,31008,58658,65125,65223,65289,65322,65355,65356,65356,65356,65356,65355,65291,65224,65157,65125,58595,37376,39456,41698,54632,65518,65455,37672,16484,16485,16517,14437,12389,10308,8227,6179,4131,2049,2049,18691,52227,37539,18565,22761,20681,18600,14438,12390,6147,10339,56686,48200,24960,20800,18721},
//	{16544,12384,8256,8288,10336,49920,12384,10304,20704,20736,22784,65120,37280,43680,63076,65222,65256,65289,65322,65355,65355,65356,65355,65355,65290,65256,65190,65028,52098,37344,39488,41632,39584,35360,45987,65389,65518,50506,22789,16452,12291,8195,6146,2049,2048,4096,14529,45857,64866,50145,18598,20681,22761,22729,20681,18568,14438,14437,6147,6242,46022,39652,20801,18721},
//	{14464,10336,8256,8257,10336,47808,8256,8256,18624,18592,39584,60896,35136,60771,65189,65256,65288,65321,65322,65323,65355,65355,65323,65322,65256,65189,62755,45729,37280,43680,45824,43744,41664,37472,35392,39617,56743,65385,61063,35427,26914,29026,35393,43810,54370,62818,64993,65027,52259,20712,20648,22761,22729,22761,22761,20648,18567,16486,16453,6146,2048,29121,31201,18688},
//	{12384,10304,10304,8257,8256,47808,8224,10336,18624,20672,60768,54336,47904,65254,65255,65288,65288,65321,65322,65322,65355,65322,65289,65255,65157,60706,45728,47744,54304,62849,62881,52256,39616,37504,37504,37472,39584,54499,52322,54466,62914,65026,65027,65058,65026,65058,65058,54371,22728,20616,22728,22761,22761,22761,22761,22761,20648,18567,18535,14404,0,2048,14464,18656},
//	{12384,10336,10304,6208,8256,47776,6144,10336,18592,35360,65090,49952,62916,65255,65255,65288,65289,65322,65322,65322,65322,65289,65223,65124,62947,62817,60672,62848,64992,58560,43712,31232,33344,35456,37504,39617,48034,50179,54467,58627,64995,64995,64994,64993,64992,64961,56452,24775,18536,22728,22728,22729,22761,24809,22761,22761,22728,20648,20615,12324,2049,0,8224,31136},
//	{10304,10304,10304,6208,10304,41472,6176,10304,20640,56384,62913,56416,65222,65255,65288,65288,65321,65321,65321,65321,65289,65223,65124,65091,65091,65090,62881,56448,41664,29120,27072,29152,29184,31264,35424,37569,45986,43906,37569,48195,50209,24802,24737,30946,30979,31012,22696,18537,24806,20615,22728,22728,22729,24809,24809,22761,22729,22696,20615,8193,2048,16545,47904,56192},
//	{10304,12352,10304,4128,12384,41344,4128,10336,35200,65059,65123,65059,65222,65255,65288,65288,65321,65321,65321,65288,65222,65124,65124,65091,65026,56513,37536,27040,24960,27072,27040,27072,27072,27104,29184,31264,31264,33344,29184,37665,65284,31330,8192,8193,8194,10243,10245,33254,52291,24774,20614,20648,22729,22729,22761,22728,22727,22694,18564,20609,45792,64736,64832,62624},
//	{12384,12384,10304,4128,14464,37184,4128,14432,52000,65155,65156,65189,65254,65255,65288,65288,65288,65289,65288,65255,65156,65092,65059,58626,39584,24960,22880,27040,27040,24992,24960,24992,24992,25024,27072,29184,29216,31264,31264,27104,52515,65350,27104,6144,6144,8193,31267,62881,65057,52353,22756,20614,22728,22695,22694,24837,33217,41665,52226,60640,64928,64928,64896,64736},
//	{12384,12384,10304,4096,12384,28864,6176,22656,62688,65156,65156,65189,65255,65287,65288,65288,65288,65288,65255,65189,65091,62722,41632,24864,22848,24960,24960,24960,24960,24960,22912,22912,22944,22944,24992,27072,29184,29216,31264,29184,31361,65319,54595,6144,14433,45952,64928,65024,65121,65152,60832,54497,50242,41795,41795,56576,64992,65056,65024,64992,64960,64960,64896,62720},
//	{12384,12384,10304,4128,10304,26752,12352,37248,65091,65188,65188,65221,65254,65255,65255,65287,65222,65189,65156,64802,45728,22752,20736,22880,24928,24928,24960,24992,24960,22912,22880,22912,22912,22912,22944,25024,29184,29184,29184,29184,29185,48324,46116,29217,58592,64961,64928,64992,65057,65088,65121,65120,65121,65120,65088,65088,65088,65056,65024,64992,64992,64992,64928,62688},
//	{14432,14432,10304,6176,14400,22624,16416,54240,65187,65188,65221,65253,65254,65254,65222,65157,65092,64962,54112,20640,14432,18656,16576,18688,35296,41696,29120,24992,22912,22912,22912,22880,22912,22912,22944,24992,27072,29152,29152,29120,27040,31296,45985,60673,64896,64896,64896,64928,65024,65056,65056,65088,65088,65089,65088,65056,65056,65056,65024,65024,65024,64960,54337,31328},
//	{16512,14432,10304,8224,18528,20544,24640,62816,65187,65188,65220,65253,65253,65221,65189,65092,56256,31072,16512,16512,16576,26944,39552,47936,47872,35360,24960,24960,20800,35360,43744,37440,29120,24960,24960,24960,24960,27040,29152,33312,45888,54369,58560,60640,62752,62784,64864,64896,64960,65024,65024,65056,65056,65056,65088,65056,65056,65056,65056,64961,50273,27137,12482,10370},
//	{16512,14432,10304,10272,18560,22592,37216,65025,65154,65187,65220,65221,65221,65188,58562,31168,14400,14432,14464,14464,14496,31232,39584,31168,24928,20800,20800,18688,33280,47840,49920,47840,47840,45792,45792,45793,47873,47905,50017,54273,56449,58528,58528,58529,58528,60640,62752,64865,64896,64960,64960,65024,65057,65089,65121,65088,64993,52320,29248,14528,8258,10338,10371,12419},
//	{16480,14432,10304,12352,22624,26688,52128,65088,65089,65186,65187,65219,65091,39584,14368,16448,39456,47936,18592,14464,12448,12480,10400,12480,12480,14560,20768,41632,52000,49920,47808,47872,47872,47872,47904,49984,50016,52096,52129,52193,56385,56417,56417,56416,56417,58496,60608,62720,64865,64897,64865,62752,58560,54368,45856,29088,10336,6144,8258,10338,12386,12418,12419,12419},
//	{16480,14432,10304,14432,28832,37088,64993,65088,65089,65153,65058,54336,24800,12288,39360,56160,54016,53984,52064,49952,43712,41632,39584,39584,41632,47904,54144,54144,45760,24896,27008,45760,47872,47872,47872,47904,50016,50048,50048,50080,54240,54273,54272,52193,52193,50112,50080,48000,41728,29184,16672,6208,2048,0,0,1,6210,8258,10306,10306,12387,12419,12419,12419},
//	{16480,14400,12384,16480,28832,49856,65120,65120,65088,56416,26816,20544,24704,39328,51872,33120,12352,12416,35360,47872,49984,54112,54080,54080,54080,52064,47872,24928,12480,10400,10400,12480,18752,31264,41632,43744,43712,41664,41632,41664,41696,39616,33376,27104,22944,29185,16672,2048,0,2048,2048,2081,4129,4097,6177,6177,6178,8258,8258,10339,12387,12419,12419,12419},
//	{16480,14432,16480,18528,33024,62912,65152,60672,41408,22592,24704,26848,24768,14464,12352,10304,10368,10336,10336,10368,10368,10368,10368,10368,10368,10368,10368,10400,12448,12448,12448,12448,10368,8320,8320,10368,12448,12480,14560,16640,18720,20800,20800,20832,18752,27008,54144,4096,0,2048,4096,4097,6145,6178,6178,6178,6178,6178,6178,8259,10339,10339,10339,12419},
//	{16480,16512,16480,20608,45760,65120,49888,28832,22624,24768,22688,20608,14400,12384,12384,12416,12416,12384,12416,12416,12416,12416,12416,10368,12416,12448,12448,12448,12448,12448,12448,12448,12480,12448,12480,12448,14528,16608,18688,20800,20832,20800,20800,20800,18720,16640,56160,49984,4160,2048,4097,4097,4098,4098,4098,4098,4130,6178,6178,6178,8258,8259,10339,10339},
//	{16480,16512,18560,24768,51968,39296,24672,20608,18560,18528,16480,16480,14432,14432,14432,12384,12384,12384,12384,12416,12416,12416,12416,12416,12416,12416,12416,10368,10400,12448,12448,12448,12448,12448,12480,14528,16608,16608,18688,18720,20800,20800,18752,18752,18720,16672,18720,62496,22848,2048,4097,4097,4097,4098,4098,4098,4098,4098,4098,4098,6178,6178,6178,8258},
//	{16480,16512,18592,26848,26816,18528,18560,18528,18528,16480,14432,14432,14432,14432,12384,12384,12384,12384,12384,10336,10368,10368,10368,10368,10368,10368,10400,10400,10400,10400,12448,12448,12448,14528,14528,14528,16608,16608,16640,18720,18752,18752,18720,18720,16640,18720,14560,35360,56192,4128,4129,4097,4097,4097,4098,4098,4098,4098,4098,4098,4098,4098,4098,4098},
//	{16480,18560,20640,22688,18560,18592,18560,18528,16480,16480,14432,14432,14432,12384,12384,12384,12384,12384,10336,10368,10368,10368,10368,10368,10368,10368,10400,10400,12448,12448,12448,12480,14528,14528,14528,16576,16608,16608,16640,16640,16640,18688,18688,16640,16640,16640,16640,16608,47808,22816,2048,4097,4097,4097,4098,4098,4098,4098,4098,4098,4098,4098,4098,4098},
//	{16512,18592,20640,18560,18560,18560,18560,18528,16480,16480,14432,14432,14432,12384,12384,12384,12384,10336,10336,10368,10368,10368,10368,10368,10368,10400,10400,10400,12448,12448,14528,14528,14528,14528,14528,16608,16608,16608,16608,16608,16640,16640,16640,16640,16640,16640,16640,16640,27040,41600,2048,4129,4097,4097,4098,4098,4098,4098,4098,4098,4098,4098,4098,4098},
//
//};