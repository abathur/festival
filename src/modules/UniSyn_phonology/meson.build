src_modules_UniSyn_phonology_t_lib = static_library(
  'src_modules_UniSyn_phonology_t_lib',
  sources: files(
    'us_aux.cc'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: ['-DINSTANTIATE_TEMPLATES'],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_UniSyn_phonology_t_lib


src_modules_UniSyn_phonology_lib = static_library(
  'src_modules_UniSyn_phonology_lib',
  sources: files(
    'UniSyn_phonology.cc',
    'mettree.cc',
    'syllabify.cc',
    'subword.cc',
    'UniSyn_build.cc',
    'us_duration.cc',
    'unisyn_tilt.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_UniSyn_phonology_lib

