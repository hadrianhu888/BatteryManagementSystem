#ifndef RTW_HEADER_Battery_Model_types_h_
#define RTW_HEADER_Battery_Model_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_BMS_Output_
#define DEFINED_TYPEDEF_FOR_BMS_Output_
typedef struct { real32_T DischargeCurrentLimit ; real32_T ChargeCurrentLimit
; real32_T ChargeCurrentReq ; boolean_T PosContactorChgrCmd ; boolean_T
PreChargeRelayChgrCmd ; boolean_T NegContactorChgrCmd ; boolean_T
PosContactorInvtrCmd ; boolean_T PreChargeRelayInvtrCmd ; boolean_T
NegContactorInvtrCmd ; boolean_T BalCmd [ 96 ] ; uint8_T sl_padding0 [ 6 ] ;
} BMS_Output ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_
typedef int8_T SRE ;
#define SRE_Balancing ((SRE)0) 
#define SRE_Charging ((SRE)1)
#define SRE_Driving ((SRE)2)
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Input_
#define DEFINED_TYPEDEF_FOR_BMS_Input_
typedef struct { real32_T Cell_Voltages [ 96 ] ; real32_T Pack_Voltage ;
real32_T Pack_Current ; real32_T Vout_Chgr ; real32_T Vout_Invtr ; real32_T
Cell_Temperatures [ 96 ] ; } BMS_Input ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_Cy8NVN8uTaBKVtp81w17x_
#define DEFINED_TYPEDEF_FOR_struct_Cy8NVN8uTaBKVtp81w17x_
typedef struct { real_T SOC_LUT [ 10 ] ; real_T Temperature_LUT [ 3 ] ;
real_T Capacity_LUT [ 3 ] ; real_T Em_LUT [ 30 ] ; real_T R0_LUT [ 30 ] ;
real_T R1_LUT [ 30 ] ; real_T C1_LUT [ 30 ] ; real_T cell_mass ; real_T
cell_rho_Cp ; real_T cell_Cp_heat ; real_T T_init ; real_T Qe_init ; real_T
R_bleed ; real_T h_conv ; real_T cell_area ; real_T TempInit ; real_T SOCInit
[ 6 ] ; } struct_Cy8NVN8uTaBKVtp81w17x ;
#endif
typedef struct nqwmswlblnu_ nqwmswlblnu ; typedef struct ak0flpomfp
cmwtushrfh ;
#endif
