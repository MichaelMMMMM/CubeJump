%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 20.07.2017
%-------------------------------------------------------------------------%
% Evaluation of Experiment 1
%-------------------------------------------------------------------------%

%load('Experiment1Data.mat');

t   = PhiData.time;
phi = PhiData.signals(1).values;
uK  = uKData.signals(1).values;
uR  = uRData.signals(1).values;
brake = BrakeData.signals(1).values;

emlFigure;
plot(t, phi); grid;
emlXLabel('Zeit in Sekunden');
emlYLabel('$\varphi$ in Radiant');
emlTitle('Verlauf von $\varphi$ in Experiment 1');

emlFigure;
plot(t, uK); grid;
emlXLabel('Zeit in Sekunden');
emlYLabel('$u_K$ in Radiant pro Sekunde');
emlTitle('Verlauf von $u_K$ in Experiment 1');

emlFigure;
plot(t, uR); grid;
emlXLabel('Zeit in Sekunden');
emlYLabel('$u_K$ in Radiant pro Sekunde');
emlTitle('Verlauf von $u_R$ in Experiment 1');