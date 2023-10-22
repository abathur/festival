src_modules_donovan_lib = static_library(
  'src_modules_donovan_lib',
  sources: files(
    'donovan.cc',
    'makewav.c',
    'load_diphs.c',
    'coeffs.c',
    'excitation.c',
    'pitch.c',
    'durations.c'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_donovan_lib



