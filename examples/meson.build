
examples_to_install = [
 'saytime',
 'text2pos',
 'latest',
 'scfg_parse_text',
 'text2wave',
 'make_utts',
 'dumpfeats',
 'durmeanstd',
 'powmeanstd',
 'text2utt'
]

EXAMPLES_BUILT = {}
foreach example : examples_to_install
  example_target = custom_target(
    example,
    input : [example + '.sh'],
    output : [example],
    capture: true,
    command : [
      meson.current_source_dir() / 'prepend_shebang.py',
      '@INPUT@',
      FESTIVAL.full_path()
    ],
    install: true,
    install_mode: 'rwxr-xr-x',
    install_dir: get_option('bindir')
  )
  EXAMPLES_BUILT += {example : example_target}
endforeach


