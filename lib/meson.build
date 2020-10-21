
# Nothing to do there:
#subdir('etc')

subdir('multisyn')
subdir('languages')

lib_scm = []

lib_phonesets = files(
  'cmusphinx2_phones.scm',
  'darpa_phones.scm',
  'holmes_phones.scm',
  'mrpa_allophones.scm',
  'mrpa_phones.scm',
  'phoneset.scm',
  'radio_phones.scm',
  'unilex_phones.scm'
)

lib_scm += lib_phonesets

lib_durstats = files(
  'f2bdurtreeZ.scm',
  'gswdurtreeZ.scm',
  'klatt_durs.scm',
  'mrpa_durs.scm'
)

lib_scm += lib_durstats

lib_intstats = files(
  'apml_f2bf0lr.scm',
  'apml_kaldurtreeZ.scm',
  'apml.scm',
  'f2bf0lr.scm',
  'tilt.scm',
  'tobi_rules.scm',
  'tobi.scm'
)

lib_scm += lib_intstats

lib_ltsrules = files(
  'engmorph.scm',
  'engmorphsyn.scm',
  'lts.scm',
  'lts_build.scm'
)

lib_scm += lib_ltsrules


lib_brkmodels = files(
  'sec.ts20.quad.ngrambin',
  'sec.B.hept.ngrambin'
)

lib_scm += lib_brkmodels

lib_modes = files(
  'email-mode.scm',
  'ogimarkup-mode.scm',
  'sable-mode.scm',
  'soleml-mode.scm',
  'singing-mode.scm'
)

lib_scm += lib_modes


lib_general = files(
  'cart_aux.scm',
  'clunits_build.scm',
  'clunits.scm',
  'cslush.scm',
  'display.scm',
  'duration.scm',
  'festdoc.scm',
  'festival.scm',
  'festtest.scm',
  'init.scm',
  'intonation.scm',
  'java.scm',
  'languages.scm',
  'lexicons.scm',
  'mbrola.scm',
  'mettree.scm',
  'module_description.scm',
  'pauses.scm',
  'phrase.scm',
  'pos.scm',
  'postlex.scm',
  'scfg.scm',
  'siteinit.scm',
  'synthesis.scm',
  'tokenpos.scm',
  'token.scm',
  'tts.scm',
  'voices.scm'
)

lib_scm += lib_general

lib_hts = files(
  'hts.scm'
)

lib_scm += lib_hts

lib_others = files(
  'Sable.v0_2.dtd',
  'sable-latin.ent',
  'festival.el',
  'scfg_wsj_wp20.gram',
  'speech.properties',
  'Singing.v0_1.dtd'
)

lib_scm += lib_others

# Those are copied from speech tools installation to festival:
lib_siod = [
  'siod.scm',
  'web.scm',
  'cstr.scm',
  'fringe.scm'
]

speech_tools_scmdir = speech_tools_dep.get_pkgconfig_variable('pkgdatadir')

foreach lib_siod_file : lib_siod
  install_data(
    speech_tools_scmdir / lib_siod_file,
    install_dir : get_option('datadir') / meson.project_name()
  )
endforeach


install_data(
  lib_scm,
  install_dir : get_option('datadir') / meson.project_name()
)
