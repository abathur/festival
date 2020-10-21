src_modules_MultiSyn_inst_tmpl_lib = static_library(
  'src_modules_MultiSyn_inst_tmpl_lib',
  sources: files(
    'hash_itemp_tcdatap_t.cc',
    'hash_s_itemlistp_t.cc',
    'list_itemp_t.cc',
    'list_scorepair_t.cc',
    'list_strlist_t.cc',
    'list_uttp_t.cc',
    'list_voicemodulep_t.cc',
    'vector_jccp_t.cc'
  ),
  dependencies: [speech_tools_dep],
  cpp_args: ['-DINSTANTIATE_TEMPLATES'],
  include_directories : [libfestival_include_dirs, include_directories('..')]
)

libfestival_conv_libs += src_modules_MultiSyn_inst_tmpl_lib




