
lib_multisyn_phonesets = files('radio_phones_multisyn.scm')
lib_multisyn_general = files(
  'multisyn.scm',
  'multisyn_pauses.scm',
  'target_cost.scm'
)

lib_multisyn_others = files(
  'send_xwaves.scm'
)

install_data(
  [lib_multisyn_phonesets, lib_multisyn_general, lib_multisyn_others],
  install_dir : get_option('datadir') / meson.project_name() / 'multisyn'
)
