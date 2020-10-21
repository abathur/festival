src_modules_rxp_lib = static_library(
  'src_modules_rxp_lib',
  sources: files(
    'ttsxml.cc'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: ['-DCHAR_SIZE=8'],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_rxp_lib

