#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Battery_Model_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "Battery_Model.h"
#include "Battery_Model_capi.h"
#include "Battery_Model_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_100_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_101_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_102_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_103_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 4 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_104_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_105_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_106_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 7 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_107_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 8 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_108_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 9 ,
- 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_109_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 10
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 11 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_110_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
12 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_111_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 13
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_112_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 14
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_113_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 15
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_114_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 } , { 16
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_115_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 17
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_116_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 18
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_117_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 19
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_118_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 20
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_119_1_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 21
, - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 22 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_120_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
23 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 24 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
25 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 26 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
27 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 28 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
29 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 30 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_19_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
31 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 32 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_20_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
33 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_21_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 34 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_22_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
35 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_23_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 36 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_24_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
37 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_25_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 38 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_26_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
39 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_27_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 40 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_28_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
41 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_29_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 42 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
43 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_30_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 44 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_31_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
45 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_32_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 46 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_33_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
47 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_34_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 48 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_35_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
49 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_36_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 50 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_37_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
51 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_38_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 52 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_39_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
53 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 54 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_40_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
55 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_41_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 56 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_42_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
57 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_43_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 58 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_44_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
59 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_45_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 60 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_46_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
61 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_47_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 62 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_48_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
63 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_49_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 64 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
65 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_50_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 66 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_51_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
67 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_52_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 68 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_53_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
69 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_54_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 70 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_55_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
71 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_56_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 72 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_57_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
73 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_58_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 74 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_59_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
75 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 76 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_60_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
77 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_61_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 78 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_62_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
79 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_63_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 80 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_64_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
81 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_65_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 82 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_66_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
83 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_67_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 84 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_68_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
85 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_69_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 86 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
87 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_70_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 88 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_71_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
89 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_72_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 90 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_73_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
91 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_74_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 92 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_75_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
93 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_76_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 94 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_77_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
95 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_78_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 96 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_79_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
97 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 98 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_80_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
99 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_81_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 100 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_82_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
101 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_83_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 102 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_84_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
103 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_85_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 104 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_86_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
105 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_87_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 106 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_88_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
107 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_89_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 108 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
109 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_90_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 110 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_91_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
111 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_92_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 112 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_93_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
113 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_94_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 114 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_95_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
115 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_96_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 116 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_97_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
117 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_98_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 118 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_99_1_1" )
, TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
119 , - 1 , TARGET_STRING (
"Battery_Model/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ) , TARGET_STRING
( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 120 , - 1 ,
TARGET_STRING ( "Battery_Model/Solver\nConfiguration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 1 , 0 , 0 , 0 , - 1 , 0 } , { 0 ,
- 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 99 , 100 , 101 , 102 , 103 , 104 ,
105 , 106 , 107 , 108 , 9 , 109 , 110 , 111 , 112 , 113 , 119 , 114 , 115 ,
116 , 117 , 10 , 118 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 0 , 19 , 20 ,
21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 1 , 29 , 30 , 31 , 32 , 33 , 34 , 35
, 36 , 37 , 38 , 2 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 3 , 49
, 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 4 , 59 , 60 , 61 , 62 , 63 ,
64 , 65 , 66 , 67 , 68 , 5 , 69 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78
, 6 , 79 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 7 , 89 , 90 , 91 , 92
, 93 , 94 , 95 , 96 , 97 , 98 , 8 , 120 } ;
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & mhghcysq2pf . h1m52rxu1t [ 0 ] ) ; dataAddr [
1 ] = ( void * ) ( & mhghcysq2pf . gimrl0bv1g [ 0 ] ) ; dataAddr [ 2 ] = (
void * ) ( & mhghcysq2pf . e3vzcfl34p [ 0 ] ) ; dataAddr [ 3 ] = ( void * ) (
& mhghcysq2pf . olarllqkzb [ 0 ] ) ; dataAddr [ 4 ] = ( void * ) ( &
mhghcysq2pf . oraplh4rto [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) ( &
mhghcysq2pf . lzucshcvh2 [ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( &
mhghcysq2pf . h1f2rwi0v4 [ 0 ] ) ; dataAddr [ 7 ] = ( void * ) ( &
mhghcysq2pf . epwsi1c4gd [ 0 ] ) ; dataAddr [ 8 ] = ( void * ) ( &
mhghcysq2pf . nnfwlf0fez [ 0 ] ) ; dataAddr [ 9 ] = ( void * ) ( &
mhghcysq2pf . nykmgk4b3z [ 0 ] ) ; dataAddr [ 10 ] = ( void * ) ( &
mhghcysq2pf . gi2satt5z1 [ 0 ] ) ; dataAddr [ 11 ] = ( void * ) ( &
mhghcysq2pf . j0cqcf2b1b [ 0 ] ) ; dataAddr [ 12 ] = ( void * ) ( &
mhghcysq2pf . jpws2usrhk [ 0 ] ) ; dataAddr [ 13 ] = ( void * ) ( &
mhghcysq2pf . gci31u1bgp [ 0 ] ) ; dataAddr [ 14 ] = ( void * ) ( &
mhghcysq2pf . fwjausnl2g [ 0 ] ) ; dataAddr [ 15 ] = ( void * ) ( &
mhghcysq2pf . nurobigv0v [ 0 ] ) ; dataAddr [ 16 ] = ( void * ) ( &
mhghcysq2pf . lwvmpskryx [ 0 ] ) ; dataAddr [ 17 ] = ( void * ) ( &
mhghcysq2pf . aznnkeqlh0 [ 0 ] ) ; dataAddr [ 18 ] = ( void * ) ( &
mhghcysq2pf . ahtggo4cxb [ 0 ] ) ; dataAddr [ 19 ] = ( void * ) ( &
mhghcysq2pf . nazmpg0h00 [ 0 ] ) ; dataAddr [ 20 ] = ( void * ) ( &
mhghcysq2pf . lj4p4qfnau [ 0 ] ) ; dataAddr [ 21 ] = ( void * ) ( &
mhghcysq2pf . cv1b00ffxo [ 0 ] ) ; dataAddr [ 22 ] = ( void * ) ( &
mhghcysq2pf . l4au12nmm5 [ 0 ] ) ; dataAddr [ 23 ] = ( void * ) ( &
mhghcysq2pf . fiwfx5yw42 [ 0 ] ) ; dataAddr [ 24 ] = ( void * ) ( &
mhghcysq2pf . n1lc3tk3ng [ 0 ] ) ; dataAddr [ 25 ] = ( void * ) ( &
mhghcysq2pf . ln1b0eqlbz [ 0 ] ) ; dataAddr [ 26 ] = ( void * ) ( &
mhghcysq2pf . nzuavay5j2 [ 0 ] ) ; dataAddr [ 27 ] = ( void * ) ( &
mhghcysq2pf . bjk54ayv24 [ 0 ] ) ; dataAddr [ 28 ] = ( void * ) ( &
mhghcysq2pf . djcyw25vld [ 0 ] ) ; dataAddr [ 29 ] = ( void * ) ( &
mhghcysq2pf . ldwmfyuu2i [ 0 ] ) ; dataAddr [ 30 ] = ( void * ) ( &
mhghcysq2pf . ifhlucoh1u [ 0 ] ) ; dataAddr [ 31 ] = ( void * ) ( &
mhghcysq2pf . d34b0okjqr [ 0 ] ) ; dataAddr [ 32 ] = ( void * ) ( &
mhghcysq2pf . n0tifsi4j4 [ 0 ] ) ; dataAddr [ 33 ] = ( void * ) ( &
mhghcysq2pf . g0h0z1yz5e [ 0 ] ) ; dataAddr [ 34 ] = ( void * ) ( &
mhghcysq2pf . bjnzpixbtp [ 0 ] ) ; dataAddr [ 35 ] = ( void * ) ( &
mhghcysq2pf . o050oq11gl [ 0 ] ) ; dataAddr [ 36 ] = ( void * ) ( &
mhghcysq2pf . pqcbeh4wgi [ 0 ] ) ; dataAddr [ 37 ] = ( void * ) ( &
mhghcysq2pf . m4pfdqnygk [ 0 ] ) ; dataAddr [ 38 ] = ( void * ) ( &
mhghcysq2pf . jvlkn5jsci [ 0 ] ) ; dataAddr [ 39 ] = ( void * ) ( &
mhghcysq2pf . ae40kn3xx2 [ 0 ] ) ; dataAddr [ 40 ] = ( void * ) ( &
mhghcysq2pf . dyyxbmkgqq [ 0 ] ) ; dataAddr [ 41 ] = ( void * ) ( &
mhghcysq2pf . la52t20xqe [ 0 ] ) ; dataAddr [ 42 ] = ( void * ) ( &
mhghcysq2pf . lmwx10n042 [ 0 ] ) ; dataAddr [ 43 ] = ( void * ) ( &
mhghcysq2pf . a3uim1sdy0 [ 0 ] ) ; dataAddr [ 44 ] = ( void * ) ( &
mhghcysq2pf . hg20rhbt5m [ 0 ] ) ; dataAddr [ 45 ] = ( void * ) ( &
mhghcysq2pf . onanfhuw3y [ 0 ] ) ; dataAddr [ 46 ] = ( void * ) ( &
mhghcysq2pf . olkmerhivv [ 0 ] ) ; dataAddr [ 47 ] = ( void * ) ( &
mhghcysq2pf . ngvuhslc05 [ 0 ] ) ; dataAddr [ 48 ] = ( void * ) ( &
mhghcysq2pf . ddn0qzj1yc [ 0 ] ) ; dataAddr [ 49 ] = ( void * ) ( &
mhghcysq2pf . ok3lg1hiyx [ 0 ] ) ; dataAddr [ 50 ] = ( void * ) ( &
mhghcysq2pf . dhaihf3crz [ 0 ] ) ; dataAddr [ 51 ] = ( void * ) ( &
mhghcysq2pf . mq3mtgi4ga [ 0 ] ) ; dataAddr [ 52 ] = ( void * ) ( &
mhghcysq2pf . akxhc14f3h [ 0 ] ) ; dataAddr [ 53 ] = ( void * ) ( &
mhghcysq2pf . majp2d0t15 [ 0 ] ) ; dataAddr [ 54 ] = ( void * ) ( &
mhghcysq2pf . k0auuiyhzk [ 0 ] ) ; dataAddr [ 55 ] = ( void * ) ( &
mhghcysq2pf . hphdcp3m5b [ 0 ] ) ; dataAddr [ 56 ] = ( void * ) ( &
mhghcysq2pf . lm4ophgmcd [ 0 ] ) ; dataAddr [ 57 ] = ( void * ) ( &
mhghcysq2pf . i5grseooyx [ 0 ] ) ; dataAddr [ 58 ] = ( void * ) ( &
mhghcysq2pf . lbxg2x5bj1 [ 0 ] ) ; dataAddr [ 59 ] = ( void * ) ( &
mhghcysq2pf . o31n5w53pr [ 0 ] ) ; dataAddr [ 60 ] = ( void * ) ( &
mhghcysq2pf . esdlllois4 [ 0 ] ) ; dataAddr [ 61 ] = ( void * ) ( &
mhghcysq2pf . hd2c0bwbv3 [ 0 ] ) ; dataAddr [ 62 ] = ( void * ) ( &
mhghcysq2pf . kxzhoh1quc [ 0 ] ) ; dataAddr [ 63 ] = ( void * ) ( &
mhghcysq2pf . kyfgrv5yic [ 0 ] ) ; dataAddr [ 64 ] = ( void * ) ( &
mhghcysq2pf . ewmuhywexp [ 0 ] ) ; dataAddr [ 65 ] = ( void * ) ( &
mhghcysq2pf . g5ig05xni0 [ 0 ] ) ; dataAddr [ 66 ] = ( void * ) ( &
mhghcysq2pf . g420z4dfqa [ 0 ] ) ; dataAddr [ 67 ] = ( void * ) ( &
mhghcysq2pf . duasprcko0 [ 0 ] ) ; dataAddr [ 68 ] = ( void * ) ( &
mhghcysq2pf . eg2tkbq3an [ 0 ] ) ; dataAddr [ 69 ] = ( void * ) ( &
mhghcysq2pf . jtuskz4xxc [ 0 ] ) ; dataAddr [ 70 ] = ( void * ) ( &
mhghcysq2pf . aoeuaj1mgr [ 0 ] ) ; dataAddr [ 71 ] = ( void * ) ( &
mhghcysq2pf . it0dq1sphp [ 0 ] ) ; dataAddr [ 72 ] = ( void * ) ( &
mhghcysq2pf . k0f0xuozg5 [ 0 ] ) ; dataAddr [ 73 ] = ( void * ) ( &
mhghcysq2pf . lmxymu0jiz [ 0 ] ) ; dataAddr [ 74 ] = ( void * ) ( &
mhghcysq2pf . mszgog2nfz [ 0 ] ) ; dataAddr [ 75 ] = ( void * ) ( &
mhghcysq2pf . fpepwecug3 [ 0 ] ) ; dataAddr [ 76 ] = ( void * ) ( &
mhghcysq2pf . oufcfhnz12 [ 0 ] ) ; dataAddr [ 77 ] = ( void * ) ( &
mhghcysq2pf . oyvjctvu11 [ 0 ] ) ; dataAddr [ 78 ] = ( void * ) ( &
mhghcysq2pf . jn240xg4jd [ 0 ] ) ; dataAddr [ 79 ] = ( void * ) ( &
mhghcysq2pf . jeccdzoxxz [ 0 ] ) ; dataAddr [ 80 ] = ( void * ) ( &
mhghcysq2pf . bmx0xlxylp [ 0 ] ) ; dataAddr [ 81 ] = ( void * ) ( &
mhghcysq2pf . fdfkb1rm2p [ 0 ] ) ; dataAddr [ 82 ] = ( void * ) ( &
mhghcysq2pf . fecsxh4vnh [ 0 ] ) ; dataAddr [ 83 ] = ( void * ) ( &
mhghcysq2pf . e0y1p3anns [ 0 ] ) ; dataAddr [ 84 ] = ( void * ) ( &
mhghcysq2pf . dsypnekcaq [ 0 ] ) ; dataAddr [ 85 ] = ( void * ) ( &
mhghcysq2pf . ki3zoyocji [ 0 ] ) ; dataAddr [ 86 ] = ( void * ) ( &
mhghcysq2pf . azahjn1ojt [ 0 ] ) ; dataAddr [ 87 ] = ( void * ) ( &
mhghcysq2pf . ewg14pcvrm [ 0 ] ) ; dataAddr [ 88 ] = ( void * ) ( &
mhghcysq2pf . dvv3jglnuq [ 0 ] ) ; dataAddr [ 89 ] = ( void * ) ( &
mhghcysq2pf . hv05dyqncu [ 0 ] ) ; dataAddr [ 90 ] = ( void * ) ( &
mhghcysq2pf . dtwkkge02o [ 0 ] ) ; dataAddr [ 91 ] = ( void * ) ( &
mhghcysq2pf . dx0qxi5jlg [ 0 ] ) ; dataAddr [ 92 ] = ( void * ) ( &
mhghcysq2pf . brsf15y1c4 [ 0 ] ) ; dataAddr [ 93 ] = ( void * ) ( &
mhghcysq2pf . jmuk1m54db [ 0 ] ) ; dataAddr [ 94 ] = ( void * ) ( &
mhghcysq2pf . n2apqzelt2 [ 0 ] ) ; dataAddr [ 95 ] = ( void * ) ( &
mhghcysq2pf . hv5n3te5e3 [ 0 ] ) ; dataAddr [ 96 ] = ( void * ) ( &
mhghcysq2pf . j0zdapl2nl [ 0 ] ) ; dataAddr [ 97 ] = ( void * ) ( &
mhghcysq2pf . fjaxxupdb1 [ 0 ] ) ; dataAddr [ 98 ] = ( void * ) ( &
mhghcysq2pf . eiho33tobl [ 0 ] ) ; dataAddr [ 99 ] = ( void * ) ( &
mhghcysq2pf . orfkvsp3fm [ 0 ] ) ; dataAddr [ 100 ] = ( void * ) ( &
mhghcysq2pf . alxsejyona [ 0 ] ) ; dataAddr [ 101 ] = ( void * ) ( &
mhghcysq2pf . ppnildrc2f [ 0 ] ) ; dataAddr [ 102 ] = ( void * ) ( &
mhghcysq2pf . hkjzk5gchz [ 0 ] ) ; dataAddr [ 103 ] = ( void * ) ( &
mhghcysq2pf . g5xk2k5jm0 [ 0 ] ) ; dataAddr [ 104 ] = ( void * ) ( &
mhghcysq2pf . ohamx2n5x1 [ 0 ] ) ; dataAddr [ 105 ] = ( void * ) ( &
mhghcysq2pf . hssfsjxhjd [ 0 ] ) ; dataAddr [ 106 ] = ( void * ) ( &
mhghcysq2pf . ga24cjavov [ 0 ] ) ; dataAddr [ 107 ] = ( void * ) ( &
mhghcysq2pf . a2tmwg1p34 [ 0 ] ) ; dataAddr [ 108 ] = ( void * ) ( &
mhghcysq2pf . ct4y0w43hs [ 0 ] ) ; dataAddr [ 109 ] = ( void * ) ( &
mhghcysq2pf . dazw4ockmv [ 0 ] ) ; dataAddr [ 110 ] = ( void * ) ( &
mhghcysq2pf . ecjfmweqjl [ 0 ] ) ; dataAddr [ 111 ] = ( void * ) ( &
mhghcysq2pf . m2rjshfzyd [ 0 ] ) ; dataAddr [ 112 ] = ( void * ) ( &
mhghcysq2pf . lktnaoydse [ 0 ] ) ; dataAddr [ 113 ] = ( void * ) ( &
mhghcysq2pf . mzd00r05py [ 0 ] ) ; dataAddr [ 114 ] = ( void * ) ( &
mhghcysq2pf . nnxmjnxihn [ 0 ] ) ; dataAddr [ 115 ] = ( void * ) ( &
mhghcysq2pf . bnj20ws1yh [ 0 ] ) ; dataAddr [ 116 ] = ( void * ) ( &
mhghcysq2pf . i03jac0x4i [ 0 ] ) ; dataAddr [ 117 ] = ( void * ) ( &
mhghcysq2pf . n1v5i1g5le [ 0 ] ) ; dataAddr [ 118 ] = ( void * ) ( &
mhghcysq2pf . c4jdz5rjoo [ 0 ] ) ; dataAddr [ 119 ] = ( void * ) ( &
mhghcysq2pf . i0erlbo3qq [ 0 ] ) ; dataAddr [ 120 ] = ( void * ) ( &
mhghcysq2pf . bdrdfiqnt5 [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; loggingPtrs [ 15 ] = ( NULL ) ; loggingPtrs [
16 ] = ( NULL ) ; loggingPtrs [ 17 ] = ( NULL ) ; loggingPtrs [ 18 ] = ( NULL
) ; loggingPtrs [ 19 ] = ( NULL ) ; loggingPtrs [ 20 ] = ( NULL ) ;
loggingPtrs [ 21 ] = ( NULL ) ; loggingPtrs [ 22 ] = ( NULL ) ; loggingPtrs [
23 ] = ( NULL ) ; loggingPtrs [ 24 ] = ( NULL ) ; loggingPtrs [ 25 ] = ( NULL
) ; loggingPtrs [ 26 ] = ( NULL ) ; loggingPtrs [ 27 ] = ( NULL ) ;
loggingPtrs [ 28 ] = ( NULL ) ; loggingPtrs [ 29 ] = ( NULL ) ; loggingPtrs [
30 ] = ( NULL ) ; loggingPtrs [ 31 ] = ( NULL ) ; loggingPtrs [ 32 ] = ( NULL
) ; loggingPtrs [ 33 ] = ( NULL ) ; loggingPtrs [ 34 ] = ( NULL ) ;
loggingPtrs [ 35 ] = ( NULL ) ; loggingPtrs [ 36 ] = ( NULL ) ; loggingPtrs [
37 ] = ( NULL ) ; loggingPtrs [ 38 ] = ( NULL ) ; loggingPtrs [ 39 ] = ( NULL
) ; loggingPtrs [ 40 ] = ( NULL ) ; loggingPtrs [ 41 ] = ( NULL ) ;
loggingPtrs [ 42 ] = ( NULL ) ; loggingPtrs [ 43 ] = ( NULL ) ; loggingPtrs [
44 ] = ( NULL ) ; loggingPtrs [ 45 ] = ( NULL ) ; loggingPtrs [ 46 ] = ( NULL
) ; loggingPtrs [ 47 ] = ( NULL ) ; loggingPtrs [ 48 ] = ( NULL ) ;
loggingPtrs [ 49 ] = ( NULL ) ; loggingPtrs [ 50 ] = ( NULL ) ; loggingPtrs [
51 ] = ( NULL ) ; loggingPtrs [ 52 ] = ( NULL ) ; loggingPtrs [ 53 ] = ( NULL
) ; loggingPtrs [ 54 ] = ( NULL ) ; loggingPtrs [ 55 ] = ( NULL ) ;
loggingPtrs [ 56 ] = ( NULL ) ; loggingPtrs [ 57 ] = ( NULL ) ; loggingPtrs [
58 ] = ( NULL ) ; loggingPtrs [ 59 ] = ( NULL ) ; loggingPtrs [ 60 ] = ( NULL
) ; loggingPtrs [ 61 ] = ( NULL ) ; loggingPtrs [ 62 ] = ( NULL ) ;
loggingPtrs [ 63 ] = ( NULL ) ; loggingPtrs [ 64 ] = ( NULL ) ; loggingPtrs [
65 ] = ( NULL ) ; loggingPtrs [ 66 ] = ( NULL ) ; loggingPtrs [ 67 ] = ( NULL
) ; loggingPtrs [ 68 ] = ( NULL ) ; loggingPtrs [ 69 ] = ( NULL ) ;
loggingPtrs [ 70 ] = ( NULL ) ; loggingPtrs [ 71 ] = ( NULL ) ; loggingPtrs [
72 ] = ( NULL ) ; loggingPtrs [ 73 ] = ( NULL ) ; loggingPtrs [ 74 ] = ( NULL
) ; loggingPtrs [ 75 ] = ( NULL ) ; loggingPtrs [ 76 ] = ( NULL ) ;
loggingPtrs [ 77 ] = ( NULL ) ; loggingPtrs [ 78 ] = ( NULL ) ; loggingPtrs [
79 ] = ( NULL ) ; loggingPtrs [ 80 ] = ( NULL ) ; loggingPtrs [ 81 ] = ( NULL
) ; loggingPtrs [ 82 ] = ( NULL ) ; loggingPtrs [ 83 ] = ( NULL ) ;
loggingPtrs [ 84 ] = ( NULL ) ; loggingPtrs [ 85 ] = ( NULL ) ; loggingPtrs [
86 ] = ( NULL ) ; loggingPtrs [ 87 ] = ( NULL ) ; loggingPtrs [ 88 ] = ( NULL
) ; loggingPtrs [ 89 ] = ( NULL ) ; loggingPtrs [ 90 ] = ( NULL ) ;
loggingPtrs [ 91 ] = ( NULL ) ; loggingPtrs [ 92 ] = ( NULL ) ; loggingPtrs [
93 ] = ( NULL ) ; loggingPtrs [ 94 ] = ( NULL ) ; loggingPtrs [ 95 ] = ( NULL
) ; loggingPtrs [ 96 ] = ( NULL ) ; loggingPtrs [ 97 ] = ( NULL ) ;
loggingPtrs [ 98 ] = ( NULL ) ; loggingPtrs [ 99 ] = ( NULL ) ; loggingPtrs [
100 ] = ( NULL ) ; loggingPtrs [ 101 ] = ( NULL ) ; loggingPtrs [ 102 ] = (
NULL ) ; loggingPtrs [ 103 ] = ( NULL ) ; loggingPtrs [ 104 ] = ( NULL ) ;
loggingPtrs [ 105 ] = ( NULL ) ; loggingPtrs [ 106 ] = ( NULL ) ; loggingPtrs
[ 107 ] = ( NULL ) ; loggingPtrs [ 108 ] = ( NULL ) ; loggingPtrs [ 109 ] = (
NULL ) ; loggingPtrs [ 110 ] = ( NULL ) ; loggingPtrs [ 111 ] = ( NULL ) ;
loggingPtrs [ 112 ] = ( NULL ) ; loggingPtrs [ 113 ] = ( NULL ) ; loggingPtrs
[ 114 ] = ( NULL ) ; loggingPtrs [ 115 ] = ( NULL ) ; loggingPtrs [ 116 ] = (
NULL ) ; loggingPtrs [ 117 ] = ( NULL ) ; loggingPtrs [ 118 ] = ( NULL ) ;
loggingPtrs [ 119 ] = ( NULL ) ; loggingPtrs [ 120 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 2 , 1 , 1448 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1
] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T )
0 } } ; static int_T rtContextSystems [ 4 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 121 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1422148494U , 3369245861U , 733577647U , 4066644764U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Battery_Model_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Battery_Model_InitializeSystemRan ( cmwtushrfh * const djmxej3cna
, sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( djmxej3cna ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ]
= ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = el50fl4kem [ 0 ]
; systemTid [ 2 ] = el50fl4kem [ 0 ] ; systemTid [ 3 ] = el50fl4kem [ 0 ] ;
systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1
] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Battery_Model_InitializeDataMapInfo ( cmwtushrfh * const djmxej3cna ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( djmxej3cna ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( djmxej3cna -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( djmxej3cna -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; Battery_Model_InitializeDataAddr (
djmxej3cna -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
djmxej3cna -> DataMapInfo . mmi , djmxej3cna -> DataMapInfo . dataAddress ) ;
Battery_Model_InitializeVarDimsAddr ( djmxej3cna -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( djmxej3cna -> DataMapInfo .
mmi , djmxej3cna -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
djmxej3cna -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
djmxej3cna -> DataMapInfo . mmi , ( NULL ) ) ;
Battery_Model_InitializeLoggingFunctions ( djmxej3cna -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( djmxej3cna -> DataMapInfo . mmi ,
djmxej3cna -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
djmxej3cna -> DataMapInfo . mmi , & djmxej3cna -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( djmxej3cna -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( djmxej3cna -> DataMapInfo .
mmi , 0 ) ; Battery_Model_InitializeSystemRan ( djmxej3cna , djmxej3cna ->
DataMapInfo . systemRan , djmxej3cna -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( djmxej3cna -> DataMapInfo . mmi ,
djmxej3cna -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( djmxej3cna
-> DataMapInfo . mmi , djmxej3cna -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( djmxej3cna -> DataMapInfo . mmi , & el50fl4kem [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Battery_Model_host_InitializeDataMapInfo (
Battery_Model_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
