%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 19.07.2017
%-------------------------------------------------------------------------%
% Calculate the polynom to calibrate the ADC Values
%-------------------------------------------------------------------------%

load('ADCCalibrationData.mat');

w_target = cell2mat(rpmCell)*2*pi/60;

adc = [mean(rpmData{1}.signals(1).values); mean(rpmData{2}.signals.values);...
       mean(rpmData{3}.signals(1).values); mean(rpmData{4}.signals.values);...
       mean(rpmData{5}.signals(1).values); mean(rpmData{6}.signals.values)];
   
adc_poly = fit(double(adc), w_target, 'poly1');

save('ADCPolynom.mat', 'adc_poly');