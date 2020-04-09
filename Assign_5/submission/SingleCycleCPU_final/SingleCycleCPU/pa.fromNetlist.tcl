
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name SingleCycleCPU -dir "/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU/planAhead_run_4" -part xc3s500efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/sundar/Desktop/comporg/a3.1/SingleCycleCPU} {ipcore_dir} }
add_files [list {ipcore_dir/icon0.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/vio0.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ila0.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_ila.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "clk.ucf" [current_fileset -constrset]
add_files [list {clk.ucf}] -fileset [get_property constrset [current_run]]
link_design
