

Raw=strsplit(pwd,'\');
name=string(Raw(1,end));
Mdl_Name=string(extractAfter(name,3));
new_system(Mdl_Name);
open_system(Mdl_Name);
set_param(bdroot,"SolverType",'Fixed-step');
set_param(bdroot,"SolverName",'FixedStepDiscrete');
set_param(bdroot,"FixedStep",'0.01');
save_system(bdroot)