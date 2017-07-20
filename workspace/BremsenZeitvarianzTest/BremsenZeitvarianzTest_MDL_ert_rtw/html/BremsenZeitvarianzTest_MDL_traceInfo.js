function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/BrakeAND */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:87"] = "BremsenZeitvarianzTest_MDL.c:123";
	/* <Root>/BrakeFlag */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:104"] = "BremsenZeitvarianzTest_MDL.h:102";
	/* <Root>/BrakeSwitchSelect */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:109"] = "BremsenZeitvarianzTest_MDL.c:130&BremsenZeitvarianzTest_MDL.h:154&BremsenZeitvarianzTest_MDL_data.c:49";
	/* <Root>/CustomValueBrake */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:110"] = "BremsenZeitvarianzTest_MDL.c:131&BremsenZeitvarianzTest_MDL.h:226&BremsenZeitvarianzTest_MDL_data.c:121";
	/* <Root>/DebugScope */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:107"] = "BremsenZeitvarianzTest_MDL.h:106";
	/* <Root>/Enable_Jump */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:88"] = "BremsenZeitvarianzTest_MDL.c:124&BremsenZeitvarianzTest_MDL.h:235&BremsenZeitvarianzTest_MDL_data.c:130";
	/* <Root>/Enable_Motor */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:93"] = "BremsenZeitvarianzTest_MDL.c:245&BremsenZeitvarianzTest_MDL.h:238&BremsenZeitvarianzTest_MDL_data.c:133";
	/* <Root>/Invert */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:91"] = "BremsenZeitvarianzTest_MDL.c:246";
	/* <Root>/Logical
Operator */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:105"] = "BremsenZeitvarianzTest_MDL.c:104";
	/* <Root>/MS-Cube-Brake */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:89"] = "BremsenZeitvarianzTest_MDL.c:143";
	/* <Root>/MS-Cube-Motor */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:90"] = "BremsenZeitvarianzTest_MDL.c:146";
	/* <Root>/MotorAND */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:92"] = "BremsenZeitvarianzTest_MDL.c:244&BremsenZeitvarianzTest_MDL.h:94";
	/* <Root>/MotorTorque */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:94"] = "BremsenZeitvarianzTest_MDL.h:223&BremsenZeitvarianzTest_MDL_data.c:118";
	/* <Root>/Reset */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:106"] = "BremsenZeitvarianzTest_MDL.c:105&BremsenZeitvarianzTest_MDL.h:232&BremsenZeitvarianzTest_MDL_data.c:127";
	/* <Root>/Sample
and Hold */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:102"] = "BremsenZeitvarianzTest_MDL.c:109,121,353,357&BremsenZeitvarianzTest_MDL.h:120,125";
	/* <Root>/Switch */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:108"] = "BremsenZeitvarianzTest_MDL.c:129,141&BremsenZeitvarianzTest_MDL.h:93,160&BremsenZeitvarianzTest_MDL_data.c:55";
	/* <Root>/phi_Scope */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:82"] = "BremsenZeitvarianzTest_MDL.h:110";
	/* <Root>/u_K_Scope */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:83"] = "BremsenZeitvarianzTest_MDL.h:114";
	/* <Root>/u_R_Scope */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:84"] = "BremsenZeitvarianzTest_MDL.h:118";
	/* <Root>/u_R_abs */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:85"] = "BremsenZeitvarianzTest_MDL.c:98";
	/* <S1>/Compare */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:86:2"] = "BremsenZeitvarianzTest_MDL.c:97";
	/* <S1>/Constant */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:86:3"] = "BremsenZeitvarianzTest_MDL.c:99&BremsenZeitvarianzTest_MDL.h:141&BremsenZeitvarianzTest_MDL_data.c:36";
	/* <S2>/MS-Cube-ADC */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:13"] = "BremsenZeitvarianzTest_MDL.c:84&BremsenZeitvarianzTest_MDL.h:86";
	/* <S2>/MS-Cube-Sensors */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:14"] = "BremsenZeitvarianzTest_MDL.c:150&BremsenZeitvarianzTest_MDL.h:87,88,89,90,91,92";
	/* <S3>/In */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:102:1"] = "BremsenZeitvarianzTest_MDL.c:114&BremsenZeitvarianzTest_MDL.h:95";
	/* <S3>/Trigger */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:102:2"] = "BremsenZeitvarianzTest_MDL.c:110";
	/* <S3>/  */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:102:3"] = "BremsenZeitvarianzTest_MDL.c:354&BremsenZeitvarianzTest_MDL.h:229&BremsenZeitvarianzTest_MDL_data.c:124";
	/* <S4>/Add */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:4"] = "BremsenZeitvarianzTest_MDL.c:228";
	/* <S4>/CompDelay */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:5"] = "BremsenZeitvarianzTest_MDL.c:230,349&BremsenZeitvarianzTest_MDL.h:196&BremsenZeitvarianzTest_MDL_data.c:91";
	/* <S4>/Step */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:6"] = "BremsenZeitvarianzTest_MDL.c:196,217&BremsenZeitvarianzTest_MDL.h:133,181,184&BremsenZeitvarianzTest_MDL_data.c:28,76,79";
	/* <S4>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:7"] = "BremsenZeitvarianzTest_MDL.c:229";
	/* <S4>/Ta_Gain */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:8"] = "BremsenZeitvarianzTest_MDL.c:225&BremsenZeitvarianzTest_MDL.h:132&BremsenZeitvarianzTest_MDL_data.c:27";
	/* <S4>/alpha_Gain */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:9"] = "BremsenZeitvarianzTest_MDL.c:226&BremsenZeitvarianzTest_MDL.h:137&BremsenZeitvarianzTest_MDL_data.c:32";
	/* <S4>/alpha_comp_Gain */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:10"] = "BremsenZeitvarianzTest_MDL.c:227&BremsenZeitvarianzTest_MDL.h:138&BremsenZeitvarianzTest_MDL_data.c:33";
	/* <S4>/first_run_select */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:11"] = "BremsenZeitvarianzTest_MDL.c:224,242&BremsenZeitvarianzTest_MDL.h:85,199&BremsenZeitvarianzTest_MDL_data.c:94";
	/* <S5>/Gain */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:20"] = "BremsenZeitvarianzTest_MDL.c:168&BremsenZeitvarianzTest_MDL.h:175&BremsenZeitvarianzTest_MDL_data.c:70";
	/* <S5>/SensorAlpha */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:21"] = "BremsenZeitvarianzTest_MDL.c:169&BremsenZeitvarianzTest_MDL.h:145,150&BremsenZeitvarianzTest_MDL_data.c:40,45";
	/* <S5>/SensorAlpha1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:22"] = "BremsenZeitvarianzTest_MDL.c:170&BremsenZeitvarianzTest_MDL.h:146,151&BremsenZeitvarianzTest_MDL_data.c:41,46";
	/* <S5>/Trigonometric
Function */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:23"] = "BremsenZeitvarianzTest_MDL.c:177";
	/* <S5>/estimate_offset */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:24"] = "BremsenZeitvarianzTest_MDL.c:163&BremsenZeitvarianzTest_MDL.h:178&BremsenZeitvarianzTest_MDL_data.c:73";
	/* <S5>/offset_Add */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:25"] = "BremsenZeitvarianzTest_MDL.c:158";
	/* <S5>/x_dd_Add */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:26"] = "BremsenZeitvarianzTest_MDL.c:175";
	/* <S5>/y_dd__Add */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:27"] = "BremsenZeitvarianzTest_MDL.c:176";
	/* <S6>/half */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:32"] = "BremsenZeitvarianzTest_MDL.c:199&BremsenZeitvarianzTest_MDL.h:84,193&BremsenZeitvarianzTest_MDL_data.c:88";
	/* <S6>/w_Add */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:33"] = "BremsenZeitvarianzTest_MDL.c:204";
	/* <S7>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:37"] = "BremsenZeitvarianzTest_MDL.c:88&BremsenZeitvarianzTest_MDL.h:83";
	/* <S7>/adc_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:38"] = "BremsenZeitvarianzTest_MDL.c:90&BremsenZeitvarianzTest_MDL.h:202&BremsenZeitvarianzTest_MDL_data.c:97";
	/* <S7>/adc_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:39"] = "BremsenZeitvarianzTest_MDL.c:89&BremsenZeitvarianzTest_MDL.h:157&BremsenZeitvarianzTest_MDL_data.c:52";
	/* <S8>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:44"] = "BremsenZeitvarianzTest_MDL.c:205";
	/* <S8>/w1_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:45"] = "BremsenZeitvarianzTest_MDL.c:202&BremsenZeitvarianzTest_MDL.h:217&BremsenZeitvarianzTest_MDL_data.c:112";
	/* <S8>/w1_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:46"] = "BremsenZeitvarianzTest_MDL.c:200&BremsenZeitvarianzTest_MDL.h:187&BremsenZeitvarianzTest_MDL_data.c:82";
	/* <S9>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:50"] = "BremsenZeitvarianzTest_MDL.c:206";
	/* <S9>/w2_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:51"] = "BremsenZeitvarianzTest_MDL.c:203&BremsenZeitvarianzTest_MDL.h:220&BremsenZeitvarianzTest_MDL_data.c:115";
	/* <S9>/w2_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:52"] = "BremsenZeitvarianzTest_MDL.c:201&BremsenZeitvarianzTest_MDL.h:190&BremsenZeitvarianzTest_MDL_data.c:85";
	/* <S10>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:56"] = "BremsenZeitvarianzTest_MDL.c:171";
	/* <S10>/x1_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:57"] = "BremsenZeitvarianzTest_MDL.c:164&BremsenZeitvarianzTest_MDL.h:211&BremsenZeitvarianzTest_MDL_data.c:106";
	/* <S10>/x1_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:58"] = "BremsenZeitvarianzTest_MDL.c:159&BremsenZeitvarianzTest_MDL.h:169&BremsenZeitvarianzTest_MDL_data.c:64";
	/* <S11>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:62"] = "BremsenZeitvarianzTest_MDL.c:172";
	/* <S11>/x2_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:63"] = "BremsenZeitvarianzTest_MDL.c:165&BremsenZeitvarianzTest_MDL.h:214&BremsenZeitvarianzTest_MDL_data.c:109";
	/* <S11>/x2_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:64"] = "BremsenZeitvarianzTest_MDL.c:160&BremsenZeitvarianzTest_MDL.h:172&BremsenZeitvarianzTest_MDL_data.c:67";
	/* <S12>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:68"] = "BremsenZeitvarianzTest_MDL.c:173";
	/* <S12>/y1_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:69"] = "BremsenZeitvarianzTest_MDL.c:166&BremsenZeitvarianzTest_MDL.h:205&BremsenZeitvarianzTest_MDL_data.c:100";
	/* <S12>/y1_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:70"] = "BremsenZeitvarianzTest_MDL.c:161&BremsenZeitvarianzTest_MDL.h:163&BremsenZeitvarianzTest_MDL_data.c:58";
	/* <S13>/Sum */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:74"] = "BremsenZeitvarianzTest_MDL.c:174";
	/* <S13>/y2_poly_p1 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:75"] = "BremsenZeitvarianzTest_MDL.c:167&BremsenZeitvarianzTest_MDL.h:208&BremsenZeitvarianzTest_MDL_data.c:103";
	/* <S13>/y2_poly_p2 */
	this.urlHashMap["BremsenZeitvarianzTest_MDL:76"] = "BremsenZeitvarianzTest_MDL.c:162&BremsenZeitvarianzTest_MDL.h:166&BremsenZeitvarianzTest_MDL_data.c:61";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "BremsenZeitvarianzTest_MDL"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "BremsenZeitvarianzTest_MDL:86"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:86"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "BremsenZeitvarianzTest_MDL:78"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:78"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "BremsenZeitvarianzTest_MDL:102"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:102"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "BremsenZeitvarianzTest_MDL:1"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:1"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "BremsenZeitvarianzTest_MDL:15"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:15"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "BremsenZeitvarianzTest_MDL:29"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:29"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "BremsenZeitvarianzTest_MDL:35"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:35"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "BremsenZeitvarianzTest_MDL:42"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:42"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "BremsenZeitvarianzTest_MDL:48"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:48"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<S10>"] = {sid: "BremsenZeitvarianzTest_MDL:54"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:54"] = {rtwname: "<S10>"};
	this.rtwnameHashMap["<S11>"] = {sid: "BremsenZeitvarianzTest_MDL:60"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:60"] = {rtwname: "<S11>"};
	this.rtwnameHashMap["<S12>"] = {sid: "BremsenZeitvarianzTest_MDL:66"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:66"] = {rtwname: "<S12>"};
	this.rtwnameHashMap["<S13>"] = {sid: "BremsenZeitvarianzTest_MDL:72"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:72"] = {rtwname: "<S13>"};
	this.rtwnameHashMap["<Root>/BrakeAND"] = {sid: "BremsenZeitvarianzTest_MDL:87"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:87"] = {rtwname: "<Root>/BrakeAND"};
	this.rtwnameHashMap["<Root>/BrakeFlag"] = {sid: "BremsenZeitvarianzTest_MDL:104"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:104"] = {rtwname: "<Root>/BrakeFlag"};
	this.rtwnameHashMap["<Root>/BrakeSwitchSelect"] = {sid: "BremsenZeitvarianzTest_MDL:109"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:109"] = {rtwname: "<Root>/BrakeSwitchSelect"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "BremsenZeitvarianzTest_MDL:86"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:86"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/CustomValueBrake"] = {sid: "BremsenZeitvarianzTest_MDL:110"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:110"] = {rtwname: "<Root>/CustomValueBrake"};
	this.rtwnameHashMap["<Root>/DebugScope"] = {sid: "BremsenZeitvarianzTest_MDL:107"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:107"] = {rtwname: "<Root>/DebugScope"};
	this.rtwnameHashMap["<Root>/Enable_Jump"] = {sid: "BremsenZeitvarianzTest_MDL:88"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:88"] = {rtwname: "<Root>/Enable_Jump"};
	this.rtwnameHashMap["<Root>/Enable_Motor"] = {sid: "BremsenZeitvarianzTest_MDL:93"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:93"] = {rtwname: "<Root>/Enable_Motor"};
	this.rtwnameHashMap["<Root>/Invert"] = {sid: "BremsenZeitvarianzTest_MDL:91"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:91"] = {rtwname: "<Root>/Invert"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "BremsenZeitvarianzTest_MDL:105"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:105"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/MS-Cube-Brake"] = {sid: "BremsenZeitvarianzTest_MDL:89"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:89"] = {rtwname: "<Root>/MS-Cube-Brake"};
	this.rtwnameHashMap["<Root>/MS-Cube-Motor"] = {sid: "BremsenZeitvarianzTest_MDL:90"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:90"] = {rtwname: "<Root>/MS-Cube-Motor"};
	this.rtwnameHashMap["<Root>/Measurement"] = {sid: "BremsenZeitvarianzTest_MDL:78"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:78"] = {rtwname: "<Root>/Measurement"};
	this.rtwnameHashMap["<Root>/MotorAND"] = {sid: "BremsenZeitvarianzTest_MDL:92"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:92"] = {rtwname: "<Root>/MotorAND"};
	this.rtwnameHashMap["<Root>/MotorTorque"] = {sid: "BremsenZeitvarianzTest_MDL:94"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:94"] = {rtwname: "<Root>/MotorTorque"};
	this.rtwnameHashMap["<Root>/Reset"] = {sid: "BremsenZeitvarianzTest_MDL:106"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:106"] = {rtwname: "<Root>/Reset"};
	this.rtwnameHashMap["<Root>/Sample and Hold"] = {sid: "BremsenZeitvarianzTest_MDL:102"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:102"] = {rtwname: "<Root>/Sample and Hold"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "BremsenZeitvarianzTest_MDL:108"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:108"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/phi_Scope"] = {sid: "BremsenZeitvarianzTest_MDL:82"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:82"] = {rtwname: "<Root>/phi_Scope"};
	this.rtwnameHashMap["<Root>/u_K_Scope"] = {sid: "BremsenZeitvarianzTest_MDL:83"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:83"] = {rtwname: "<Root>/u_K_Scope"};
	this.rtwnameHashMap["<Root>/u_R_Scope"] = {sid: "BremsenZeitvarianzTest_MDL:84"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:84"] = {rtwname: "<Root>/u_R_Scope"};
	this.rtwnameHashMap["<Root>/u_R_abs"] = {sid: "BremsenZeitvarianzTest_MDL:85"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:85"] = {rtwname: "<Root>/u_R_abs"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "BremsenZeitvarianzTest_MDL:86:1"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:86:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "BremsenZeitvarianzTest_MDL:86:2"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:86:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "BremsenZeitvarianzTest_MDL:86:3"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:86:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "BremsenZeitvarianzTest_MDL:86:4"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:86:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/ComplementaryFilter"] = {sid: "BremsenZeitvarianzTest_MDL:1"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:1"] = {rtwname: "<S2>/ComplementaryFilter"};
	this.rtwnameHashMap["<S2>/MS-Cube-ADC"] = {sid: "BremsenZeitvarianzTest_MDL:13"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:13"] = {rtwname: "<S2>/MS-Cube-ADC"};
	this.rtwnameHashMap["<S2>/MS-Cube-Sensors"] = {sid: "BremsenZeitvarianzTest_MDL:14"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:14"] = {rtwname: "<S2>/MS-Cube-Sensors"};
	this.rtwnameHashMap["<S2>/PhiEstimate"] = {sid: "BremsenZeitvarianzTest_MDL:15"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:15"] = {rtwname: "<S2>/PhiEstimate"};
	this.rtwnameHashMap["<S2>/WAverage"] = {sid: "BremsenZeitvarianzTest_MDL:29"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:29"] = {rtwname: "<S2>/WAverage"};
	this.rtwnameHashMap["<S2>/adc_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:35"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:35"] = {rtwname: "<S2>/adc_Calibration"};
	this.rtwnameHashMap["<S2>/w1_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:42"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:42"] = {rtwname: "<S2>/w1_Calibration"};
	this.rtwnameHashMap["<S2>/w2_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:48"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:48"] = {rtwname: "<S2>/w2_Calibration"};
	this.rtwnameHashMap["<S2>/x1_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:54"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:54"] = {rtwname: "<S2>/x1_Calibration"};
	this.rtwnameHashMap["<S2>/x2_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:60"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:60"] = {rtwname: "<S2>/x2_Calibration"};
	this.rtwnameHashMap["<S2>/y1_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:66"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:66"] = {rtwname: "<S2>/y1_Calibration"};
	this.rtwnameHashMap["<S2>/y2_Calibration"] = {sid: "BremsenZeitvarianzTest_MDL:72"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:72"] = {rtwname: "<S2>/y2_Calibration"};
	this.rtwnameHashMap["<S2>/phi__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:79"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:79"] = {rtwname: "<S2>/phi__OUT"};
	this.rtwnameHashMap["<S2>/u_K__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:81"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:81"] = {rtwname: "<S2>/u_K__OUT"};
	this.rtwnameHashMap["<S2>/u_R__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:80"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:80"] = {rtwname: "<S2>/u_R__OUT"};
	this.rtwnameHashMap["<S3>/In"] = {sid: "BremsenZeitvarianzTest_MDL:102:1"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:102:1"] = {rtwname: "<S3>/In"};
	this.rtwnameHashMap["<S3>/Trigger"] = {sid: "BremsenZeitvarianzTest_MDL:102:2"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:102:2"] = {rtwname: "<S3>/Trigger"};
	this.rtwnameHashMap["<S3>/ "] = {sid: "BremsenZeitvarianzTest_MDL:102:3"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:102:3"] = {rtwname: "<S3>/ "};
	this.rtwnameHashMap["<S4>/phi_A__IN"] = {sid: "BremsenZeitvarianzTest_MDL:2"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:2"] = {rtwname: "<S4>/phi_A__IN"};
	this.rtwnameHashMap["<S4>/w__IN"] = {sid: "BremsenZeitvarianzTest_MDL:3"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:3"] = {rtwname: "<S4>/w__IN"};
	this.rtwnameHashMap["<S4>/Add"] = {sid: "BremsenZeitvarianzTest_MDL:4"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:4"] = {rtwname: "<S4>/Add"};
	this.rtwnameHashMap["<S4>/CompDelay"] = {sid: "BremsenZeitvarianzTest_MDL:5"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:5"] = {rtwname: "<S4>/CompDelay"};
	this.rtwnameHashMap["<S4>/Step"] = {sid: "BremsenZeitvarianzTest_MDL:6"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:6"] = {rtwname: "<S4>/Step"};
	this.rtwnameHashMap["<S4>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:7"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:7"] = {rtwname: "<S4>/Sum"};
	this.rtwnameHashMap["<S4>/Ta_Gain"] = {sid: "BremsenZeitvarianzTest_MDL:8"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:8"] = {rtwname: "<S4>/Ta_Gain"};
	this.rtwnameHashMap["<S4>/alpha_Gain"] = {sid: "BremsenZeitvarianzTest_MDL:9"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:9"] = {rtwname: "<S4>/alpha_Gain"};
	this.rtwnameHashMap["<S4>/alpha_comp_Gain"] = {sid: "BremsenZeitvarianzTest_MDL:10"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:10"] = {rtwname: "<S4>/alpha_comp_Gain"};
	this.rtwnameHashMap["<S4>/first_run_select"] = {sid: "BremsenZeitvarianzTest_MDL:11"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:11"] = {rtwname: "<S4>/first_run_select"};
	this.rtwnameHashMap["<S4>/phi_C__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:12"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:12"] = {rtwname: "<S4>/phi_C__OUT"};
	this.rtwnameHashMap["<S5>/x1_dd__IN"] = {sid: "BremsenZeitvarianzTest_MDL:16"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:16"] = {rtwname: "<S5>/x1_dd__IN"};
	this.rtwnameHashMap["<S5>/y1_d__IN"] = {sid: "BremsenZeitvarianzTest_MDL:17"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:17"] = {rtwname: "<S5>/y1_d__IN"};
	this.rtwnameHashMap["<S5>/x2_dd__IN"] = {sid: "BremsenZeitvarianzTest_MDL:18"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:18"] = {rtwname: "<S5>/x2_dd__IN"};
	this.rtwnameHashMap["<S5>/y2_dd__IN"] = {sid: "BremsenZeitvarianzTest_MDL:19"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:19"] = {rtwname: "<S5>/y2_dd__IN"};
	this.rtwnameHashMap["<S5>/Gain"] = {sid: "BremsenZeitvarianzTest_MDL:20"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:20"] = {rtwname: "<S5>/Gain"};
	this.rtwnameHashMap["<S5>/SensorAlpha"] = {sid: "BremsenZeitvarianzTest_MDL:21"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:21"] = {rtwname: "<S5>/SensorAlpha"};
	this.rtwnameHashMap["<S5>/SensorAlpha1"] = {sid: "BremsenZeitvarianzTest_MDL:22"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:22"] = {rtwname: "<S5>/SensorAlpha1"};
	this.rtwnameHashMap["<S5>/Trigonometric Function"] = {sid: "BremsenZeitvarianzTest_MDL:23"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:23"] = {rtwname: "<S5>/Trigonometric Function"};
	this.rtwnameHashMap["<S5>/estimate_offset"] = {sid: "BremsenZeitvarianzTest_MDL:24"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:24"] = {rtwname: "<S5>/estimate_offset"};
	this.rtwnameHashMap["<S5>/offset_Add"] = {sid: "BremsenZeitvarianzTest_MDL:25"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:25"] = {rtwname: "<S5>/offset_Add"};
	this.rtwnameHashMap["<S5>/x_dd_Add"] = {sid: "BremsenZeitvarianzTest_MDL:26"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:26"] = {rtwname: "<S5>/x_dd_Add"};
	this.rtwnameHashMap["<S5>/y_dd__Add"] = {sid: "BremsenZeitvarianzTest_MDL:27"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:27"] = {rtwname: "<S5>/y_dd__Add"};
	this.rtwnameHashMap["<S5>/phi_A__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:28"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:28"] = {rtwname: "<S5>/phi_A__OUT"};
	this.rtwnameHashMap["<S6>/w1__IN"] = {sid: "BremsenZeitvarianzTest_MDL:30"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:30"] = {rtwname: "<S6>/w1__IN"};
	this.rtwnameHashMap["<S6>/w2__IN"] = {sid: "BremsenZeitvarianzTest_MDL:31"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:31"] = {rtwname: "<S6>/w2__IN"};
	this.rtwnameHashMap["<S6>/half"] = {sid: "BremsenZeitvarianzTest_MDL:32"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:32"] = {rtwname: "<S6>/half"};
	this.rtwnameHashMap["<S6>/w_Add"] = {sid: "BremsenZeitvarianzTest_MDL:33"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:33"] = {rtwname: "<S6>/w_Add"};
	this.rtwnameHashMap["<S6>/w__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:34"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:34"] = {rtwname: "<S6>/w__OUT"};
	this.rtwnameHashMap["<S7>/adc_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:36"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:36"] = {rtwname: "<S7>/adc_raw__IN"};
	this.rtwnameHashMap["<S7>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:37"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:37"] = {rtwname: "<S7>/Sum"};
	this.rtwnameHashMap["<S7>/adc_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:38"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:38"] = {rtwname: "<S7>/adc_poly_p1"};
	this.rtwnameHashMap["<S7>/adc_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:39"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:39"] = {rtwname: "<S7>/adc_poly_p2"};
	this.rtwnameHashMap["<S7>/w_R__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:40"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:40"] = {rtwname: "<S7>/w_R__OUT"};
	this.rtwnameHashMap["<S8>/w1_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:43"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:43"] = {rtwname: "<S8>/w1_raw__IN"};
	this.rtwnameHashMap["<S8>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:44"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:44"] = {rtwname: "<S8>/Sum"};
	this.rtwnameHashMap["<S8>/w1_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:45"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:45"] = {rtwname: "<S8>/w1_poly_p1"};
	this.rtwnameHashMap["<S8>/w1_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:46"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:46"] = {rtwname: "<S8>/w1_poly_p2"};
	this.rtwnameHashMap["<S8>/w1__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:47"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:47"] = {rtwname: "<S8>/w1__OUT"};
	this.rtwnameHashMap["<S9>/w2_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:49"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:49"] = {rtwname: "<S9>/w2_raw__IN"};
	this.rtwnameHashMap["<S9>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:50"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:50"] = {rtwname: "<S9>/Sum"};
	this.rtwnameHashMap["<S9>/w2_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:51"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:51"] = {rtwname: "<S9>/w2_poly_p1"};
	this.rtwnameHashMap["<S9>/w2_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:52"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:52"] = {rtwname: "<S9>/w2_poly_p2"};
	this.rtwnameHashMap["<S9>/w2__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:53"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:53"] = {rtwname: "<S9>/w2__OUT"};
	this.rtwnameHashMap["<S10>/x1_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:55"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:55"] = {rtwname: "<S10>/x1_raw__IN"};
	this.rtwnameHashMap["<S10>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:56"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:56"] = {rtwname: "<S10>/Sum"};
	this.rtwnameHashMap["<S10>/x1_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:57"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:57"] = {rtwname: "<S10>/x1_poly_p1"};
	this.rtwnameHashMap["<S10>/x1_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:58"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:58"] = {rtwname: "<S10>/x1_poly_p2"};
	this.rtwnameHashMap["<S10>/x1__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:59"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:59"] = {rtwname: "<S10>/x1__OUT"};
	this.rtwnameHashMap["<S11>/x2_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:61"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:61"] = {rtwname: "<S11>/x2_raw__IN"};
	this.rtwnameHashMap["<S11>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:62"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:62"] = {rtwname: "<S11>/Sum"};
	this.rtwnameHashMap["<S11>/x2_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:63"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:63"] = {rtwname: "<S11>/x2_poly_p1"};
	this.rtwnameHashMap["<S11>/x2_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:64"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:64"] = {rtwname: "<S11>/x2_poly_p2"};
	this.rtwnameHashMap["<S11>/x2__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:65"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:65"] = {rtwname: "<S11>/x2__OUT"};
	this.rtwnameHashMap["<S12>/y1_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:67"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:67"] = {rtwname: "<S12>/y1_raw__IN"};
	this.rtwnameHashMap["<S12>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:68"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:68"] = {rtwname: "<S12>/Sum"};
	this.rtwnameHashMap["<S12>/y1_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:69"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:69"] = {rtwname: "<S12>/y1_poly_p1"};
	this.rtwnameHashMap["<S12>/y1_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:70"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:70"] = {rtwname: "<S12>/y1_poly_p2"};
	this.rtwnameHashMap["<S12>/y1__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:71"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:71"] = {rtwname: "<S12>/y1__OUT"};
	this.rtwnameHashMap["<S13>/y2_raw__IN"] = {sid: "BremsenZeitvarianzTest_MDL:73"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:73"] = {rtwname: "<S13>/y2_raw__IN"};
	this.rtwnameHashMap["<S13>/Sum"] = {sid: "BremsenZeitvarianzTest_MDL:74"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:74"] = {rtwname: "<S13>/Sum"};
	this.rtwnameHashMap["<S13>/y2_poly_p1"] = {sid: "BremsenZeitvarianzTest_MDL:75"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:75"] = {rtwname: "<S13>/y2_poly_p1"};
	this.rtwnameHashMap["<S13>/y2_poly_p2"] = {sid: "BremsenZeitvarianzTest_MDL:76"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:76"] = {rtwname: "<S13>/y2_poly_p2"};
	this.rtwnameHashMap["<S13>/y2__OUT"] = {sid: "BremsenZeitvarianzTest_MDL:77"};
	this.sidHashMap["BremsenZeitvarianzTest_MDL:77"] = {rtwname: "<S13>/y2__OUT"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
