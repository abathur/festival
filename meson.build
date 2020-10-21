project('festival', ['cpp', 'c'], version : '2.5.1',
        default_options : ['c_std=c99', 'cpp_std=c++11'], meson_version: '>=0.55.0')

PROJECT_NAME = 'Festival Speech Synthesis system'
PROJECT_DATE = 'July 2020'
PROJECT_VERSION = meson.project_version()
PROJECT_STATE = 'current'
SYSTEM_TYPE = host_machine.cpu_family() + '_' + host_machine.system()
FTLIBDIR = join_paths(get_option('prefix'), get_option('datadir'), meson.project_name())
DOCDIR = join_paths(get_option('prefix'), get_option('datadir'), 'doc', meson.project_name())

# audsp is an "internal executable binary" so it belongs to $prefix/libexec/festival/:
FTLIBEXECDIR = join_paths(get_option('prefix'), get_option('libexecdir'), 'festival')


cc = meson.get_compiler('c')
cxx = meson.get_compiler('cpp')

v_array = meson.project_version().split('.')
v_major = v_array[0]
v_minor = v_array[1]
v_patch = v_array[2]

pkg_config_h_subdirs = []

speech_tools_dep = dependency('speech-tools')

subdir('src')


subdir('lib')
subdir('examples')

# Testsuite is not implemented, among other things
# some tests require additional voices to be installed.
#subdir('testsuite')

subdir('doc')


pkg = import('pkgconfig')

pkg.generate(
  name: meson.project_name(),
  description: 'Festival Speech Synthesis system',
  libraries: libfestival,
  subdirs: pkg_config_h_subdirs,
  version: meson.project_version(),
  filebase : meson.project_name()
)


