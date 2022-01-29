#ifndef RTW_HEADER_Battery_Model_h_
#define RTW_HEADER_Battery_Model_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Battery_Model_COMMON_INCLUDES_
#define Battery_Model_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "nesl_rtw_rtp.h"
#include "Battery_Model_981c414b_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "Battery_Model_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
typedef struct { real_T dv [ 2798 ] ; real_T dv1 [ 2798 ] ; real_T dv2 [ 480
] ; real_T dv3 [ 480 ] ; real_T pvfyyeamnl_mbvzarwird [ 291 ] ; real_T dv4 [
96 ] ; int_T iv [ 122 ] ; int_T iv1 [ 122 ] ; int_T iv2 [ 121 ] ; int_T iv3 [
121 ] ; NeParameterBundle expl_temp ; NeModelParameters modelParameters ;
NeModelParameters modelParameters_cl54gopm0x ; NeModelParameters
modelParameters_kkiq3xxxve ; real_T nkj3nfmesp ; real_T nhwh4ung4f ; real_T
jshymo12bv [ 96 ] ; real_T evsuvmvdph [ 4 ] ; real_T bycdgm2b5q [ 4 ] ;
real_T a4ikhz2rde [ 4 ] ; real_T janazfsisr [ 4 ] ; real_T jxg1rbnmyk [ 4 ] ;
real_T fnshc4pduu [ 4 ] ; real_T ecpalzy5dl [ 4 ] ; real_T nuayastkux [ 4 ] ;
real_T nq3bwo0cyx [ 4 ] ; real_T cbxd4xpc5c [ 4 ] ; real_T k1um0jb1hq [ 4 ] ;
real_T hcnezwcpre [ 4 ] ; real_T fzyabvn3ks [ 4 ] ; real_T mqq4pkdlnm [ 4 ] ;
real_T mx4ncvwnc3 [ 4 ] ; real_T g134yogt11 [ 4 ] ; real_T gvm0voxgob [ 4 ] ;
real_T i3tpxlrzoj [ 4 ] ; real_T cyfco5zv3o [ 4 ] ; real_T owpz0fq5vr [ 4 ] ;
real_T iwna2x3j2r [ 4 ] ; real_T mken2ev1tj [ 4 ] ; real_T cwxt1uci4i [ 4 ] ;
real_T fowk5hw4i5 [ 4 ] ; real_T elmwf10bod [ 4 ] ; real_T crhbop1bip [ 4 ] ;
real_T pqrae15qrf [ 4 ] ; real_T bfexgeb0ul [ 4 ] ; real_T h3iari0fmt [ 4 ] ;
real_T g1aysgxmvg [ 4 ] ; real_T b5uwqkgxjl [ 4 ] ; real_T inq25uwv3e [ 4 ] ;
real_T dluo0hg2yr [ 4 ] ; real_T jhgekfdxsu [ 4 ] ; real_T pj3n1cprg5 [ 4 ] ;
real_T hqd2yffpm4 [ 4 ] ; real_T k4i3fe0wil [ 4 ] ; real_T jzdxf0qle2 [ 4 ] ;
real_T kw4xb5vhzz [ 4 ] ; real_T ecyqa3u0si [ 4 ] ; real_T bq2iggahgz [ 4 ] ;
real_T fsxsgdfjh4 [ 4 ] ; real_T bn1gsei1l5 [ 4 ] ; real_T huodbisxnm [ 4 ] ;
real_T o4jjaxvoig [ 4 ] ; real_T dhu23nicqc [ 4 ] ; real_T ogrb2tan1r [ 4 ] ;
real_T ep13ddyxfr [ 4 ] ; real_T ksm3dmrz4l [ 4 ] ; real_T lxzwbo1z30 [ 4 ] ;
real_T fggbsk5gc3 [ 4 ] ; real_T lakpomyc40 [ 4 ] ; real_T fd4kvirddx [ 4 ] ;
real_T khmzpfari5 [ 4 ] ; real_T fhvtzeipfs [ 4 ] ; real_T llamjt3ipj [ 4 ] ;
real_T mitflzjmnr [ 4 ] ; real_T hl0osljxbx [ 4 ] ; real_T khqlknttlh [ 4 ] ;
real_T bhjfws4fsz [ 4 ] ; real_T njldyqb552 [ 4 ] ; real_T hqcjxdw0do [ 4 ] ;
real_T efkrsl2rny [ 4 ] ; real_T jh354mznkt [ 4 ] ; real_T gnvjekiyd4 [ 4 ] ;
real_T npedandb1w [ 4 ] ; real_T kphbhqnco3 [ 4 ] ; real_T abi4uqvatc [ 4 ] ;
real_T ptlnmmpvff [ 4 ] ; real_T c201et1gpm [ 4 ] ; real_T gpta4wgp0p [ 4 ] ;
real_T j1en0svire [ 4 ] ; real_T f5ytu0vf33 [ 4 ] ; real_T aicohupwfe [ 4 ] ;
real_T mf0mtj1tw3 [ 4 ] ; real_T htzqo4y0gk [ 4 ] ; real_T phshwkqkun [ 4 ] ;
real_T cu42tmn1kp [ 4 ] ; real_T fipqgntrk0 [ 4 ] ; real_T l4pvemkqau [ 4 ] ;
real_T efmvu4ogcz [ 4 ] ; real_T aljydyignq [ 4 ] ; real_T opq1ndx1iu [ 4 ] ;
real_T g1hvrlu2pu [ 4 ] ; real_T jk3lsympo3 [ 4 ] ; real_T jq02ckhkwo [ 4 ] ;
real_T egde22ytmw [ 4 ] ; real_T gc1gsgynlv [ 4 ] ; real_T nt51davzex [ 4 ] ;
real_T dm3zkpv1cd [ 4 ] ; real_T avdowdovuo [ 4 ] ; real_T kx0yb5jbam [ 4 ] ;
real_T a1iam14qqs [ 4 ] ; real_T f2uvaczubs [ 4 ] ; real_T ovr3gj1rnu [ 4 ] ;
real_T btqosddjrq [ 4 ] ; real_T h4xi2iunb0 [ 4 ] ; real_T plczq2m1ws [ 4 ] ;
real_T o3wziy0ql5 [ 4 ] ; real_T mf1tfumx4i [ 4 ] ; real_T hwqwivrkyn [ 4 ] ;
real_T enpdpm4yls [ 4 ] ; real_T bvybuncfaz [ 4 ] ; real_T inpawmldme [ 4 ] ;
real_T ezmydd2le4 [ 4 ] ; real_T b23c3j1re5 [ 4 ] ; real_T c2m1mozc5i [ 4 ] ;
real_T oydq33qvtx [ 4 ] ; real_T fxwhzy1p5o [ 4 ] ; real_T e3dsc0ij0o [ 4 ] ;
real_T nftwc4xwak [ 4 ] ; real_T ewjegks5hz [ 4 ] ; real_T jeho44jck2 [ 4 ] ;
real_T gb5fu2admb [ 4 ] ; real_T np0fv1mqbw ; real_T k1ezlbtvhf [ 4 ] ;
real_T hctxzfuyjo ; real_T iz1r2r1gbn [ 4 ] ; real_T pcwe4wyjca ; real_T
n2hdi5uq25 [ 4 ] ; real_T duojqh1ucw ; real_T ogabujgneb [ 4 ] ; real_T
pojg3oci20 ; real_T aaxirr5m3g [ 4 ] ; real_T feayayvth5 ; real_T chjh4vcbbl
[ 4 ] ; real_T dgtyl32ubm ; real_T g5jyyyhzks [ 2318 ] ; real_T time ; real_T
time_cxarnvbvui ; real_T time_bhxxfovxdy ; real_T eumehc3vyz_pbm3vprmfu ;
real_T ptdwd4uimg_cv5hdgrwft ; real_T omuzv2tgoq_fqdqrf4qbc ; real_T
eumehc3vyz_tmp ; real_T d ; int32_T i ; int32_T i_g2mlkqadfk ; int8_T
jqv4tarecs ; int8_T kzxjuuk2dp ; int8_T gtuiaplsoh_g1smspu5ke ; boolean_T
gpdjxrntit ; boolean_T ploxn2ilvs_merlcviukg ; boolean_T b ; boolean_T val ;
} osmg53lo42o ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
typedef struct { real_T d34b0okjqr [ 2 ] ; real_T lmwx10n042 [ 2 ] ; real_T
majp2d0t15 [ 2 ] ; real_T ewmuhywexp [ 2 ] ; real_T fpepwecug3 [ 2 ] ; real_T
azahjn1ojt [ 2 ] ; real_T fjaxxupdb1 [ 2 ] ; real_T ct4y0w43hs [ 2 ] ; real_T
i0erlbo3qq [ 2 ] ; real_T gi2satt5z1 [ 2 ] ; real_T cv1b00ffxo [ 2 ] ; real_T
fiwfx5yw42 [ 2 ] ; real_T n1lc3tk3ng [ 2 ] ; real_T ln1b0eqlbz [ 2 ] ; real_T
nzuavay5j2 [ 2 ] ; real_T bjk54ayv24 [ 2 ] ; real_T djcyw25vld [ 2 ] ; real_T
ldwmfyuu2i [ 2 ] ; real_T ifhlucoh1u [ 2 ] ; real_T n0tifsi4j4 [ 2 ] ; real_T
g0h0z1yz5e [ 2 ] ; real_T bjnzpixbtp [ 2 ] ; real_T o050oq11gl [ 2 ] ; real_T
pqcbeh4wgi [ 2 ] ; real_T m4pfdqnygk [ 2 ] ; real_T jvlkn5jsci [ 2 ] ; real_T
ae40kn3xx2 [ 2 ] ; real_T dyyxbmkgqq [ 2 ] ; real_T la52t20xqe [ 2 ] ; real_T
a3uim1sdy0 [ 2 ] ; real_T hg20rhbt5m [ 2 ] ; real_T onanfhuw3y [ 2 ] ; real_T
olkmerhivv [ 2 ] ; real_T ngvuhslc05 [ 2 ] ; real_T ddn0qzj1yc [ 2 ] ; real_T
ok3lg1hiyx [ 2 ] ; real_T dhaihf3crz [ 2 ] ; real_T mq3mtgi4ga [ 2 ] ; real_T
akxhc14f3h [ 2 ] ; real_T k0auuiyhzk [ 2 ] ; real_T hphdcp3m5b [ 2 ] ; real_T
lm4ophgmcd [ 2 ] ; real_T i5grseooyx [ 2 ] ; real_T lbxg2x5bj1 [ 2 ] ; real_T
o31n5w53pr [ 2 ] ; real_T esdlllois4 [ 2 ] ; real_T hd2c0bwbv3 [ 2 ] ; real_T
kxzhoh1quc [ 2 ] ; real_T kyfgrv5yic [ 2 ] ; real_T g5ig05xni0 [ 2 ] ; real_T
g420z4dfqa [ 2 ] ; real_T duasprcko0 [ 2 ] ; real_T eg2tkbq3an [ 2 ] ; real_T
jtuskz4xxc [ 2 ] ; real_T aoeuaj1mgr [ 2 ] ; real_T it0dq1sphp [ 2 ] ; real_T
k0f0xuozg5 [ 2 ] ; real_T lmxymu0jiz [ 2 ] ; real_T mszgog2nfz [ 2 ] ; real_T
oufcfhnz12 [ 2 ] ; real_T oyvjctvu11 [ 2 ] ; real_T jn240xg4jd [ 2 ] ; real_T
jeccdzoxxz [ 2 ] ; real_T bmx0xlxylp [ 2 ] ; real_T fdfkb1rm2p [ 2 ] ; real_T
fecsxh4vnh [ 2 ] ; real_T e0y1p3anns [ 2 ] ; real_T dsypnekcaq [ 2 ] ; real_T
ki3zoyocji [ 2 ] ; real_T ewg14pcvrm [ 2 ] ; real_T dvv3jglnuq [ 2 ] ; real_T
hv05dyqncu [ 2 ] ; real_T dtwkkge02o [ 2 ] ; real_T dx0qxi5jlg [ 2 ] ; real_T
brsf15y1c4 [ 2 ] ; real_T jmuk1m54db [ 2 ] ; real_T n2apqzelt2 [ 2 ] ; real_T
hv5n3te5e3 [ 2 ] ; real_T j0zdapl2nl [ 2 ] ; real_T eiho33tobl [ 2 ] ; real_T
orfkvsp3fm [ 2 ] ; real_T alxsejyona [ 2 ] ; real_T ppnildrc2f [ 2 ] ; real_T
hkjzk5gchz [ 2 ] ; real_T g5xk2k5jm0 [ 2 ] ; real_T ohamx2n5x1 [ 2 ] ; real_T
hssfsjxhjd [ 2 ] ; real_T ga24cjavov [ 2 ] ; real_T a2tmwg1p34 [ 2 ] ; real_T
dazw4ockmv [ 2 ] ; real_T ecjfmweqjl [ 2 ] ; real_T m2rjshfzyd [ 2 ] ; real_T
lktnaoydse [ 2 ] ; real_T mzd00r05py [ 2 ] ; real_T nnxmjnxihn [ 2 ] ; real_T
bnj20ws1yh [ 2 ] ; real_T i03jac0x4i [ 2 ] ; real_T n1v5i1g5le [ 2 ] ; real_T
c4jdz5rjoo [ 2 ] ; real_T h1m52rxu1t [ 2 ] ; real_T gimrl0bv1g [ 2 ] ; real_T
e3vzcfl34p [ 2 ] ; real_T olarllqkzb [ 2 ] ; real_T oraplh4rto [ 2 ] ; real_T
lzucshcvh2 [ 2 ] ; real_T h1f2rwi0v4 [ 2 ] ; real_T epwsi1c4gd [ 2 ] ; real_T
nnfwlf0fez [ 2 ] ; real_T nykmgk4b3z [ 2 ] ; real_T j0cqcf2b1b [ 2 ] ; real_T
jpws2usrhk [ 2 ] ; real_T gci31u1bgp [ 2 ] ; real_T fwjausnl2g [ 2 ] ; real_T
nurobigv0v [ 2 ] ; real_T aznnkeqlh0 [ 2 ] ; real_T ahtggo4cxb [ 2 ] ; real_T
nazmpg0h00 [ 2 ] ; real_T lj4p4qfnau [ 2 ] ; real_T l4au12nmm5 [ 2 ] ; real_T
lwvmpskryx [ 2 ] ; real_T bdrdfiqnt5 [ 1448 ] ; real_T lnkatngh1g ; real_T
lc4xd53jqy ; struct { void * AQHandles ; } nuq4v43qhy ; void * l5sy50b5zn ;
void * kpitnwer40 ; void * mkd2spih2s ; void * pfdzwnuhop ; void * ixgbyeweng
; void * nogatpy4d1 ; void * ninhxr4fck ; void * cit41hblo0 ; void *
ojxbbeygjk ; void * fneuxht5zz ; void * h4ry003wnl ; void * iu1sepdskg ; void
* oee5glwfmi ; void * ldtzzmx1mf ; void * eqtdl3gxl0 ; void * fy0dfxdvam ;
struct { void * AQHandles ; } oyzx0samzr ; struct { void * AQHandles ; }
a52tnzhwod ; int_T oqfoisfonm [ 870 ] ; int_T mile0wblyv ; int_T a3hvylotsc ;
boolean_T op1wlzvy2t ; boolean_T fpaxggsz2m ; boolean_T fjpvnssfnv ;
boolean_T hbt31irajz ; } lvqzg0r2xcl ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
struct nqwmswlblnu_ { real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ;
real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10
; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ;
real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T
P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ;
real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T
P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ;
real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T
P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ;
real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T
P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ;
real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T
P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ;
real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T
P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ;
real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T
P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ;
real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 [ 24741 ]
; real_T P_98 ; real_T P_99 [ 24741 ] ; real_T P_100 ; real_T P_101 ; real_T
P_102 ; int8_T P_103 ; int8_T P_104 ; } ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
struct ak0flpomfp { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 121 ] ; int32_T * vardimsAddress [
121 ] ; RTWLoggingFcnPtr loggingPtrs [ 121 ] ; sysRanDType * systemRan [ 4 ]
; int_T systemTid [ 4 ] ; } DataMapInfo ; } ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
typedef struct { cmwtushrfh rtm ; } noywn55fqul ;
#endif
extern struct_Cy8NVN8uTaBKVtp81w17x rtP_Battery ; extern void hyhvfhhfpt (
void ) ; extern void co2jgaw45l ( void ) ; extern void efpnu0fedq ( void ) ;
extern void ekhh3qmd23 ( void ) ; extern void ekhh3qmd23TID2 ( void ) ;
extern void Battery_Model ( const SRE * p0kzyezpty , const real32_T *
mkdg2nw0t2 , const real32_T * mcpby2uc00 , const real32_T * blng4244sk ,
const boolean_T * ezezhr3fbo , const boolean_T * p4c5irnvaj , const boolean_T
* mkzqeq05cf , const boolean_T * fyhoidy225 , const boolean_T * nnlfxu3kr3 ,
const boolean_T * g3mwi3or3q , const boolean_T mlddsh1g4n [ 96 ] , real32_T
crjpt4umym [ 96 ] , real32_T * gr210t4cxd , real32_T * i5e1kzsjlx , real32_T
* klcxmdsfug , real32_T * ayk4ytbpya , real32_T atbdgyptbn [ 96 ] ) ; extern
void Battery_ModelTID2 ( void ) ; extern void g2a0amkjsr ( void ) ; extern
void civyaaklvw ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Battery_Model_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_Battery_Model_GetDWork ( ) ; extern
void mr_Battery_Model_SetDWork ( const mxArray * ssDW ) ; extern void
mr_Battery_Model_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_Battery_Model_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Battery_Model_GetCAPIStaticMap ( void ) ;
void mr_Battery_Model_CreateInitRestoreData ( ) ; void
mr_Battery_Model_CopyFromInitRestoreData ( ) ; void
mr_Battery_Model_DestroyInitRestoreData ( ) ;
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
extern noywn55fqul noywn55fqu ;
#endif
#ifndef Battery_Model_MDLREF_HIDE_CHILD_
extern osmg53lo42o cumyr1omp00 ; extern lvqzg0r2xcl mhghcysq2pf ;
#endif
#endif
