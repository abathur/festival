src_modules_parser_lib = static_library(
  'src_modules_parser_lib',
  sources: files(
    'pparser.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_parser_lib

