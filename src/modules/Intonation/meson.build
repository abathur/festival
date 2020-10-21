src_modules_Intonation_lib = static_library(
  'src_modules_Intonation_lib',
  sources: files(
    'int_aux.cc',
    'duffint.cc',
    'simple.cc',
    'gen_int.cc',
    'int_tree.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_modules_Intonation_lib

