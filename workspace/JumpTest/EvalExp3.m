%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 19.07.2017
%-------------------------------------------------------------------------%
% Evaluate Experiment 3
%-------------------------------------------------------------------------%

phi_cell = cell(3,1);
t_cell   = cell(3,1);
tm_cell  = cell(3,1);
uk_cell  = cell(3,1);
ur_cell  = cell(3,1);

load('Exp3Data_205_Run1.mat');
phi      = PhiData.signals(1).values;
t        = PhiData.time;
uk       = uKData.signals(1).values;
ur       = uRData.signals(1).values;
tm       = TorqueData.signals(1).values;
load('Exp3Data_205_Run2.mat');
phi_cell{1} = [phi; PhiData.signals(1).values];
t_cell{1}   = [t; t(end)+PhiData.time];
uk_cell{1}  = [uk; uKData.signals(1).values];
ur_cell{1}  = [ur; uRData.signals(1).values];
tm_cell{1}  = [tm; TorqueData.signals(1).values];
load('Exp3Data_215_Run1.mat');
phi      = PhiData.signals(1).values;
t        = PhiData.time;
uk       = uKData.signals(1).values;
ur       = uRData.signals(1).values;
tm       = TorqueData.signals(1).values;
load('Exp3Data_215_Run2.mat');
phi_cell{2} = [phi; PhiData.signals(1).values];
t_cell{2}   = [t; t(end)+PhiData.time];
uk_cell{2}  = [uk; uKData.signals(1).values];
ur_cell{2}  = [ur; uRData.signals(1).values];
tm_cell{2}  = [tm; TorqueData.signals(1).values];
load('Exp3Data_225_Run1.mat');
phi      = PhiData.signals(1).values;
t        = PhiData.time;
uk       = uKData.signals(1).values;
ur       = uRData.signals(1).values;
tm       = TorqueData.signals(1).values;
load('Exp3Data_225_Run2.mat');
phi_cell{3} = [phi; PhiData.signals(1).values];
t_cell{3}   = [t; t(end)+PhiData.time];
uk_cell{3}  = [uk; uKData.signals(1).values];
ur_cell{3}  = [ur; uRData.signals(1).values];
tm_cell{3}  = [tm; TorqueData.signals(1).values];

close all;
velocity_cell = {'205', '215', '225'};
for n = 1:3
    figure;
    plot(t_cell{n}, phi_cell{n}); grid;
    emlXLabel('Zeit in Sekunden'); emlYLabel('$\varphi$ in Radiant');
    emlTitle(horzcat('Experiment 3: Verlauf von $\varphi$ bei $\tilde{\omega}=',...
                     velocity_cell{n}, '$'));

    figure;
    plot(t_cell{n}, uk_cell{n}); grid;
    emlXLabel('Zeit in Sekunden'); emlYLabel('$u_K$ in Radiant pro Sekunde');
    emlTitle(horzcat('Experiment 3: Verlauf von $u_K$ bei $\tilde{\omega}=',...
                     velocity_cell{n}, '$'));
                 
    figure;
    plot(t_cell{n}, ur_cell{n}); grid;
    emlXLabel('Zeit in Sekunden'); emlYLabel('$u_R$ in Radiant pro Sekunde');
    emlTitle(horzcat('Experiment 3: Verlauf von $u_R$ bei $\tilde{\omega}=',...
                     velocity_cell{n}, '$'));

    figure;
    plot(t_cell{n}, tm_cell{n}); grid;
    emlXLabel('Zeit in Sekunden'); emlYLabel('$T_M$ in Newtonmeter');
    emlTitle(horzcat('Experiment 3: Verlauf von $T_M$ bei $\tilde{\omega}=',...
                     velocity_cell{n}, '$'));
end