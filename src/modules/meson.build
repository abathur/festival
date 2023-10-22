
base_modules = ['Lexicon', 'base', 'Duration', 'Intonation', 'Text']
# These could be made optional:
base_modules += ['UniSyn', 'donovan', 'parser', 'UniSyn_diphone']

# java is not supported here
all_extra_modules = ['diphone', 'clunits', 'clustergen', 'rxp', 'UniSyn_phonology', 'MultiSyn', 'hts_engine']

# List of modules to build:
build_modules = base_modules
foreach module : all_extra_modules
  if get_option(module)
    build_modules += module
  endif
endforeach


create_init_modules = meson.current_source_dir() / 'create_init_modules.sh'

init_modules_src = custom_target('init_modules.cc',
  command: [create_init_modules, meson.current_source_dir()] + build_modules,
  depend_files: create_init_modules,
  capture: true,
  output: 'init_modules.cc'
)

src_modules_lib = static_library(
  'src_modules_lib',
  sources: init_modules_src,
  dependencies: [speech_tools_dep],
  include_directories : libfestival_include_dirs
)

libfestival_conv_libs += src_modules_lib

foreach module : build_modules
  subdir(module)
endforeach

