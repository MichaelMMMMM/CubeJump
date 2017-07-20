function CodeDefine() { 
this.def = new Array();
this.def["runModel"] = {file: "ert_main_c.html",line:34,type:"var"};
this.def["stopSem"] = {file: "ert_main_c.html",line:35,type:"var"};
this.def["baserateTaskSem"] = {file: "ert_main_c.html",line:36,type:"var"};
this.def["schedulerThread"] = {file: "ert_main_c.html",line:37,type:"var"};
this.def["baseRateThread"] = {file: "ert_main_c.html",line:38,type:"var"};
this.def["threadJoinStatus"] = {file: "ert_main_c.html",line:39,type:"var"};
this.def["terminatingmodel"] = {file: "ert_main_c.html",line:40,type:"var"};
this.def["baseRateTask"] = {file: "ert_main_c.html",line:41,type:"fcn"};
this.def["exitFcn"] = {file: "ert_main_c.html",line:86,type:"fcn"};
this.def["terminateTask"] = {file: "ert_main_c.html",line:92,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:113,type:"fcn"};
this.def["SensorCalibration_MDL_B"] = {file: "SensorCalibration_MDL_c.html",line:25,type:"var"};
this.def["SensorCalibration_MDL_DW"] = {file: "SensorCalibration_MDL_c.html",line:28,type:"var"};
this.def["SensorCalibration_MDL_M_"] = {file: "SensorCalibration_MDL_c.html",line:31,type:"var"};
this.def["SensorCalibration_MDL_M"] = {file: "SensorCalibration_MDL_c.html",line:32,type:"var"};
this.def["SensorCalibration_MDL_step"] = {file: "SensorCalibration_MDL_c.html",line:36,type:"fcn"};
this.def["SensorCalibration_MDL_initialize"] = {file: "SensorCalibration_MDL_c.html",line:77,type:"fcn"};
this.def["SensorCalibration_MDL_terminate"] = {file: "SensorCalibration_MDL_c.html",line:132,type:"fcn"};
this.def["B_SensorCalibration_MDL_T"] = {file: "SensorCalibration_MDL_h.html",line:84,type:"type"};
this.def["DW_SensorCalibration_MDL_T"] = {file: "SensorCalibration_MDL_h.html",line:91,type:"type"};
this.def["RT_MODEL_SensorCalibration_MD_T"] = {file: "SensorCalibration_MDL_types_h.html",line:24,type:"type"};
this.def["chunk_T"] = {file: "multiword_types_h.html",line:27,type:"type"};
this.def["uchunk_T"] = {file: "multiword_types_h.html",line:28,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:82,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:87,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:92,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:99,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:106,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:113,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:120,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:127,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:134,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:152,type:"type"};
this.def["rtDataTypeSizes"] = {file: "SensorCalibration_MDL_dt_h.html",line:23,type:"var"};
this.def["rtDataTypeNames"] = {file: "SensorCalibration_MDL_dt_h.html",line:41,type:"var"};
this.def["rtBTransitions"] = {file: "SensorCalibration_MDL_dt_h.html",line:59,type:"var"};
this.def["rtBTransTable"] = {file: "SensorCalibration_MDL_dt_h.html",line:68,type:"var"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["SensorCalibration_MDL_c.html"] = "../SensorCalibration_MDL.c";
	this.html2Root["SensorCalibration_MDL_c.html"] = "SensorCalibration_MDL_c.html";
	this.html2SrcPath["SensorCalibration_MDL_h.html"] = "../SensorCalibration_MDL.h";
	this.html2Root["SensorCalibration_MDL_h.html"] = "SensorCalibration_MDL_h.html";
	this.html2SrcPath["SensorCalibration_MDL_private_h.html"] = "../SensorCalibration_MDL_private.h";
	this.html2Root["SensorCalibration_MDL_private_h.html"] = "SensorCalibration_MDL_private_h.html";
	this.html2SrcPath["SensorCalibration_MDL_types_h.html"] = "../SensorCalibration_MDL_types.h";
	this.html2Root["SensorCalibration_MDL_types_h.html"] = "SensorCalibration_MDL_types_h.html";
	this.html2SrcPath["multiword_types_h.html"] = "../multiword_types.h";
	this.html2Root["multiword_types_h.html"] = "multiword_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["SensorCalibration_MDL_dt_h.html"] = "../SensorCalibration_MDL_dt.h";
	this.html2Root["SensorCalibration_MDL_dt_h.html"] = "SensorCalibration_MDL_dt_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_custom_RTOS_header_h.html"] = "../MW_custom_RTOS_header.h";
	this.html2Root["MW_custom_RTOS_header_h.html"] = "MW_custom_RTOS_header_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","SensorCalibration_MDL_c.html","SensorCalibration_MDL_h.html","SensorCalibration_MDL_private_h.html","SensorCalibration_MDL_types_h.html","multiword_types_h.html","rtwtypes_h.html","SensorCalibration_MDL_dt_h.html","rtmodel_h.html","MW_custom_RTOS_header_h.html","MW_target_hardware_resources_h.html"];
