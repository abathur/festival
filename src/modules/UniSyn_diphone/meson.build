src_modules_UniSyn_diphone_lib = static_library(
  'src_modules_UniSyn_diphone_lib',
  sources: files(
    'UniSyn_diphone.cc',
    'us_diphone_unit.cc',
    'us_diphone_index.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_UniSyn_diphone_lib

