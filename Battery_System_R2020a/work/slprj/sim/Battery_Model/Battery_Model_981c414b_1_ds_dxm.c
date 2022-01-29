#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_dxm.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_dxm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T X [ 1448 ] ; real_T t0 [ 192 ] ; int32_T b ; ( void ) LC ; for ( b = 0
; b < 1448 ; b ++ ) { X [ b ] = t1 -> mX . mX [ b ] ; } out = t2 -> mDXM ; t0
[ 0ULL ] = X [ 680ULL ] ; t0 [ 1ULL ] = X [ 678ULL ] ; t0 [ 2ULL ] = X [
688ULL ] ; t0 [ 3ULL ] = X [ 686ULL ] ; t0 [ 4ULL ] = X [ 696ULL ] ; t0 [
5ULL ] = X [ 694ULL ] ; t0 [ 6ULL ] = X [ 704ULL ] ; t0 [ 7ULL ] = X [ 702ULL
] ; t0 [ 8ULL ] = X [ 712ULL ] ; t0 [ 9ULL ] = X [ 710ULL ] ; t0 [ 10ULL ] =
X [ 720ULL ] ; t0 [ 11ULL ] = X [ 718ULL ] ; t0 [ 12ULL ] = X [ 728ULL ] ; t0
[ 13ULL ] = X [ 726ULL ] ; t0 [ 14ULL ] = X [ 736ULL ] ; t0 [ 15ULL ] = X [
734ULL ] ; t0 [ 16ULL ] = X [ 744ULL ] ; t0 [ 17ULL ] = X [ 742ULL ] ; t0 [
18ULL ] = X [ 752ULL ] ; t0 [ 19ULL ] = X [ 750ULL ] ; t0 [ 20ULL ] = X [
760ULL ] ; t0 [ 21ULL ] = X [ 758ULL ] ; t0 [ 22ULL ] = X [ 768ULL ] ; t0 [
23ULL ] = X [ 766ULL ] ; t0 [ 24ULL ] = X [ 776ULL ] ; t0 [ 25ULL ] = X [
774ULL ] ; t0 [ 26ULL ] = X [ 784ULL ] ; t0 [ 27ULL ] = X [ 782ULL ] ; t0 [
28ULL ] = X [ 792ULL ] ; t0 [ 29ULL ] = X [ 790ULL ] ; t0 [ 30ULL ] = X [
800ULL ] ; t0 [ 31ULL ] = X [ 798ULL ] ; t0 [ 32ULL ] = X [ 808ULL ] ; t0 [
33ULL ] = X [ 806ULL ] ; t0 [ 34ULL ] = X [ 816ULL ] ; t0 [ 35ULL ] = X [
814ULL ] ; t0 [ 36ULL ] = X [ 824ULL ] ; t0 [ 37ULL ] = X [ 822ULL ] ; t0 [
38ULL ] = X [ 832ULL ] ; t0 [ 39ULL ] = X [ 830ULL ] ; t0 [ 40ULL ] = X [
840ULL ] ; t0 [ 41ULL ] = X [ 838ULL ] ; t0 [ 42ULL ] = X [ 848ULL ] ; t0 [
43ULL ] = X [ 846ULL ] ; t0 [ 44ULL ] = X [ 856ULL ] ; t0 [ 45ULL ] = X [
854ULL ] ; t0 [ 46ULL ] = X [ 864ULL ] ; t0 [ 47ULL ] = X [ 862ULL ] ; t0 [
48ULL ] = X [ 872ULL ] ; t0 [ 49ULL ] = X [ 870ULL ] ; t0 [ 50ULL ] = X [
880ULL ] ; t0 [ 51ULL ] = X [ 878ULL ] ; t0 [ 52ULL ] = X [ 888ULL ] ; t0 [
53ULL ] = X [ 886ULL ] ; t0 [ 54ULL ] = X [ 896ULL ] ; t0 [ 55ULL ] = X [
894ULL ] ; t0 [ 56ULL ] = X [ 904ULL ] ; t0 [ 57ULL ] = X [ 902ULL ] ; t0 [
58ULL ] = X [ 912ULL ] ; t0 [ 59ULL ] = X [ 910ULL ] ; t0 [ 60ULL ] = X [
920ULL ] ; t0 [ 61ULL ] = X [ 918ULL ] ; t0 [ 62ULL ] = X [ 928ULL ] ; t0 [
63ULL ] = X [ 926ULL ] ; t0 [ 64ULL ] = X [ 936ULL ] ; t0 [ 65ULL ] = X [
934ULL ] ; t0 [ 66ULL ] = X [ 944ULL ] ; t0 [ 67ULL ] = X [ 942ULL ] ; t0 [
68ULL ] = X [ 952ULL ] ; t0 [ 69ULL ] = X [ 950ULL ] ; t0 [ 70ULL ] = X [
960ULL ] ; t0 [ 71ULL ] = X [ 958ULL ] ; t0 [ 72ULL ] = X [ 968ULL ] ; t0 [
73ULL ] = X [ 966ULL ] ; t0 [ 74ULL ] = X [ 976ULL ] ; t0 [ 75ULL ] = X [
974ULL ] ; t0 [ 76ULL ] = X [ 984ULL ] ; t0 [ 77ULL ] = X [ 982ULL ] ; t0 [
78ULL ] = X [ 992ULL ] ; t0 [ 79ULL ] = X [ 990ULL ] ; t0 [ 80ULL ] = X [
1000ULL ] ; t0 [ 81ULL ] = X [ 998ULL ] ; t0 [ 82ULL ] = X [ 1008ULL ] ; t0 [
83ULL ] = X [ 1006ULL ] ; t0 [ 84ULL ] = X [ 1016ULL ] ; t0 [ 85ULL ] = X [
1014ULL ] ; t0 [ 86ULL ] = X [ 1024ULL ] ; t0 [ 87ULL ] = X [ 1022ULL ] ; t0
[ 88ULL ] = X [ 1032ULL ] ; t0 [ 89ULL ] = X [ 1030ULL ] ; t0 [ 90ULL ] = X [
1040ULL ] ; t0 [ 91ULL ] = X [ 1038ULL ] ; t0 [ 92ULL ] = X [ 1048ULL ] ; t0
[ 93ULL ] = X [ 1046ULL ] ; t0 [ 94ULL ] = X [ 1056ULL ] ; t0 [ 95ULL ] = X [
1054ULL ] ; t0 [ 96ULL ] = X [ 1064ULL ] ; t0 [ 97ULL ] = X [ 1062ULL ] ; t0
[ 98ULL ] = X [ 1072ULL ] ; t0 [ 99ULL ] = X [ 1070ULL ] ; t0 [ 100ULL ] = X
[ 1080ULL ] ; t0 [ 101ULL ] = X [ 1078ULL ] ; t0 [ 102ULL ] = X [ 1088ULL ] ;
t0 [ 103ULL ] = X [ 1086ULL ] ; t0 [ 104ULL ] = X [ 1096ULL ] ; t0 [ 105ULL ]
= X [ 1094ULL ] ; t0 [ 106ULL ] = X [ 1104ULL ] ; t0 [ 107ULL ] = X [ 1102ULL
] ; t0 [ 108ULL ] = X [ 1112ULL ] ; t0 [ 109ULL ] = X [ 1110ULL ] ; t0 [
110ULL ] = X [ 1120ULL ] ; t0 [ 111ULL ] = X [ 1118ULL ] ; t0 [ 112ULL ] = X
[ 1128ULL ] ; t0 [ 113ULL ] = X [ 1126ULL ] ; t0 [ 114ULL ] = X [ 1136ULL ] ;
t0 [ 115ULL ] = X [ 1134ULL ] ; t0 [ 116ULL ] = X [ 1144ULL ] ; t0 [ 117ULL ]
= X [ 1142ULL ] ; t0 [ 118ULL ] = X [ 1152ULL ] ; t0 [ 119ULL ] = X [ 1150ULL
] ; t0 [ 120ULL ] = X [ 1160ULL ] ; t0 [ 121ULL ] = X [ 1158ULL ] ; t0 [
122ULL ] = X [ 1168ULL ] ; t0 [ 123ULL ] = X [ 1166ULL ] ; t0 [ 124ULL ] = X
[ 1176ULL ] ; t0 [ 125ULL ] = X [ 1174ULL ] ; t0 [ 126ULL ] = X [ 1184ULL ] ;
t0 [ 127ULL ] = X [ 1182ULL ] ; t0 [ 128ULL ] = X [ 1192ULL ] ; t0 [ 129ULL ]
= X [ 1190ULL ] ; t0 [ 130ULL ] = X [ 1200ULL ] ; t0 [ 131ULL ] = X [ 1198ULL
] ; t0 [ 132ULL ] = X [ 1208ULL ] ; t0 [ 133ULL ] = X [ 1206ULL ] ; t0 [
134ULL ] = X [ 1216ULL ] ; t0 [ 135ULL ] = X [ 1214ULL ] ; t0 [ 136ULL ] = X
[ 1224ULL ] ; t0 [ 137ULL ] = X [ 1222ULL ] ; t0 [ 138ULL ] = X [ 1232ULL ] ;
t0 [ 139ULL ] = X [ 1230ULL ] ; t0 [ 140ULL ] = X [ 1240ULL ] ; t0 [ 141ULL ]
= X [ 1238ULL ] ; t0 [ 142ULL ] = X [ 1248ULL ] ; t0 [ 143ULL ] = X [ 1246ULL
] ; t0 [ 144ULL ] = X [ 1256ULL ] ; t0 [ 145ULL ] = X [ 1254ULL ] ; t0 [
146ULL ] = X [ 1264ULL ] ; t0 [ 147ULL ] = X [ 1262ULL ] ; t0 [ 148ULL ] = X
[ 1272ULL ] ; t0 [ 149ULL ] = X [ 1270ULL ] ; t0 [ 150ULL ] = X [ 1280ULL ] ;
t0 [ 151ULL ] = X [ 1278ULL ] ; t0 [ 152ULL ] = X [ 1288ULL ] ; t0 [ 153ULL ]
= X [ 1286ULL ] ; t0 [ 154ULL ] = X [ 1296ULL ] ; t0 [ 155ULL ] = X [ 1294ULL
] ; t0 [ 156ULL ] = X [ 1304ULL ] ; t0 [ 157ULL ] = X [ 1302ULL ] ; t0 [
158ULL ] = X [ 1312ULL ] ; t0 [ 159ULL ] = X [ 1310ULL ] ; t0 [ 160ULL ] = X
[ 1320ULL ] ; t0 [ 161ULL ] = X [ 1318ULL ] ; t0 [ 162ULL ] = X [ 1328ULL ] ;
t0 [ 163ULL ] = X [ 1326ULL ] ; t0 [ 164ULL ] = X [ 1336ULL ] ; t0 [ 165ULL ]
= X [ 1334ULL ] ; t0 [ 166ULL ] = X [ 1344ULL ] ; t0 [ 167ULL ] = X [ 1342ULL
] ; t0 [ 168ULL ] = X [ 1352ULL ] ; t0 [ 169ULL ] = X [ 1350ULL ] ; t0 [
170ULL ] = X [ 1360ULL ] ; t0 [ 171ULL ] = X [ 1358ULL ] ; t0 [ 172ULL ] = X
[ 1368ULL ] ; t0 [ 173ULL ] = X [ 1366ULL ] ; t0 [ 174ULL ] = X [ 1376ULL ] ;
t0 [ 175ULL ] = X [ 1374ULL ] ; t0 [ 176ULL ] = X [ 1384ULL ] ; t0 [ 177ULL ]
= X [ 1382ULL ] ; t0 [ 178ULL ] = X [ 1392ULL ] ; t0 [ 179ULL ] = X [ 1390ULL
] ; t0 [ 180ULL ] = X [ 1400ULL ] ; t0 [ 181ULL ] = X [ 1398ULL ] ; t0 [
182ULL ] = X [ 1408ULL ] ; t0 [ 183ULL ] = X [ 1406ULL ] ; t0 [ 184ULL ] = X
[ 1416ULL ] ; t0 [ 185ULL ] = X [ 1414ULL ] ; t0 [ 186ULL ] = X [ 1424ULL ] ;
t0 [ 187ULL ] = X [ 1422ULL ] ; t0 [ 188ULL ] = X [ 1432ULL ] ; t0 [ 189ULL ]
= X [ 1430ULL ] ; t0 [ 190ULL ] = X [ 1440ULL ] ; t0 [ 191ULL ] = X [ 1438ULL
] ; for ( b = 0 ; b < 192 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void )
LC ; ( void ) t2 ; return 0 ; }
