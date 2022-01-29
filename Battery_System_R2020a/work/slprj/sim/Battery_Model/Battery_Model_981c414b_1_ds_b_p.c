#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_b_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_b_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_1 [ 121 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 ,
14 , 15 , 16 , 17 , 18 , 18 , 18 , 18 , 18 , 18 , 18 } ; PmSparsityPattern
out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mB_P ; out .
mNumCol = 120ULL ; out . mNumRow = 1448ULL ; for ( b = 0 ; b < 121 ; b ++ ) {
out . mJc [ b ] = _cg_const_1 [ b ] ; } out . mIr [ 0 ] = 20 ; out . mIr [ 1
] = 44 ; out . mIr [ 2 ] = 68 ; out . mIr [ 3 ] = 92 ; out . mIr [ 4 ] = 116
; out . mIr [ 5 ] = 140 ; out . mIr [ 6 ] = 164 ; out . mIr [ 7 ] = 188 ; out
. mIr [ 8 ] = 212 ; out . mIr [ 9 ] = 236 ; out . mIr [ 10 ] = 260 ; out .
mIr [ 11 ] = 284 ; out . mIr [ 12 ] = 308 ; out . mIr [ 13 ] = 332 ; out .
mIr [ 14 ] = 356 ; out . mIr [ 15 ] = 380 ; out . mIr [ 16 ] = 384 ; out .
mIr [ 17 ] = 384 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
