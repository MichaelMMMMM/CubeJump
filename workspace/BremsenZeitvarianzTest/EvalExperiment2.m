%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 20.07.2017
%-------------------------------------------------------------------------%
% Evaluate the results of experiment 2
%-------------------------------------------------------------------------%

close all;

timeCell = cell(5, 1);
phiCell  = cell(5, 1);
uKCell   = cell(5, 1);
uRCell   = cell(5, 1);

load('Exp2Data_100.mat');
timeCell{1} = PhiData.time;
phiCell{1}  = PhiData.signals(1).values;
uKCell{1}   = uKData.signals(1).values;
uRCell{1}   = uRData.signals(1).values;
load('Exp2Data_150.mat');
timeCell{2} = PhiData.time;
phiCell{2}  = PhiData.signals(1).values;
uKCell{2}   = uKData.signals(1).values;
uRCell{2}   = uRData.signals(1).values;
load('Exp2Data_200_Run1.mat');
t_tmp   = PhiData.time;
phi_tmp = PhiData.signals(1).values;
uk_tmp  = uKData.signals(1).values;
ur_tmp  = uRData.signals(1).values;
load('Exp2Data_200_Run2.mat');
timeCell{3} = [t_tmp; t_tmp(end) + PhiData.time];
phiCell{3}  = [phi_tmp; PhiData.signals(1).values];
uKCell{3}   = [uk_tmp; uKData.signals(1).values];
uRCell{3}   = [ur_tmp; uRData.signals(1).values];
load('Exp2Data_225_Run1.mat');
t_tmp   = PhiData.time;
phi_tmp = PhiData.signals(1).values;
uk_tmp  = uKData.signals(1).values;
ur_tmp  = uRData.signals(1).values;
load('Exp2Data_225_Run2.mat');
t_tmp   = [t_tmp; t_tmp(end) + PhiData.time];
phi_tmp = [phi_tmp; PhiData.signals(1).values]; 
uk_tmp  = [uk_tmp; uKData.signals(1).values];
ur_tmp  = [ur_tmp; uRData.signals(1).values];
load('Exp2Data_225_Run3.mat');
timeCell{4} = [t_tmp; t_tmp(end) + PhiData.time];
phiCell{4}  = [phi_tmp; PhiData.signals(1).values];
uKCell{4}   = [uk_tmp; uKData.signals(1).values];
uRCell{4}   = [ur_tmp; uRData.signals(1).values];
load('Exp2Data_250_Run1.mat');
t_tmp   = PhiData.time;
phi_tmp = PhiData.signals(1).values;
uk_tmp  = uKData.signals(1).values;
ur_tmp  = uRData.signals(1).values;
load('Exp2Data_250_Run2.mat');
timeCell{5} = [t_tmp; t_tmp(end) + PhiData.time];
phiCell{5}  = [phi_tmp; PhiData.signals(1).values];
uKCell{5}   = [uk_tmp; uKData.signals(1).values];
uRCell{5}   = [ur_tmp; uRData.signals(1).values];

jmp_velocity_cell = {100; 150; 200; 225; 250};

for n = 1:5
    figure;
    plot(timeCell{n}, phiCell{n}); grid;
    emlTitle(horzcat('$\varphi$ bei Sprungeschwindigkeit: ', num2str(jmp_velocity_cell{n})));
    emlXLabel('Zeit in Sekunden'); emlYLabel('$\varphi$ in Radiant');
    figure;
    plot(timeCell{n}, uKCell{n}); grid;
    emlTitle(horzcat('$u_K$ bei Sprunggeschwindigkeit: ', num2str(jmp_velocity_cell{n})));
    emlXLabel('Zeit in Sekunden'); emlYLabel('$u_K$ in Radiant pro Sekunde');
    figure;
    plot(timeCell{n}, uRCell{n}); grid;
    emlTitle(horzcat('$u_R$ bei Sprunggeschwindigkeit: ', num2str(jmp_velocity_cell{n})));
    emlXLabel('Zeit in Sekunden'); emlYLabel('$u_R$ in Radiant pro Sekunde');
end

