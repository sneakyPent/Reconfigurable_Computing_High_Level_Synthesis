# This file was automatically generated by SDx
# this creates all the ooc run objects without running them
launch_runs synth_1 -scripts_only
# rest all the synthesis runs
set runs [get_runs -filter {IS_SYNTHESIS == 1}]
foreach _run $runs {
  reset_run [get_runs $_run]
}