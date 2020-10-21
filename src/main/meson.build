
FESTIVAL = executable('festival',
  sources: 'festival_main.cc',
  install: true,
  dependencies: [festival_dep, speech_tools_dep]
)

FESTIVAL_CLIENT = executable('festival_client',
  sources: 'festival_client.cc',
  link_with: libfestival,
  install: true,
  include_directories: libfestival_include_dirs,
  dependencies: [festival_dep, speech_tools_dep]
)

audsp = executable('audsp',
  sources: 'audsp.cc',
  install: true,
  install_dir: FTLIBEXECDIR,
  include_directories: libfestival_include_dirs,
  dependencies: [speech_tools_dep]
)
