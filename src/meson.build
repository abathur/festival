libfestival_include_dirs = [include_directories('include')]
libfestival_conv_libs = []
libfestival_deps = [speech_tools_dep]

subdir('arch')
subdir('modules')

libfestival = library('festival',
  soversion : v_major + '.' +  v_minor,
  link_whole: libfestival_conv_libs,
  dependencies: libfestival_deps,
  include_directories: libfestival_include_dirs,
  install: true
)

festival_dep = declare_dependency(
  include_directories: libfestival_include_dirs,
  link_with: libfestival,
  dependencies: libfestival_deps
)

subdir('main')
subdir('include')

# Nothing to do there:
#subdir('scripts')
