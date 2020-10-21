src_modules_hts_engine_lib = static_library(
  'src_modules_hts_engine_lib',
  sources: files(
    'fest2hts_engine.cc',
    'HTS_audio.c',
    'HTS_engine.c',
    'HTS_gstream.c',
    'HTS_label.c',
    'HTS_misc.c',
    'HTS_model.c',
    'HTS_pstream.c',
    'HTS_sstream.c',
    'HTS_vocoder.c'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: ['-DFESTIVAL'],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_hts_engine_lib

