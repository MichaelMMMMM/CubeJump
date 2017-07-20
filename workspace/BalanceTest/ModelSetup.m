%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 19.07.2017
%-------------------------------------------------------------------------%
% Initialize the variables for the model
%-------------------------------------------------------------------------%

load('SensorCalibrationPolynoms');
load('ADCPolynom');

Ta   = 0.02;

r_S1 = 0.14;
r_S2 = 0.061;

alpha_comp = 0.98;

K_phi = 2.42;
K_u_K = 0.3;
K_u_R = 0.0008;

phi_max = degtorad(10);