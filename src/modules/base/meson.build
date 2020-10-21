src_modules_base_lib = static_library(
  'src_modules_base_lib',
  sources: files(
    'ff.cc',
    'modules.cc',
    'module_support.cc',
    'parameters.cc',
    'phrasify.cc',
    'phrinfo.cc',
    'pos.cc',
    'postlex.cc',
    'word.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_modules_base_lib

