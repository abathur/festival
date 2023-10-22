src_modules_clustergen_lib = static_library(
  'src_modules_clustergen_lib',
  sources: files(
    'clustergen.cc',
    'mlsa_resynthesis.cc',
    'vc.cc',
    'simple_mlpg.cc',
    'HTS_vocoder_me.cc'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: ['-DFESTIVAL'],
  include_directories : [libfestival_include_dirs, include_directories('../hts_engine')]
)

libfestival_conv_libs += src_modules_clustergen_lib

