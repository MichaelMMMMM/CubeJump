function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["ADCCalibration_MDL.c:43"]=1;
    this.lineTraceFlag["ADCCalibration_MDL.c:44"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
