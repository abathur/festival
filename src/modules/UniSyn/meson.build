src_modules_UniSyn_lib = static_library(
  'src_modules_UniSyn_lib',
  sources: files(
    'UniSyn.cc',
    'us_prosody.cc',
    'us_unit.cc',
    'ps_synthesis.cc',
    'us_mapping.cc',
    'us_features.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_UniSyn_lib

