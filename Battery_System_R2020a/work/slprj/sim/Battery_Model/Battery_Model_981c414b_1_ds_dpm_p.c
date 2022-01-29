#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_dpm_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_dpm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDPM_P ; out . mNumCol = 96ULL
; out . mNumRow = 386ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out .
mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] =
0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out .
mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; out . mJc [ 12
] = 0 ; out . mJc [ 13 ] = 0 ; out . mJc [ 14 ] = 0 ; out . mJc [ 15 ] = 0 ;
out . mJc [ 16 ] = 0 ; out . mJc [ 17 ] = 0 ; out . mJc [ 18 ] = 0 ; out .
mJc [ 19 ] = 0 ; out . mJc [ 20 ] = 0 ; out . mJc [ 21 ] = 0 ; out . mJc [ 22
] = 0 ; out . mJc [ 23 ] = 0 ; out . mJc [ 24 ] = 0 ; out . mJc [ 25 ] = 0 ;
out . mJc [ 26 ] = 0 ; out . mJc [ 27 ] = 0 ; out . mJc [ 28 ] = 0 ; out .
mJc [ 29 ] = 0 ; out . mJc [ 30 ] = 0 ; out . mJc [ 31 ] = 0 ; out . mJc [ 32
] = 0 ; out . mJc [ 33 ] = 0 ; out . mJc [ 34 ] = 0 ; out . mJc [ 35 ] = 0 ;
out . mJc [ 36 ] = 0 ; out . mJc [ 37 ] = 0 ; out . mJc [ 38 ] = 0 ; out .
mJc [ 39 ] = 0 ; out . mJc [ 40 ] = 0 ; out . mJc [ 41 ] = 0 ; out . mJc [ 42
] = 0 ; out . mJc [ 43 ] = 0 ; out . mJc [ 44 ] = 0 ; out . mJc [ 45 ] = 0 ;
out . mJc [ 46 ] = 0 ; out . mJc [ 47 ] = 0 ; out . mJc [ 48 ] = 0 ; out .
mJc [ 49 ] = 0 ; out . mJc [ 50 ] = 0 ; out . mJc [ 51 ] = 0 ; out . mJc [ 52
] = 0 ; out . mJc [ 53 ] = 0 ; out . mJc [ 54 ] = 0 ; out . mJc [ 55 ] = 0 ;
out . mJc [ 56 ] = 0 ; out . mJc [ 57 ] = 0 ; out . mJc [ 58 ] = 0 ; out .
mJc [ 59 ] = 0 ; out . mJc [ 60 ] = 0 ; out . mJc [ 61 ] = 0 ; out . mJc [ 62
] = 0 ; out . mJc [ 63 ] = 0 ; out . mJc [ 64 ] = 0 ; out . mJc [ 65 ] = 0 ;
out . mJc [ 66 ] = 0 ; out . mJc [ 67 ] = 0 ; out . mJc [ 68 ] = 0 ; out .
mJc [ 69 ] = 0 ; out . mJc [ 70 ] = 0 ; out . mJc [ 71 ] = 0 ; out . mJc [ 72
] = 0 ; out . mJc [ 73 ] = 0 ; out . mJc [ 74 ] = 0 ; out . mJc [ 75 ] = 0 ;
out . mJc [ 76 ] = 0 ; out . mJc [ 77 ] = 0 ; out . mJc [ 78 ] = 0 ; out .
mJc [ 79 ] = 0 ; out . mJc [ 80 ] = 0 ; out . mJc [ 81 ] = 0 ; out . mJc [ 82
] = 0 ; out . mJc [ 83 ] = 0 ; out . mJc [ 84 ] = 0 ; out . mJc [ 85 ] = 0 ;
out . mJc [ 86 ] = 0 ; out . mJc [ 87 ] = 0 ; out . mJc [ 88 ] = 0 ; out .
mJc [ 89 ] = 0 ; out . mJc [ 90 ] = 0 ; out . mJc [ 91 ] = 0 ; out . mJc [ 92
] = 0 ; out . mJc [ 93 ] = 0 ; out . mJc [ 94 ] = 0 ; out . mJc [ 95 ] = 0 ;
out . mJc [ 96 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
