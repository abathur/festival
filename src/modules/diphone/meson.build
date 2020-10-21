src_modules_diphone_cpp_args = []
#src_modules_diphone_cpp_args += ['-DSUPPORT_PSOLA_TM', '-DPSOLA_TM_']

src_modules_diphone_lib = static_library(
  'src_modules_diphone_lib',
  sources: files(
    'diphone.cc',
    'di_reslpc.cc',
    'di_psola.cc',
    'di_select.cc',
    'di_pitch.cc',
#    'di_psolaTM.cc',
    'di_io.cc',
    'oc.cc'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: src_modules_diphone_cpp_args,
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_modules_diphone_lib

