src_modules_clunits_lib = static_library(
  'src_modules_clunits_lib',
  sources: files(
    'acost.cc',
    'clunits.cc',
    'cldb.cc',
    'cljoin.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs, include_directories('../UniSyn')]
)

libfestival_conv_libs += src_modules_clunits_lib

