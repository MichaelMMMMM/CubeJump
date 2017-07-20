%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 19.07.2017
%-------------------------------------------------------------------------%
% Script to evaluate the calibration data, which is expected to be stored
% in a file called 'SensorCalibrationData.mat' and called 'SensorData'. The
% data is collected in 7 positions ranging from 45° to -45° in intervals of
% 15°.
%-------------------------------------------------------------------------%

load('SensorCalibrationData.mat');

x1__dd = zeros(7,1);
y1__dd = zeros(7,1);
w1     = zeros(7,1);
x2__dd = zeros(7,1);
y2__dd = zeros(7,1);
w2     = zeros(7,1);

for n = 1:7
    x1__dd(n) = mean(DataCell{n}.signals(1).values);
    y1__dd(n) = mean(DataCell{n}.signals(2).values);
    w1(n)     = mean(DataCell{n}.signals(3).values);
    x2__dd(n) = mean(DataCell{n}.signals(4).values);
    y2__dd(n) = mean(DataCell{n}.signals(5).values);
    w2(n)     = mean(DataCell{n}.signals(6).values);
end

g = 9.81;
x_target = g*sind(cell2mat(DegreeCell));
y_target = g*cosd(cell2mat(DegreeCell));

x1_poly = fit(x1__dd, x_target, 'poly1');
y1_poly = fit(y1__dd, y_target, 'poly1');
x2_poly = fit(x2__dd, x_target, 'poly1');
y2_poly = fit(y2__dd, y_target, 'poly1');

w1_off  = -mean(w1);
w2_off  = -mean(w2);
%w_fac   = degtorad(2000)/2^16;
w_fac   = 0.001064724;

w1_poly = x1_poly;
w1_poly.p1 = w_fac;
w1_poly.p2 = w1_off*w_fac;

w2_poly = x1_poly;
w2_poly.p1 = w_fac;
w2_poly.p2 = w2_off*w_fac;

save('SensorCalibrationPolynoms.mat',...
     'x1_poly', 'x2_poly', 'y1_poly',...
     'y2_poly', 'w1_poly', 'w2_poly');
