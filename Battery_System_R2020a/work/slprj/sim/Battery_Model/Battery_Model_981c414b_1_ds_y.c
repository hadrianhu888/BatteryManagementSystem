#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_y.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t196 , NeDsMethodOutput * t197 ) { PmRealVector out ;
real_T X [ 1448 ] ; real_T t0 [ 292 ] ; real_T U [ 120 ] ; int32_T b ; ( void
) LC ; for ( b = 0 ; b < 120 ; b ++ ) { U [ b ] = t196 -> mU . mX [ b ] ; }
for ( b = 0 ; b < 1448 ; b ++ ) { X [ b ] = t196 -> mX . mX [ b ] ; } out =
t197 -> mY ; t0 [ 0ULL ] = X [ 386ULL ] - X [ 388ULL ] ; t0 [ 1ULL ] = X [
388ULL ] - X [ 389ULL ] ; t0 [ 2ULL ] = X [ 389ULL ] - X [ 390ULL ] ; t0 [
3ULL ] = X [ 390ULL ] - X [ 391ULL ] ; t0 [ 4ULL ] = X [ 391ULL ] - X [
392ULL ] ; t0 [ 5ULL ] = X [ 392ULL ] - X [ 393ULL ] ; t0 [ 6ULL ] = X [
393ULL ] - X [ 406ULL ] ; t0 [ 7ULL ] = X [ 406ULL ] - X [ 407ULL ] ; t0 [
8ULL ] = X [ 407ULL ] - X [ 408ULL ] ; t0 [ 9ULL ] = X [ 408ULL ] - X [
409ULL ] ; t0 [ 10ULL ] = X [ 409ULL ] - X [ 410ULL ] ; t0 [ 11ULL ] = X [
410ULL ] - X [ 411ULL ] ; t0 [ 12ULL ] = X [ 411ULL ] - X [ 424ULL ] ; t0 [
13ULL ] = X [ 424ULL ] - X [ 425ULL ] ; t0 [ 14ULL ] = X [ 425ULL ] - X [
426ULL ] ; t0 [ 15ULL ] = X [ 426ULL ] - X [ 427ULL ] ; t0 [ 16ULL ] = X [
427ULL ] - X [ 428ULL ] ; t0 [ 17ULL ] = X [ 428ULL ] - X [ 429ULL ] ; t0 [
18ULL ] = X [ 429ULL ] - X [ 442ULL ] ; t0 [ 19ULL ] = X [ 442ULL ] - X [
443ULL ] ; t0 [ 20ULL ] = X [ 443ULL ] - X [ 444ULL ] ; t0 [ 21ULL ] = X [
444ULL ] - X [ 445ULL ] ; t0 [ 22ULL ] = X [ 445ULL ] - X [ 446ULL ] ; t0 [
23ULL ] = X [ 446ULL ] - X [ 447ULL ] ; t0 [ 24ULL ] = X [ 447ULL ] - X [
460ULL ] ; t0 [ 25ULL ] = X [ 460ULL ] - X [ 461ULL ] ; t0 [ 26ULL ] = X [
461ULL ] - X [ 462ULL ] ; t0 [ 27ULL ] = X [ 462ULL ] - X [ 463ULL ] ; t0 [
28ULL ] = X [ 463ULL ] - X [ 464ULL ] ; t0 [ 29ULL ] = X [ 464ULL ] - X [
465ULL ] ; t0 [ 30ULL ] = X [ 465ULL ] - X [ 478ULL ] ; t0 [ 31ULL ] = X [
478ULL ] - X [ 479ULL ] ; t0 [ 32ULL ] = X [ 479ULL ] - X [ 480ULL ] ; t0 [
33ULL ] = X [ 480ULL ] - X [ 481ULL ] ; t0 [ 34ULL ] = X [ 481ULL ] - X [
482ULL ] ; t0 [ 35ULL ] = X [ 482ULL ] - X [ 483ULL ] ; t0 [ 36ULL ] = X [
483ULL ] - X [ 496ULL ] ; t0 [ 37ULL ] = X [ 496ULL ] - X [ 497ULL ] ; t0 [
38ULL ] = X [ 497ULL ] - X [ 498ULL ] ; t0 [ 39ULL ] = X [ 498ULL ] - X [
499ULL ] ; t0 [ 40ULL ] = X [ 499ULL ] - X [ 500ULL ] ; t0 [ 41ULL ] = X [
500ULL ] - X [ 501ULL ] ; t0 [ 42ULL ] = X [ 501ULL ] - X [ 514ULL ] ; t0 [
43ULL ] = X [ 514ULL ] - X [ 515ULL ] ; t0 [ 44ULL ] = X [ 515ULL ] - X [
516ULL ] ; t0 [ 45ULL ] = X [ 516ULL ] - X [ 517ULL ] ; t0 [ 46ULL ] = X [
517ULL ] - X [ 518ULL ] ; t0 [ 47ULL ] = X [ 518ULL ] - X [ 519ULL ] ; t0 [
48ULL ] = X [ 519ULL ] - X [ 532ULL ] ; t0 [ 49ULL ] = X [ 532ULL ] - X [
533ULL ] ; t0 [ 50ULL ] = X [ 533ULL ] - X [ 534ULL ] ; t0 [ 51ULL ] = X [
534ULL ] - X [ 535ULL ] ; t0 [ 52ULL ] = X [ 535ULL ] - X [ 536ULL ] ; t0 [
53ULL ] = X [ 536ULL ] - X [ 537ULL ] ; t0 [ 54ULL ] = X [ 537ULL ] - X [
550ULL ] ; t0 [ 55ULL ] = X [ 550ULL ] - X [ 551ULL ] ; t0 [ 56ULL ] = X [
551ULL ] - X [ 552ULL ] ; t0 [ 57ULL ] = X [ 552ULL ] - X [ 553ULL ] ; t0 [
58ULL ] = X [ 553ULL ] - X [ 554ULL ] ; t0 [ 59ULL ] = X [ 554ULL ] - X [
555ULL ] ; t0 [ 60ULL ] = X [ 555ULL ] - X [ 568ULL ] ; t0 [ 61ULL ] = X [
568ULL ] - X [ 569ULL ] ; t0 [ 62ULL ] = X [ 569ULL ] - X [ 570ULL ] ; t0 [
63ULL ] = X [ 570ULL ] - X [ 571ULL ] ; t0 [ 64ULL ] = X [ 571ULL ] - X [
572ULL ] ; t0 [ 65ULL ] = X [ 572ULL ] - X [ 573ULL ] ; t0 [ 66ULL ] = X [
573ULL ] - X [ 586ULL ] ; t0 [ 67ULL ] = X [ 586ULL ] - X [ 587ULL ] ; t0 [
68ULL ] = X [ 587ULL ] - X [ 588ULL ] ; t0 [ 69ULL ] = X [ 588ULL ] - X [
589ULL ] ; t0 [ 70ULL ] = X [ 589ULL ] - X [ 590ULL ] ; t0 [ 71ULL ] = X [
590ULL ] - X [ 591ULL ] ; t0 [ 72ULL ] = X [ 591ULL ] - X [ 604ULL ] ; t0 [
73ULL ] = X [ 604ULL ] - X [ 605ULL ] ; t0 [ 74ULL ] = X [ 605ULL ] - X [
606ULL ] ; t0 [ 75ULL ] = X [ 606ULL ] - X [ 607ULL ] ; t0 [ 76ULL ] = X [
607ULL ] - X [ 608ULL ] ; t0 [ 77ULL ] = X [ 608ULL ] - X [ 609ULL ] ; t0 [
78ULL ] = X [ 609ULL ] - X [ 622ULL ] ; t0 [ 79ULL ] = X [ 622ULL ] - X [
623ULL ] ; t0 [ 80ULL ] = X [ 623ULL ] - X [ 624ULL ] ; t0 [ 81ULL ] = X [
624ULL ] - X [ 625ULL ] ; t0 [ 82ULL ] = X [ 625ULL ] - X [ 626ULL ] ; t0 [
83ULL ] = X [ 626ULL ] - X [ 627ULL ] ; t0 [ 84ULL ] = X [ 627ULL ] - X [
640ULL ] ; t0 [ 85ULL ] = X [ 640ULL ] - X [ 641ULL ] ; t0 [ 86ULL ] = X [
641ULL ] - X [ 642ULL ] ; t0 [ 87ULL ] = X [ 642ULL ] - X [ 643ULL ] ; t0 [
88ULL ] = X [ 643ULL ] - X [ 644ULL ] ; t0 [ 89ULL ] = X [ 644ULL ] - X [
645ULL ] ; t0 [ 90ULL ] = X [ 645ULL ] - X [ 658ULL ] ; t0 [ 91ULL ] = X [
658ULL ] - X [ 659ULL ] ; t0 [ 92ULL ] = X [ 659ULL ] - X [ 660ULL ] ; t0 [
93ULL ] = X [ 660ULL ] - X [ 661ULL ] ; t0 [ 94ULL ] = X [ 661ULL ] - X [
662ULL ] ; t0 [ 95ULL ] = X [ 662ULL ] - X [ 387ULL ] ; t0 [ 96ULL ] = X [
679ULL ] ; t0 [ 97ULL ] = X [ 687ULL ] ; t0 [ 98ULL ] = X [ 695ULL ] ; t0 [
99ULL ] = X [ 703ULL ] ; t0 [ 100ULL ] = X [ 711ULL ] ; t0 [ 101ULL ] = X [
719ULL ] ; t0 [ 102ULL ] = X [ 13ULL ] ; t0 [ 103ULL ] = X [ 9ULL ] ; t0 [
104ULL ] = X [ 5ULL ] ; t0 [ 105ULL ] = X [ 1ULL ] ; t0 [ 106ULL ] = X [ 0ULL
] ; t0 [ 107ULL ] = X [ 17ULL ] ; t0 [ 108ULL ] = X [ 727ULL ] ; t0 [ 109ULL
] = X [ 735ULL ] ; t0 [ 110ULL ] = X [ 743ULL ] ; t0 [ 111ULL ] = X [ 751ULL
] ; t0 [ 112ULL ] = X [ 759ULL ] ; t0 [ 113ULL ] = X [ 767ULL ] ; t0 [ 114ULL
] = X [ 37ULL ] ; t0 [ 115ULL ] = X [ 33ULL ] ; t0 [ 116ULL ] = X [ 29ULL ] ;
t0 [ 117ULL ] = X [ 25ULL ] ; t0 [ 118ULL ] = X [ 24ULL ] ; t0 [ 119ULL ] = X
[ 41ULL ] ; t0 [ 120ULL ] = X [ 775ULL ] ; t0 [ 121ULL ] = X [ 783ULL ] ; t0
[ 122ULL ] = X [ 791ULL ] ; t0 [ 123ULL ] = X [ 799ULL ] ; t0 [ 124ULL ] = X
[ 807ULL ] ; t0 [ 125ULL ] = X [ 815ULL ] ; t0 [ 126ULL ] = X [ 61ULL ] ; t0
[ 127ULL ] = X [ 57ULL ] ; t0 [ 128ULL ] = X [ 53ULL ] ; t0 [ 129ULL ] = X [
49ULL ] ; t0 [ 130ULL ] = X [ 48ULL ] ; t0 [ 131ULL ] = X [ 65ULL ] ; t0 [
132ULL ] = X [ 823ULL ] ; t0 [ 133ULL ] = X [ 831ULL ] ; t0 [ 134ULL ] = X [
839ULL ] ; t0 [ 135ULL ] = X [ 847ULL ] ; t0 [ 136ULL ] = X [ 855ULL ] ; t0 [
137ULL ] = X [ 863ULL ] ; t0 [ 138ULL ] = X [ 85ULL ] ; t0 [ 139ULL ] = X [
81ULL ] ; t0 [ 140ULL ] = X [ 77ULL ] ; t0 [ 141ULL ] = X [ 73ULL ] ; t0 [
142ULL ] = X [ 72ULL ] ; t0 [ 143ULL ] = X [ 89ULL ] ; t0 [ 144ULL ] = X [
871ULL ] ; t0 [ 145ULL ] = X [ 879ULL ] ; t0 [ 146ULL ] = X [ 887ULL ] ; t0 [
147ULL ] = X [ 895ULL ] ; t0 [ 148ULL ] = X [ 903ULL ] ; t0 [ 149ULL ] = X [
911ULL ] ; t0 [ 150ULL ] = X [ 109ULL ] ; t0 [ 151ULL ] = X [ 105ULL ] ; t0 [
152ULL ] = X [ 101ULL ] ; t0 [ 153ULL ] = X [ 97ULL ] ; t0 [ 154ULL ] = X [
96ULL ] ; t0 [ 155ULL ] = X [ 113ULL ] ; t0 [ 156ULL ] = X [ 919ULL ] ; t0 [
157ULL ] = X [ 927ULL ] ; t0 [ 158ULL ] = X [ 935ULL ] ; t0 [ 159ULL ] = X [
943ULL ] ; t0 [ 160ULL ] = X [ 951ULL ] ; t0 [ 161ULL ] = X [ 959ULL ] ; t0 [
162ULL ] = X [ 133ULL ] ; t0 [ 163ULL ] = X [ 129ULL ] ; t0 [ 164ULL ] = X [
125ULL ] ; t0 [ 165ULL ] = X [ 121ULL ] ; t0 [ 166ULL ] = X [ 120ULL ] ; t0 [
167ULL ] = X [ 137ULL ] ; t0 [ 168ULL ] = X [ 967ULL ] ; t0 [ 169ULL ] = X [
975ULL ] ; t0 [ 170ULL ] = X [ 983ULL ] ; t0 [ 171ULL ] = X [ 991ULL ] ; t0 [
172ULL ] = X [ 999ULL ] ; t0 [ 173ULL ] = X [ 1007ULL ] ; t0 [ 174ULL ] = X [
157ULL ] ; t0 [ 175ULL ] = X [ 153ULL ] ; t0 [ 176ULL ] = X [ 149ULL ] ; t0 [
177ULL ] = X [ 145ULL ] ; t0 [ 178ULL ] = X [ 144ULL ] ; t0 [ 179ULL ] = X [
161ULL ] ; t0 [ 180ULL ] = X [ 1015ULL ] ; t0 [ 181ULL ] = X [ 1023ULL ] ; t0
[ 182ULL ] = X [ 1031ULL ] ; t0 [ 183ULL ] = X [ 1039ULL ] ; t0 [ 184ULL ] =
X [ 1047ULL ] ; t0 [ 185ULL ] = X [ 1055ULL ] ; t0 [ 186ULL ] = X [ 181ULL ]
; t0 [ 187ULL ] = X [ 177ULL ] ; t0 [ 188ULL ] = X [ 173ULL ] ; t0 [ 189ULL ]
= X [ 169ULL ] ; t0 [ 190ULL ] = X [ 168ULL ] ; t0 [ 191ULL ] = X [ 185ULL ]
; t0 [ 192ULL ] = X [ 1063ULL ] ; t0 [ 193ULL ] = X [ 1071ULL ] ; t0 [ 194ULL
] = X [ 1079ULL ] ; t0 [ 195ULL ] = X [ 1087ULL ] ; t0 [ 196ULL ] = X [
1095ULL ] ; t0 [ 197ULL ] = X [ 1103ULL ] ; t0 [ 198ULL ] = X [ 205ULL ] ; t0
[ 199ULL ] = X [ 201ULL ] ; t0 [ 200ULL ] = X [ 197ULL ] ; t0 [ 201ULL ] = X
[ 193ULL ] ; t0 [ 202ULL ] = X [ 192ULL ] ; t0 [ 203ULL ] = X [ 209ULL ] ; t0
[ 204ULL ] = X [ 1111ULL ] ; t0 [ 205ULL ] = X [ 1119ULL ] ; t0 [ 206ULL ] =
X [ 1127ULL ] ; t0 [ 207ULL ] = X [ 1135ULL ] ; t0 [ 208ULL ] = X [ 1143ULL ]
; t0 [ 209ULL ] = X [ 1151ULL ] ; t0 [ 210ULL ] = X [ 229ULL ] ; t0 [ 211ULL
] = X [ 225ULL ] ; t0 [ 212ULL ] = X [ 221ULL ] ; t0 [ 213ULL ] = X [ 217ULL
] ; t0 [ 214ULL ] = X [ 216ULL ] ; t0 [ 215ULL ] = X [ 233ULL ] ; t0 [ 216ULL
] = X [ 1159ULL ] ; t0 [ 217ULL ] = X [ 1167ULL ] ; t0 [ 218ULL ] = X [
1175ULL ] ; t0 [ 219ULL ] = X [ 1183ULL ] ; t0 [ 220ULL ] = X [ 1191ULL ] ;
t0 [ 221ULL ] = X [ 1199ULL ] ; t0 [ 222ULL ] = X [ 253ULL ] ; t0 [ 223ULL ]
= X [ 249ULL ] ; t0 [ 224ULL ] = X [ 245ULL ] ; t0 [ 225ULL ] = X [ 241ULL ]
; t0 [ 226ULL ] = X [ 240ULL ] ; t0 [ 227ULL ] = X [ 257ULL ] ; t0 [ 228ULL ]
= X [ 1207ULL ] ; t0 [ 229ULL ] = X [ 1215ULL ] ; t0 [ 230ULL ] = X [ 1223ULL
] ; t0 [ 231ULL ] = X [ 1231ULL ] ; t0 [ 232ULL ] = X [ 1239ULL ] ; t0 [
233ULL ] = X [ 1247ULL ] ; t0 [ 234ULL ] = X [ 277ULL ] ; t0 [ 235ULL ] = X [
273ULL ] ; t0 [ 236ULL ] = X [ 269ULL ] ; t0 [ 237ULL ] = X [ 265ULL ] ; t0 [
238ULL ] = X [ 264ULL ] ; t0 [ 239ULL ] = X [ 281ULL ] ; t0 [ 240ULL ] = X [
1255ULL ] ; t0 [ 241ULL ] = X [ 1263ULL ] ; t0 [ 242ULL ] = X [ 1271ULL ] ;
t0 [ 243ULL ] = X [ 1279ULL ] ; t0 [ 244ULL ] = X [ 1287ULL ] ; t0 [ 245ULL ]
= X [ 1295ULL ] ; t0 [ 246ULL ] = X [ 301ULL ] ; t0 [ 247ULL ] = X [ 297ULL ]
; t0 [ 248ULL ] = X [ 293ULL ] ; t0 [ 249ULL ] = X [ 289ULL ] ; t0 [ 250ULL ]
= X [ 288ULL ] ; t0 [ 251ULL ] = X [ 305ULL ] ; t0 [ 252ULL ] = X [ 1303ULL ]
; t0 [ 253ULL ] = X [ 1311ULL ] ; t0 [ 254ULL ] = X [ 1319ULL ] ; t0 [ 255ULL
] = X [ 1327ULL ] ; t0 [ 256ULL ] = X [ 1335ULL ] ; t0 [ 257ULL ] = X [
1343ULL ] ; t0 [ 258ULL ] = X [ 325ULL ] ; t0 [ 259ULL ] = X [ 321ULL ] ; t0
[ 260ULL ] = X [ 317ULL ] ; t0 [ 261ULL ] = X [ 313ULL ] ; t0 [ 262ULL ] = X
[ 312ULL ] ; t0 [ 263ULL ] = X [ 329ULL ] ; t0 [ 264ULL ] = X [ 1351ULL ] ;
t0 [ 265ULL ] = X [ 1359ULL ] ; t0 [ 266ULL ] = X [ 1367ULL ] ; t0 [ 267ULL ]
= X [ 1375ULL ] ; t0 [ 268ULL ] = X [ 1383ULL ] ; t0 [ 269ULL ] = X [ 1391ULL
] ; t0 [ 270ULL ] = X [ 349ULL ] ; t0 [ 271ULL ] = X [ 345ULL ] ; t0 [ 272ULL
] = X [ 341ULL ] ; t0 [ 273ULL ] = X [ 337ULL ] ; t0 [ 274ULL ] = X [ 336ULL
] ; t0 [ 275ULL ] = X [ 353ULL ] ; t0 [ 276ULL ] = X [ 1399ULL ] ; t0 [
277ULL ] = X [ 1407ULL ] ; t0 [ 278ULL ] = X [ 1415ULL ] ; t0 [ 279ULL ] = X
[ 1423ULL ] ; t0 [ 280ULL ] = X [ 1431ULL ] ; t0 [ 281ULL ] = X [ 1439ULL ] ;
t0 [ 282ULL ] = X [ 373ULL ] ; t0 [ 283ULL ] = X [ 369ULL ] ; t0 [ 284ULL ] =
X [ 365ULL ] ; t0 [ 285ULL ] = X [ 361ULL ] ; t0 [ 286ULL ] = X [ 360ULL ] ;
t0 [ 287ULL ] = X [ 377ULL ] ; t0 [ 288ULL ] = ( ( ( X [ 496ULL ] * 0.05 + X
[ 497ULL ] * - 0.05 ) + X [ 504ULL ] * - 0.05 ) + X [ 505ULL ] * - 0.05 ) + X
[ 675ULL ] ; t0 [ 289ULL ] = X [ 386ULL ] - X [ 387ULL ] ; t0 [ 290ULL ] = X
[ 1444ULL ] * 1.0E-9 + X [ 385ULL ] ; t0 [ 291ULL ] = ( ( ( ( ( ( ( X [
496ULL ] * - 5.0000000000000008E-11 + X [ 497ULL ] * 5.0000000000000008E-11 )
+ X [ 504ULL ] * 5.0000000000000008E-11 ) + X [ 505ULL ] *
5.0000000000000008E-11 ) + X [ 675ULL ] * - 1.0E-9 ) + X [ 1444ULL ] * -
1.0E-9 ) + U [ 112ULL ] * 1.0E-9 ) + U [ 113ULL ] * 1.0E-9 ) + X [ 384ULL ] ;
for ( b = 0 ; b < 292 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ;
( void ) t197 ; return 0 ; }
