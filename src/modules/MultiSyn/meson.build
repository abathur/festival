subdir('inst_tmpl')

src_modules_MultiSyn_lib = static_library(
  'src_modules_MultiSyn_lib',
  sources: files(
    'DiphoneBackoff.cc',
    'DiphoneUnitVoice.cc',
    'DiphoneVoiceModule.cc',
    'EST_DiphoneCoverage.cc',
    'EST_FlatTargetCost.cc',
    'EST_HybridTargetCost.cc',
    'EST_JoinCostCache.cc',
    'EST_JoinCost.cc',
    'EST_TargetCost.cc',
    'TargetCostRescoring.cc',
    'UnitSelection.cc',
    'VoiceBase.cc',
    'VoiceModuleBase.cc'
  ),
  dependencies: [speech_tools_dep],
  include_directories : [libfestival_include_dirs]
)

libfestival_conv_libs += src_modules_MultiSyn_lib




