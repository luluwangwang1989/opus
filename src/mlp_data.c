#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "mlp.h"

/* RMS error was 0.218632, seed was 1479354367 */
/* 0.009567 0.056814 (0.218632 0.218632) 3.0118e-07 7479 */

static const float weights[450] = {

/* hidden layer */
1.85706f, -0.127792f, 0.486934f, -0.252073f, 0.218278f, 
0.182399f, -0.249612f, 0.312895f, -0.118228f, -0.123521f, 
0.45384f, -0.302397f, -0.216463f, 0.0613465f, 0.193533f, 
0.066651f, 0.17067f, -0.0278193f, 0.0602761f, -0.087421f, 
-0.0604716f, 1.27567f, -2.28812f, -0.262244f, -0.186225f, 
7.69143f, 1.88698f, -0.0178079f, 0.11667f, -0.0820569f, 
0.102391f, 0.0553723f, 0.00548539f, -0.0361446f, 0.0638111f, 
0.116011f, 0.0785724f, 0.0892341f, 0.169258f, -0.0953813f, 
0.0189002f, -0.14414f, -0.0855396f, -0.183561f, -0.261543f, 
-0.0122127f, 0.060642f, 0.139359f, -5.77982f, 0.218735f, 
0.328613f, 1.12266f, -0.26173f, 0.0141489f, -0.0579786f, 
-0.00821196f, -0.0340188f, -0.00382787f, 0.00463267f, -0.0216233f, 
-0.0316711f, 0.0182308f, -0.044488f, -0.0283259f, 0.00538179f, 
0.0673935f, -0.0699712f, 0.0938827f, 0.0688342f, 0.0472305f, 
0.0358129f, -0.0300705f, -0.127208f, -1.46059f, -0.664145f, 
0.584721f, -1.59867f, 0.428714f, -0.109957f, 0.0160402f, 
-0.165646f, -0.0639903f, -0.0223546f, -0.168096f, 0.192809f, 
-0.0945295f, 0.0966078f, -0.20344f, 0.21911f, -0.239588f, 
0.16812f, -0.624156f, -0.327362f, -0.492687f, -0.146139f, 
0.0489192f, 0.0918105f, -0.259506f, -0.255826f, -1.02741f, 
1.66675f, -1.96975f, 0.5926f, -3.2493f, -0.385736f, 
0.035917f, -0.0455865f, -0.00635188f, -0.0262669f, 0.0311736f, 
0.0376469f, 0.106273f, 0.0272225f, 0.000841985f, -0.000870045f, 
0.0936811f, -0.0535512f, -0.00199683f, -0.175249f, -0.188772f, 
0.116839f, 0.114066f, 0.241866f, 0.318693f, -0.00831369f, 
-0.459869f, -1.67089f, -0.0348707f, 4.08708f, 0.185344f, 
1.65596f, -0.0856278f, -0.00970444f, -0.0751112f, -0.0465534f, 
-0.083325f, -0.0274241f, -0.106578f, -0.062097f, -0.132031f, 
-0.0280223f, -0.162105f, 0.0568372f, 0.0238911f, 0.130229f, 
0.193513f, -0.00905597f, -0.114584f, -0.290716f, -0.270654f, 
0.0116111f, -0.471526f, 0.873425f, 0.256522f, 0.236046f, 
-0.337619f, -0.43148f, -0.00185362f, 0.0879064f, 0.213956f, 
0.109458f, 0.0266622f, -0.0153787f, 0.121687f, -0.0428293f, 
-0.0179952f, 0.0256446f, 0.244823f, -0.0183688f, 0.0673453f, 
-0.261959f, -0.0195782f, -0.141111f, 0.0401895f, 0.425363f, 
0.201468f, -0.167032f, -0.135661f, 9.12063f, -0.175319f, 
4.47634f, 0.303674f, -4.15526f, -0.0474631f, 0.00855777f, 
0.0944216f, 0.0691601f, -0.0445577f, -0.091551f, -0.0982992f, 
-0.131612f, -0.0969343f, -0.124359f, -0.0123872f, 0.0174908f, 
0.465926f, -0.083936f, 0.824247f, 0.0917478f, -0.0434931f, 
-0.125792f, -0.0484324f, 0.0246675f, -0.516806f, 3.3132f, 
3.73923f, 2.62617f, -93.2532f, -0.605171f, 0.0422526f, 
0.00270449f, 0.0662168f, 0.0259782f, 0.0140055f, 0.0174977f, 
-0.0478789f, -0.0162726f, 0.0174899f, -0.0384183f, 0.0458608f, 
0.0954459f, 0.242452f, 0.21106f, 0.280241f, -0.088756f, 
-0.188288f, -0.572681f, -0.561314f, -0.0891808f, 0.401866f, 
-0.63524f, 0.902111f, 0.68859f, 0.856107f, -1.42781f, 
0.0738099f, 0.0721273f, 0.102551f, 0.0874915f, -0.0598193f, 
-0.172467f, -0.0121237f, -0.0276566f, -0.146163f, -0.264742f, 
0.0154283f, -0.0601237f, 0.129874f, 0.0970165f, 0.150932f, 
0.0938906f, -0.149264f, 0.014297f, -0.177554f, -0.126669f, 
0.717065f, -1.862f, 2.25998f, -1.75112f, -1.15153f, 
-0.171174f, 0.0613752f, -0.0453666f, 0.0906195f, 0.0235879f, 
0.0266649f, -0.00258569f, 0.0013994f, -0.00458529f, 0.0285861f, 
0.070281f, 0.0474546f, -0.0312625f, -0.044836f, -0.0677274f, 
-0.0571132f, 0.106835f, 0.145102f, 0.063436f, 0.174177f, 
0.0400255f, -0.960015f, 0.666379f, -1.81109f, -1.12481f, 
-3.22379f, -0.617688f, -0.0196257f, 0.312598f, 0.151316f, 
0.105433f, 0.00285736f, 0.244391f, 0.188321f, 0.146927f, 
-0.0991143f, 0.331209f, 0.174657f, 0.0566923f, 0.218108f, 
0.278288f, 0.169498f, 0.088236f, -0.318505f, 0.0934496f, 
-0.130456f, 0.033616f, -0.137256f, 5.0233f, 0.807433f, 
-1.80039f, -1.20691f, 0.954173f, -0.0258414f, 0.0275836f, 
0.0420577f, 0.0260727f, -0.0386572f, -0.0126257f, -0.0199216f, 
-0.00275359f, -0.0279507f, 0.0336754f, 0.0200924f, -0.0275905f, 
-0.134484f, -0.0178773f, -0.048596f, 0.140668f, -0.0240282f, 
0.133156f, -0.0154105f, -0.0307081f, -1.1112f, 1.25178f, 
-0.400513f, -4.99124f, 0.133491f, 1.39644f, -0.208202f, 
-0.115869f, -0.184513f, -0.065846f, -0.0823625f, -0.0714934f, 
-0.0366108f, -0.0259024f, -0.199396f, -0.0876733f, -0.0860402f, 
0.111153f, 0.0771431f, 0.230413f, 0.478924f, 0.0588229f, 
-0.0106344f, -0.0371012f, 0.0713401f, 0.194239f, 9.53558f, 
1.23366f, 0.155603f, 4.49677f, 0.743929f, -1.01867f, 
0.045674f, 0.00230101f, -0.0111697f, -0.00849812f, 0.0344646f, 
-0.0262655f, 0.0344082f, 0.00702128f, 0.0498685f, 0.017916f, 
-0.0422025f, -0.029116f, -0.186595f, -0.0139807f, -0.352806f, 
-0.070128f, 0.079064f, -0.00257802f, -0.325687f, 0.087853f, 
0.536298f, -1.39807f, -0.76403f, -0.378262f, -0.0528369f, 
-0.0874338f, -0.00700915f, 0.103583f, 0.0333754f, 0.0188563f, 
-0.00467275f, 0.0450362f, 0.0263766f, -0.0648204f, -0.0490503f, 
0.0580142f, -0.0242903f, -0.0187162f, -0.0705934f, 0.274156f, 
0.150911f, 0.0853199f, -0.00532834f, -0.126533f, -0.0996278f, 
0.0570326f, 1.70936f, 3.01576f, -1.36414f, -4.93744f, 
-2.24259f, 
/* output layer */
0.281193, -1.0361, -0.554712, -3.32969, 0.497616, 
1.1356, 0.911487, 0.591915, 0.785052, 4.22215, 
-1.53397, -1.78146, -0.726456, 4.06597, 0.914172, 
2.84081, 1.2306, 5.29403, -0.126691, -1.22636, 
-0.71336, 0.295882, -1.30839, -3.25103, -0.680867, 
0.0129163, 0.0272871, 1.15775, 0.932324, 1.22855, 
-0.210346, 1.74899, -0.945376, 0.626078, };

static const int topo[3] = {25, 16, 2};

const MLP net = {
	3,
	topo,
	weights
};
