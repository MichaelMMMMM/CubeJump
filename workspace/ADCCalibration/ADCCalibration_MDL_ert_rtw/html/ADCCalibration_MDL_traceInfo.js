function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/ADCScope */
	this.urlHashMap["ADCCalibration_MDL:2"] = "ADCCalibration_MDL.h:85";
	/* <Root>/Enable */
	this.urlHashMap["ADCCalibration_MDL:5"] = "ADCCalibration_MDL.h:94&ADCCalibration_MDL_data.c:29";
	/* <Root>/MS-Cube-ADC */
	this.urlHashMap["ADCCalibration_MDL:1"] = "ADCCalibration_MDL.c:38&ADCCalibration_MDL.h:78";
	/* <Root>/MS-Cube-Motor */
	this.urlHashMap["ADCCalibration_MDL:3"] = "ADCCalibration_MDL.c:42";
	/* <Root>/RPM */
	this.urlHashMap["ADCCalibration_MDL:4"] = "ADCCalibration_MDL.h:91&ADCCalibration_MDL_data.c:26";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ADCCalibration_MDL"};
	this.sidHashMap["ADCCalibration_MDL"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/ADCScope"] = {sid: "ADCCalibration_MDL:2"};
	this.sidHashMap["ADCCalibration_MDL:2"] = {rtwname: "<Root>/ADCScope"};
	this.rtwnameHashMap["<Root>/Enable"] = {sid: "ADCCalibration_MDL:5"};
	this.sidHashMap["ADCCalibration_MDL:5"] = {rtwname: "<Root>/Enable"};
	this.rtwnameHashMap["<Root>/MS-Cube-ADC"] = {sid: "ADCCalibration_MDL:1"};
	this.sidHashMap["ADCCalibration_MDL:1"] = {rtwname: "<Root>/MS-Cube-ADC"};
	this.rtwnameHashMap["<Root>/MS-Cube-Motor"] = {sid: "ADCCalibration_MDL:3"};
	this.sidHashMap["ADCCalibration_MDL:3"] = {rtwname: "<Root>/MS-Cube-Motor"};
	this.rtwnameHashMap["<Root>/RPM"] = {sid: "ADCCalibration_MDL:4"};
	this.sidHashMap["ADCCalibration_MDL:4"] = {rtwname: "<Root>/RPM"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
