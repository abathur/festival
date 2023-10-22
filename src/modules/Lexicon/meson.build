src_modules_Lexicon_lib = static_library(
  'src_modules_Lexicon_lib',
  sources: files(
    'lex_aux.cc',
    'lexicon.cc',
    'lts.cc',
    'lts_rules.cc',
    'lex_ff.cc',
    'complex.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_Lexicon_lib

