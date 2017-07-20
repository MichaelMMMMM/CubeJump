function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/MS-Cube-Sensors */
	this.urlHashMap["SensorCalibration_MDL:1"] = "SensorCalibration_MDL.c:38&SensorCalibration_MDL.h:78,79,80,81,82,83";
	/* <Root>/SensorScope */
	this.urlHashMap["SensorCalibration_MDL:2"] = "SensorCalibration_MDL.h:90";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SensorCalibration_MDL"};
	this.sidHashMap["SensorCalibration_MDL"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/MS-Cube-Sensors"] = {sid: "SensorCalibration_MDL:1"};
	this.sidHashMap["SensorCalibration_MDL:1"] = {rtwname: "<Root>/MS-Cube-Sensors"};
	this.rtwnameHashMap["<Root>/SensorScope"] = {sid: "SensorCalibration_MDL:2"};
	this.sidHashMap["SensorCalibration_MDL:2"] = {rtwname: "<Root>/SensorScope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
