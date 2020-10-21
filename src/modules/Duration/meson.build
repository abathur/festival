src_modules_Duration_lib = static_library(
  'src_modules_Duration_lib',
  sources: files(
    'dur_aux.cc',
    'duration.cc',
    'Klatt.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_modules_Duration_lib

