src_modules_Text_lib = static_library(
  'src_modules_Text_lib',
  sources: files(
    'text_modes.cc',
    'text_aux.cc',
    'token.cc',
    'text.cc',
    'tok_ext.cc',
    'token_pos.cc',
    'xxml.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_Text_lib

