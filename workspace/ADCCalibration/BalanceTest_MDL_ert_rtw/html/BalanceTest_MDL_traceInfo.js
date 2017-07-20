function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Abs */
	this.urlHashMap["BalanceTest_MDL:114"] = "BalanceTest_MDL.c:179";
	/* <Root>/K_Phi */
	this.urlHashMap["BalanceTest_MDL:109"] = "BalanceTest_MDL.c:170&BalanceTest_MDL.h:120&BalanceTest_MDL_data.c:26";
	/* <Root>/K_u_K */
	this.urlHashMap["BalanceTest_MDL:110"] = "BalanceTest_MDL.c:171&BalanceTest_MDL.h:123&BalanceTest_MDL_data.c:29";
	/* <Root>/K_u_R */
	this.urlHashMap["BalanceTest_MDL:111"] = "BalanceTest_MDL.c:172&BalanceTest_MDL.h:126&BalanceTest_MDL_data.c:32";
	/* <Root>/MS-Cube-ADC */
	this.urlHashMap["BalanceTest_MDL:102"] = "BalanceTest_MDL.c:158&BalanceTest_MDL.h:92";
	/* <Root>/MS-Cube-Motor */
	this.urlHashMap["BalanceTest_MDL:113"] = "BalanceTest_MDL.c:74";
	/* <Root>/MS-Cube-Sensors */
	this.urlHashMap["BalanceTest_MDL:1"] = "BalanceTest_MDL.c:77&BalanceTest_MDL.h:86,87,88,89,90,91";
	/* <Root>/Saturation */
	this.urlHashMap["BalanceTest_MDL:117"] = "BalanceTest_MDL.c:185,194&BalanceTest_MDL.h:94,215,218&BalanceTest_MDL_data.c:121,124";
	/* <Root>/Sum */
	this.urlHashMap["BalanceTest_MDL:112"] = "BalanceTest_MDL.c:169&BalanceTest_MDL.h:93";
	/* <Root>/phi_Scope */
	this.urlHashMap["BalanceTest_MDL:101"] = "BalanceTest_MDL.h:102";
	/* <Root>/torque_Scope */
	this.urlHashMap["BalanceTest_MDL:116"] = "BalanceTest_MDL.h:106";
	/* <Root>/u_K_Scope */
	this.urlHashMap["BalanceTest_MDL:119"] = "BalanceTest_MDL.h:110";
	/* <Root>/u_R_Scope */
	this.urlHashMap["BalanceTest_MDL:118"] = "BalanceTest_MDL.h:114";
	/* <S1>/Add */
	this.urlHashMap["BalanceTest_MDL:94"] = "BalanceTest_MDL.c:143";
	/* <S1>/CompDelay */
	this.urlHashMap["BalanceTest_MDL:88"] = "BalanceTest_MDL.c:145,287&BalanceTest_MDL.h:185&BalanceTest_MDL_data.c:91";
	/* <S1>/Step */
	this.urlHashMap["BalanceTest_MDL:97"] = "BalanceTest_MDL.c:115,132&BalanceTest_MDL.h:131,170,173&BalanceTest_MDL_data.c:37,76,79";
	/* <S1>/Sum */
	this.urlHashMap["BalanceTest_MDL:90"] = "BalanceTest_MDL.c:144";
	/* <S1>/Ta_Gain */
	this.urlHashMap["BalanceTest_MDL:89"] = "BalanceTest_MDL.c:140&BalanceTest_MDL.h:130&BalanceTest_MDL_data.c:36";
	/* <S1>/alpha_Gain */
	this.urlHashMap["BalanceTest_MDL:91"] = "BalanceTest_MDL.c:141&BalanceTest_MDL.h:135&BalanceTest_MDL_data.c:41";
	/* <S1>/alpha_comp_Gain */
	this.urlHashMap["BalanceTest_MDL:92"] = "BalanceTest_MDL.c:142&BalanceTest_MDL.h:136&BalanceTest_MDL_data.c:42";
	/* <S1>/first_run_select */
	this.urlHashMap["BalanceTest_MDL:96"] = "BalanceTest_MDL.c:139,156&BalanceTest_MDL.h:84,188&BalanceTest_MDL_data.c:94";
	/* <S2>/Compare */
	this.urlHashMap["BalanceTest_MDL:115:2"] = "BalanceTest_MDL.c:178&BalanceTest_MDL.h:95";
	/* <S2>/Constant */
	this.urlHashMap["BalanceTest_MDL:115:3"] = "BalanceTest_MDL.c:180&BalanceTest_MDL.h:139&BalanceTest_MDL_data.c:45";
	/* <S3>/Gain */
	this.urlHashMap["BalanceTest_MDL:72"] = "BalanceTest_MDL.c:91&BalanceTest_MDL.h:164&BalanceTest_MDL_data.c:70";
	/* <S3>/SensorAlpha */
	this.urlHashMap["BalanceTest_MDL:66"] = "BalanceTest_MDL.c:92&BalanceTest_MDL.h:143,148&BalanceTest_MDL_data.c:49,54";
	/* <S3>/SensorAlpha1 */
	this.urlHashMap["BalanceTest_MDL:67"] = "BalanceTest_MDL.c:93&BalanceTest_MDL.h:144,149&BalanceTest_MDL_data.c:50,55";
	/* <S3>/Trigonometric
Function */
	this.urlHashMap["BalanceTest_MDL:71"] = "BalanceTest_MDL.c:102";
	/* <S3>/estimate_offset */
	this.urlHashMap["BalanceTest_MDL:78"] = "BalanceTest_MDL.c:86&BalanceTest_MDL.h:167&BalanceTest_MDL_data.c:73";
	/* <S3>/offset_Add */
	this.urlHashMap["BalanceTest_MDL:77"] = "BalanceTest_MDL.c:83&BalanceTest_MDL.h:82";
	/* <S3>/x_dd_Add */
	this.urlHashMap["BalanceTest_MDL:68"] = "BalanceTest_MDL.c:98";
	/* <S3>/y_dd__Add */
	this.urlHashMap["BalanceTest_MDL:69"] = "BalanceTest_MDL.c:99";
	/* <S4>/half */
	this.urlHashMap["BalanceTest_MDL:99"] = "BalanceTest_MDL.c:118&BalanceTest_MDL.h:83,182&BalanceTest_MDL_data.c:88";
	/* <S4>/w_Add */
	this.urlHashMap["BalanceTest_MDL:86"] = "BalanceTest_MDL.c:123";
	/* <S5>/Sum */
	this.urlHashMap["BalanceTest_MDL:105"] = "BalanceTest_MDL.c:162&BalanceTest_MDL.h:85";
	/* <S5>/adc_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:106"] = "BalanceTest_MDL.c:164&BalanceTest_MDL.h:212&BalanceTest_MDL_data.c:118";
	/* <S5>/adc_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:107"] = "BalanceTest_MDL.c:163&BalanceTest_MDL.h:191&BalanceTest_MDL_data.c:97";
	/* <S6>/Sum */
	this.urlHashMap["BalanceTest_MDL:42"] = "BalanceTest_MDL.c:124";
	/* <S6>/w1_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:43"] = "BalanceTest_MDL.c:121&BalanceTest_MDL.h:206&BalanceTest_MDL_data.c:112";
	/* <S6>/w1_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:44"] = "BalanceTest_MDL.c:119&BalanceTest_MDL.h:176&BalanceTest_MDL_data.c:82";
	/* <S7>/Sum */
	this.urlHashMap["BalanceTest_MDL:26"] = "BalanceTest_MDL.c:125";
	/* <S7>/w2_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:7"] = "BalanceTest_MDL.c:122&BalanceTest_MDL.h:209&BalanceTest_MDL_data.c:115";
	/* <S7>/w2_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:27"] = "BalanceTest_MDL.c:120&BalanceTest_MDL.h:179&BalanceTest_MDL_data.c:85";
	/* <S8>/Sum */
	this.urlHashMap["BalanceTest_MDL:54"] = "BalanceTest_MDL.c:100";
	/* <S8>/x1_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:55"] = "BalanceTest_MDL.c:94&BalanceTest_MDL.h:200&BalanceTest_MDL_data.c:106";
	/* <S8>/x1_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:56"] = "BalanceTest_MDL.c:87&BalanceTest_MDL.h:158&BalanceTest_MDL_data.c:64";
	/* <S9>/Sum */
	this.urlHashMap["BalanceTest_MDL:36"] = "BalanceTest_MDL.c:101";
	/* <S9>/x2_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:37"] = "BalanceTest_MDL.c:95&BalanceTest_MDL.h:203&BalanceTest_MDL_data.c:109";
	/* <S9>/x2_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:38"] = "BalanceTest_MDL.c:88&BalanceTest_MDL.h:161&BalanceTest_MDL_data.c:67";
	/* <S10>/Sum */
	this.urlHashMap["BalanceTest_MDL:48"] = "BalanceTest_MDL.c:96";
	/* <S10>/y1_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:49"] = "BalanceTest_MDL.c:89&BalanceTest_MDL.h:194&BalanceTest_MDL_data.c:100";
	/* <S10>/y1_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:50"] = "BalanceTest_MDL.c:84&BalanceTest_MDL.h:152&BalanceTest_MDL_data.c:58";
	/* <S11>/Sum */
	this.urlHashMap["BalanceTest_MDL:30"] = "BalanceTest_MDL.c:97";
	/* <S11>/y2_poly_p1 */
	this.urlHashMap["BalanceTest_MDL:31"] = "BalanceTest_MDL.c:90&BalanceTest_MDL.h:197&BalanceTest_MDL_data.c:103";
	/* <S11>/y2_poly_p2 */
	this.urlHashMap["BalanceTest_MDL:32"] = "BalanceTest_MDL.c:85&BalanceTest_MDL.h:155&BalanceTest_MDL_data.c:61";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "BalanceTest_MDL"};
	this.sidHashMap["BalanceTest_MDL"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "BalanceTest_MDL:79"};
	this.sidHashMap["BalanceTest_MDL:79"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "BalanceTest_MDL:115"};
	this.sidHashMap["BalanceTest_MDL:115"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "BalanceTest_MDL:58"};
	this.sidHashMap["BalanceTest_MDL:58"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "BalanceTest_MDL:82"};
	this.sidHashMap["BalanceTest_MDL:82"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "BalanceTest_MDL:103"};
	this.sidHashMap["BalanceTest_MDL:103"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "BalanceTest_MDL:40"};
	this.sidHashMap["BalanceTest_MDL:40"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "BalanceTest_MDL:17"};
	this.sidHashMap["BalanceTest_MDL:17"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "BalanceTest_MDL:52"};
	this.sidHashMap["BalanceTest_MDL:52"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "BalanceTest_MDL:34"};
	this.sidHashMap["BalanceTest_MDL:34"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<S10>"] = {sid: "BalanceTest_MDL:46"};
	this.sidHashMap["BalanceTest_MDL:46"] = {rtwname: "<S10>"};
	this.rtwnameHashMap["<S11>"] = {sid: "BalanceTest_MDL:28"};
	this.sidHashMap["BalanceTest_MDL:28"] = {rtwname: "<S11>"};
	this.rtwnameHashMap["<Root>/Abs"] = {sid: "BalanceTest_MDL:114"};
	this.sidHashMap["BalanceTest_MDL:114"] = {rtwname: "<Root>/Abs"};
	this.rtwnameHashMap["<Root>/ComplementaryFilter"] = {sid: "BalanceTest_MDL:79"};
	this.sidHashMap["BalanceTest_MDL:79"] = {rtwname: "<Root>/ComplementaryFilter"};
	this.rtwnameHashMap["<Root>/EnableCheck"] = {sid: "BalanceTest_MDL:115"};
	this.sidHashMap["BalanceTest_MDL:115"] = {rtwname: "<Root>/EnableCheck"};
	this.rtwnameHashMap["<Root>/K_Phi"] = {sid: "BalanceTest_MDL:109"};
	this.sidHashMap["BalanceTest_MDL:109"] = {rtwname: "<Root>/K_Phi"};
	this.rtwnameHashMap["<Root>/K_u_K"] = {sid: "BalanceTest_MDL:110"};
	this.sidHashMap["BalanceTest_MDL:110"] = {rtwname: "<Root>/K_u_K"};
	this.rtwnameHashMap["<Root>/K_u_R"] = {sid: "BalanceTest_MDL:111"};
	this.sidHashMap["BalanceTest_MDL:111"] = {rtwname: "<Root>/K_u_R"};
	this.rtwnameHashMap["<Root>/MS-Cube-ADC"] = {sid: "BalanceTest_MDL:102"};
	this.sidHashMap["BalanceTest_MDL:102"] = {rtwname: "<Root>/MS-Cube-ADC"};
	this.rtwnameHashMap["<Root>/MS-Cube-Motor"] = {sid: "BalanceTest_MDL:113"};
	this.sidHashMap["BalanceTest_MDL:113"] = {rtwname: "<Root>/MS-Cube-Motor"};
	this.rtwnameHashMap["<Root>/MS-Cube-Sensors"] = {sid: "BalanceTest_MDL:1"};
	this.sidHashMap["BalanceTest_MDL:1"] = {rtwname: "<Root>/MS-Cube-Sensors"};
	this.rtwnameHashMap["<Root>/PhiEstimate"] = {sid: "BalanceTest_MDL:58"};
	this.sidHashMap["BalanceTest_MDL:58"] = {rtwname: "<Root>/PhiEstimate"};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "BalanceTest_MDL:117"};
	this.sidHashMap["BalanceTest_MDL:117"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Sum"] = {sid: "BalanceTest_MDL:112"};
	this.sidHashMap["BalanceTest_MDL:112"] = {rtwname: "<Root>/Sum"};
	this.rtwnameHashMap["<Root>/WAverage"] = {sid: "BalanceTest_MDL:82"};
	this.sidHashMap["BalanceTest_MDL:82"] = {rtwname: "<Root>/WAverage"};
	this.rtwnameHashMap["<Root>/adc_Calibration"] = {sid: "BalanceTest_MDL:103"};
	this.sidHashMap["BalanceTest_MDL:103"] = {rtwname: "<Root>/adc_Calibration"};
	this.rtwnameHashMap["<Root>/phi_Scope"] = {sid: "BalanceTest_MDL:101"};
	this.sidHashMap["BalanceTest_MDL:101"] = {rtwname: "<Root>/phi_Scope"};
	this.rtwnameHashMap["<Root>/torque_Scope"] = {sid: "BalanceTest_MDL:116"};
	this.sidHashMap["BalanceTest_MDL:116"] = {rtwname: "<Root>/torque_Scope"};
	this.rtwnameHashMap["<Root>/u_K_Scope"] = {sid: "BalanceTest_MDL:119"};
	this.sidHashMap["BalanceTest_MDL:119"] = {rtwname: "<Root>/u_K_Scope"};
	this.rtwnameHashMap["<Root>/u_R_Scope"] = {sid: "BalanceTest_MDL:118"};
	this.sidHashMap["BalanceTest_MDL:118"] = {rtwname: "<Root>/u_R_Scope"};
	this.rtwnameHashMap["<Root>/w1_Calibration"] = {sid: "BalanceTest_MDL:40"};
	this.sidHashMap["BalanceTest_MDL:40"] = {rtwname: "<Root>/w1_Calibration"};
	this.rtwnameHashMap["<Root>/w2_Calibration"] = {sid: "BalanceTest_MDL:17"};
	this.sidHashMap["BalanceTest_MDL:17"] = {rtwname: "<Root>/w2_Calibration"};
	this.rtwnameHashMap["<Root>/x1_Calibration"] = {sid: "BalanceTest_MDL:52"};
	this.sidHashMap["BalanceTest_MDL:52"] = {rtwname: "<Root>/x1_Calibration"};
	this.rtwnameHashMap["<Root>/x2_Calibration"] = {sid: "BalanceTest_MDL:34"};
	this.sidHashMap["BalanceTest_MDL:34"] = {rtwname: "<Root>/x2_Calibration"};
	this.rtwnameHashMap["<Root>/y1_Calibration"] = {sid: "BalanceTest_MDL:46"};
	this.sidHashMap["BalanceTest_MDL:46"] = {rtwname: "<Root>/y1_Calibration"};
	this.rtwnameHashMap["<Root>/y2_Calibration"] = {sid: "BalanceTest_MDL:28"};
	this.sidHashMap["BalanceTest_MDL:28"] = {rtwname: "<Root>/y2_Calibration"};
	this.rtwnameHashMap["<S1>/phi_A__IN"] = {sid: "BalanceTest_MDL:80"};
	this.sidHashMap["BalanceTest_MDL:80"] = {rtwname: "<S1>/phi_A__IN"};
	this.rtwnameHashMap["<S1>/w__IN"] = {sid: "BalanceTest_MDL:87"};
	this.sidHashMap["BalanceTest_MDL:87"] = {rtwname: "<S1>/w__IN"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "BalanceTest_MDL:94"};
	this.sidHashMap["BalanceTest_MDL:94"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/CompDelay"] = {sid: "BalanceTest_MDL:88"};
	this.sidHashMap["BalanceTest_MDL:88"] = {rtwname: "<S1>/CompDelay"};
	this.rtwnameHashMap["<S1>/Step"] = {sid: "BalanceTest_MDL:97"};
	this.sidHashMap["BalanceTest_MDL:97"] = {rtwname: "<S1>/Step"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "BalanceTest_MDL:90"};
	this.sidHashMap["BalanceTest_MDL:90"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/Ta_Gain"] = {sid: "BalanceTest_MDL:89"};
	this.sidHashMap["BalanceTest_MDL:89"] = {rtwname: "<S1>/Ta_Gain"};
	this.rtwnameHashMap["<S1>/alpha_Gain"] = {sid: "BalanceTest_MDL:91"};
	this.sidHashMap["BalanceTest_MDL:91"] = {rtwname: "<S1>/alpha_Gain"};
	this.rtwnameHashMap["<S1>/alpha_comp_Gain"] = {sid: "BalanceTest_MDL:92"};
	this.sidHashMap["BalanceTest_MDL:92"] = {rtwname: "<S1>/alpha_comp_Gain"};
	this.rtwnameHashMap["<S1>/first_run_select"] = {sid: "BalanceTest_MDL:96"};
	this.sidHashMap["BalanceTest_MDL:96"] = {rtwname: "<S1>/first_run_select"};
	this.rtwnameHashMap["<S1>/phi_C__OUT"] = {sid: "BalanceTest_MDL:81"};
	this.sidHashMap["BalanceTest_MDL:81"] = {rtwname: "<S1>/phi_C__OUT"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "BalanceTest_MDL:115:1"};
	this.sidHashMap["BalanceTest_MDL:115:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "BalanceTest_MDL:115:2"};
	this.sidHashMap["BalanceTest_MDL:115:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "BalanceTest_MDL:115:3"};
	this.sidHashMap["BalanceTest_MDL:115:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "BalanceTest_MDL:115:4"};
	this.sidHashMap["BalanceTest_MDL:115:4"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/x1_dd__IN"] = {sid: "BalanceTest_MDL:59"};
	this.sidHashMap["BalanceTest_MDL:59"] = {rtwname: "<S3>/x1_dd__IN"};
	this.rtwnameHashMap["<S3>/y1_d__IN"] = {sid: "BalanceTest_MDL:62"};
	this.sidHashMap["BalanceTest_MDL:62"] = {rtwname: "<S3>/y1_d__IN"};
	this.rtwnameHashMap["<S3>/x2_dd__IN"] = {sid: "BalanceTest_MDL:63"};
	this.sidHashMap["BalanceTest_MDL:63"] = {rtwname: "<S3>/x2_dd__IN"};
	this.rtwnameHashMap["<S3>/y2_dd__IN"] = {sid: "BalanceTest_MDL:64"};
	this.sidHashMap["BalanceTest_MDL:64"] = {rtwname: "<S3>/y2_dd__IN"};
	this.rtwnameHashMap["<S3>/Gain"] = {sid: "BalanceTest_MDL:72"};
	this.sidHashMap["BalanceTest_MDL:72"] = {rtwname: "<S3>/Gain"};
	this.rtwnameHashMap["<S3>/SensorAlpha"] = {sid: "BalanceTest_MDL:66"};
	this.sidHashMap["BalanceTest_MDL:66"] = {rtwname: "<S3>/SensorAlpha"};
	this.rtwnameHashMap["<S3>/SensorAlpha1"] = {sid: "BalanceTest_MDL:67"};
	this.sidHashMap["BalanceTest_MDL:67"] = {rtwname: "<S3>/SensorAlpha1"};
	this.rtwnameHashMap["<S3>/Trigonometric Function"] = {sid: "BalanceTest_MDL:71"};
	this.sidHashMap["BalanceTest_MDL:71"] = {rtwname: "<S3>/Trigonometric Function"};
	this.rtwnameHashMap["<S3>/estimate_offset"] = {sid: "BalanceTest_MDL:78"};
	this.sidHashMap["BalanceTest_MDL:78"] = {rtwname: "<S3>/estimate_offset"};
	this.rtwnameHashMap["<S3>/offset_Add"] = {sid: "BalanceTest_MDL:77"};
	this.sidHashMap["BalanceTest_MDL:77"] = {rtwname: "<S3>/offset_Add"};
	this.rtwnameHashMap["<S3>/x_dd_Add"] = {sid: "BalanceTest_MDL:68"};
	this.sidHashMap["BalanceTest_MDL:68"] = {rtwname: "<S3>/x_dd_Add"};
	this.rtwnameHashMap["<S3>/y_dd__Add"] = {sid: "BalanceTest_MDL:69"};
	this.sidHashMap["BalanceTest_MDL:69"] = {rtwname: "<S3>/y_dd__Add"};
	this.rtwnameHashMap["<S3>/phi_A__OUT"] = {sid: "BalanceTest_MDL:60"};
	this.sidHashMap["BalanceTest_MDL:60"] = {rtwname: "<S3>/phi_A__OUT"};
	this.rtwnameHashMap["<S4>/w1__IN"] = {sid: "BalanceTest_MDL:83"};
	this.sidHashMap["BalanceTest_MDL:83"] = {rtwname: "<S4>/w1__IN"};
	this.rtwnameHashMap["<S4>/w2__IN"] = {sid: "BalanceTest_MDL:85"};
	this.sidHashMap["BalanceTest_MDL:85"] = {rtwname: "<S4>/w2__IN"};
	this.rtwnameHashMap["<S4>/half"] = {sid: "BalanceTest_MDL:99"};
	this.sidHashMap["BalanceTest_MDL:99"] = {rtwname: "<S4>/half"};
	this.rtwnameHashMap["<S4>/w_Add"] = {sid: "BalanceTest_MDL:86"};
	this.sidHashMap["BalanceTest_MDL:86"] = {rtwname: "<S4>/w_Add"};
	this.rtwnameHashMap["<S4>/w__OUT"] = {sid: "BalanceTest_MDL:84"};
	this.sidHashMap["BalanceTest_MDL:84"] = {rtwname: "<S4>/w__OUT"};
	this.rtwnameHashMap["<S5>/adc_raw__IN"] = {sid: "BalanceTest_MDL:104"};
	this.sidHashMap["BalanceTest_MDL:104"] = {rtwname: "<S5>/adc_raw__IN"};
	this.rtwnameHashMap["<S5>/Sum"] = {sid: "BalanceTest_MDL:105"};
	this.sidHashMap["BalanceTest_MDL:105"] = {rtwname: "<S5>/Sum"};
	this.rtwnameHashMap["<S5>/adc_poly_p1"] = {sid: "BalanceTest_MDL:106"};
	this.sidHashMap["BalanceTest_MDL:106"] = {rtwname: "<S5>/adc_poly_p1"};
	this.rtwnameHashMap["<S5>/adc_poly_p2"] = {sid: "BalanceTest_MDL:107"};
	this.sidHashMap["BalanceTest_MDL:107"] = {rtwname: "<S5>/adc_poly_p2"};
	this.rtwnameHashMap["<S5>/w_R__OUT"] = {sid: "BalanceTest_MDL:108"};
	this.sidHashMap["BalanceTest_MDL:108"] = {rtwname: "<S5>/w_R__OUT"};
	this.rtwnameHashMap["<S6>/w1_raw__IN"] = {sid: "BalanceTest_MDL:41"};
	this.sidHashMap["BalanceTest_MDL:41"] = {rtwname: "<S6>/w1_raw__IN"};
	this.rtwnameHashMap["<S6>/Sum"] = {sid: "BalanceTest_MDL:42"};
	this.sidHashMap["BalanceTest_MDL:42"] = {rtwname: "<S6>/Sum"};
	this.rtwnameHashMap["<S6>/w1_poly_p1"] = {sid: "BalanceTest_MDL:43"};
	this.sidHashMap["BalanceTest_MDL:43"] = {rtwname: "<S6>/w1_poly_p1"};
	this.rtwnameHashMap["<S6>/w1_poly_p2"] = {sid: "BalanceTest_MDL:44"};
	this.sidHashMap["BalanceTest_MDL:44"] = {rtwname: "<S6>/w1_poly_p2"};
	this.rtwnameHashMap["<S6>/w1__OUT"] = {sid: "BalanceTest_MDL:45"};
	this.sidHashMap["BalanceTest_MDL:45"] = {rtwname: "<S6>/w1__OUT"};
	this.rtwnameHashMap["<S7>/w2_raw__IN"] = {sid: "BalanceTest_MDL:18"};
	this.sidHashMap["BalanceTest_MDL:18"] = {rtwname: "<S7>/w2_raw__IN"};
	this.rtwnameHashMap["<S7>/Sum"] = {sid: "BalanceTest_MDL:26"};
	this.sidHashMap["BalanceTest_MDL:26"] = {rtwname: "<S7>/Sum"};
	this.rtwnameHashMap["<S7>/w2_poly_p1"] = {sid: "BalanceTest_MDL:7"};
	this.sidHashMap["BalanceTest_MDL:7"] = {rtwname: "<S7>/w2_poly_p1"};
	this.rtwnameHashMap["<S7>/w2_poly_p2"] = {sid: "BalanceTest_MDL:27"};
	this.sidHashMap["BalanceTest_MDL:27"] = {rtwname: "<S7>/w2_poly_p2"};
	this.rtwnameHashMap["<S7>/w2__OUT"] = {sid: "BalanceTest_MDL:19"};
	this.sidHashMap["BalanceTest_MDL:19"] = {rtwname: "<S7>/w2__OUT"};
	this.rtwnameHashMap["<S8>/x1_raw__IN"] = {sid: "BalanceTest_MDL:53"};
	this.sidHashMap["BalanceTest_MDL:53"] = {rtwname: "<S8>/x1_raw__IN"};
	this.rtwnameHashMap["<S8>/Sum"] = {sid: "BalanceTest_MDL:54"};
	this.sidHashMap["BalanceTest_MDL:54"] = {rtwname: "<S8>/Sum"};
	this.rtwnameHashMap["<S8>/x1_poly_p1"] = {sid: "BalanceTest_MDL:55"};
	this.sidHashMap["BalanceTest_MDL:55"] = {rtwname: "<S8>/x1_poly_p1"};
	this.rtwnameHashMap["<S8>/x1_poly_p2"] = {sid: "BalanceTest_MDL:56"};
	this.sidHashMap["BalanceTest_MDL:56"] = {rtwname: "<S8>/x1_poly_p2"};
	this.rtwnameHashMap["<S8>/x1__OUT"] = {sid: "BalanceTest_MDL:57"};
	this.sidHashMap["BalanceTest_MDL:57"] = {rtwname: "<S8>/x1__OUT"};
	this.rtwnameHashMap["<S9>/x2_raw__IN"] = {sid: "BalanceTest_MDL:35"};
	this.sidHashMap["BalanceTest_MDL:35"] = {rtwname: "<S9>/x2_raw__IN"};
	this.rtwnameHashMap["<S9>/Sum"] = {sid: "BalanceTest_MDL:36"};
	this.sidHashMap["BalanceTest_MDL:36"] = {rtwname: "<S9>/Sum"};
	this.rtwnameHashMap["<S9>/x2_poly_p1"] = {sid: "BalanceTest_MDL:37"};
	this.sidHashMap["BalanceTest_MDL:37"] = {rtwname: "<S9>/x2_poly_p1"};
	this.rtwnameHashMap["<S9>/x2_poly_p2"] = {sid: "BalanceTest_MDL:38"};
	this.sidHashMap["BalanceTest_MDL:38"] = {rtwname: "<S9>/x2_poly_p2"};
	this.rtwnameHashMap["<S9>/x2__OUT"] = {sid: "BalanceTest_MDL:39"};
	this.sidHashMap["BalanceTest_MDL:39"] = {rtwname: "<S9>/x2__OUT"};
	this.rtwnameHashMap["<S10>/y1_raw__IN"] = {sid: "BalanceTest_MDL:47"};
	this.sidHashMap["BalanceTest_MDL:47"] = {rtwname: "<S10>/y1_raw__IN"};
	this.rtwnameHashMap["<S10>/Sum"] = {sid: "BalanceTest_MDL:48"};
	this.sidHashMap["BalanceTest_MDL:48"] = {rtwname: "<S10>/Sum"};
	this.rtwnameHashMap["<S10>/y1_poly_p1"] = {sid: "BalanceTest_MDL:49"};
	this.sidHashMap["BalanceTest_MDL:49"] = {rtwname: "<S10>/y1_poly_p1"};
	this.rtwnameHashMap["<S10>/y1_poly_p2"] = {sid: "BalanceTest_MDL:50"};
	this.sidHashMap["BalanceTest_MDL:50"] = {rtwname: "<S10>/y1_poly_p2"};
	this.rtwnameHashMap["<S10>/y1__OUT"] = {sid: "BalanceTest_MDL:51"};
	this.sidHashMap["BalanceTest_MDL:51"] = {rtwname: "<S10>/y1__OUT"};
	this.rtwnameHashMap["<S11>/y2_raw__IN"] = {sid: "BalanceTest_MDL:29"};
	this.sidHashMap["BalanceTest_MDL:29"] = {rtwname: "<S11>/y2_raw__IN"};
	this.rtwnameHashMap["<S11>/Sum"] = {sid: "BalanceTest_MDL:30"};
	this.sidHashMap["BalanceTest_MDL:30"] = {rtwname: "<S11>/Sum"};
	this.rtwnameHashMap["<S11>/y2_poly_p1"] = {sid: "BalanceTest_MDL:31"};
	this.sidHashMap["BalanceTest_MDL:31"] = {rtwname: "<S11>/y2_poly_p1"};
	this.rtwnameHashMap["<S11>/y2_poly_p2"] = {sid: "BalanceTest_MDL:32"};
	this.sidHashMap["BalanceTest_MDL:32"] = {rtwname: "<S11>/y2_poly_p2"};
	this.rtwnameHashMap["<S11>/y2__OUT"] = {sid: "BalanceTest_MDL:33"};
	this.sidHashMap["BalanceTest_MDL:33"] = {rtwname: "<S11>/y2__OUT"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
