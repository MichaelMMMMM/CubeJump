%-------------------------------------------------------------------------%
% Author: Michael Meindl
% Date  : 21.07.2017
%-------------------------------------------------------------------------%
% Correlation of experiment data
%-------------------------------------------------------------------------%

load('Exp2_MaxPoints.mat');

E_a_cell = cell(5,1);
E_e_cell = cell(5,1);

for n = 1:5
    E_a_cell{n} = uk0_cell{n}.^2; 
end

E_e_cell{1} = -1*(1-cos(phi_cell{1}));
E_e_cell{2} = -1*(1-cos(phi_cell{2}));
E_e_cell{3} = -1*(1-cos(phi_cell{3}));
phi_E_tmp   = -1*(1-cos(phi_cell{4}));
uk_E_tmp    = uk_cell{4}.^2;
E_e_cell{4} = [phi_E_tmp(1:9);uk_E_tmp(10:12);phi_E_tmp(13);uk_E_tmp(14);phi_E_tmp(15:16);uk_E_tmp(17:19);phi_E_tmp(20)];
E_e_cell{5} = uk_cell{5}.^2;

E_corr_arr = zeros(5,1);
for n = 1:5
   E_corr_arr(n) = corr(E_a_cell{n}, E_e_cell{n}); 
end

unit_e_cell = cell(5,1);
unit_e_cell{1} = phi_cell{1};
unit_e_cell{2} = phi_cell{2};
unit_e_cell{3} = phi_cell{3};
phi = phi_cell{4};
uk  = 0.01*uk_cell{4};
unit_e_cell{4} = [phi(1:9);uk(10:12);phi(13);uk(14);phi(15:16);uk(17:19);phi(20)];
unit_e_cell{5} = uk_cell{5};

corr_arr = zeros(5,1);
for n = 1:5
    corr_arr(n) = corr(uk0_cell{n}, unit_e_cell{n});
end

u_corr_arr = zeros(5,1);
for n = 1:5
    u_corr_arr(n) = corr(ur0_cell{n}, uk0_cell{n});
end
