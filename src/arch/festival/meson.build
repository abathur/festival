src_arch_festival_lib = static_library(
  'src_arch_festival_lib',
  sources: files(
    'Phone.cc', 
    'utterance.cc', 
    'features.cc', 
    'wave.cc', 
    'wagon_interp.cc', 
    'linreg.cc', 
    'audspio.cc', 
    'server.cc', 
    'client.cc', 
    'web.cc', 
    'tcl.cc', 
    'wfst.cc', 
    'ngram.cc', 
    'viterbi.cc', 
    'ModuleDescription.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_arch_festival_lib

src_arch_festival_festival_cc_lib = static_library(
  'src_arch_festival_festival_cc_lib',
  sources: files(
    'festival.cc'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: [
    '-DFTNAME=' + PROJECT_NAME + '',
    '-DFTLIBDIRC=' + FTLIBDIR + '',
    '-DFTLIBEXECDIRC=' + FTLIBEXECDIR + '',
    '-DFTVERSION=' + PROJECT_VERSION + '',
    '-DFTSTATE=' + PROJECT_STATE + '',
    '-DFTDATE=' + PROJECT_DATE + '',
    '-DFTOSTYPEC=' + SYSTEM_TYPE + ''
  ],
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_arch_festival_festival_cc_lib

