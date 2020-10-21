
cat_prog = find_program('cat', required: false)

if cat_prog.found()

# MAN PAGES
foreach prog_name, executable : {'festival': FESTIVAL, 'festival_client': FESTIVAL_CLIENT}
  cur_options = custom_target(
    prog_name + '.options',
    depends: [executable],
    command: [ executable, '-man_options'],
    capture: true,
    output: prog_name + '.options'
  )

  prog_name_man_page = custom_target(
    prog_name + '.1',
    command: [
      cat_prog,
      meson.current_source_dir() / prog_name + '.head',
      cur_options.full_path(),
      meson.current_source_dir() / prog_name + '.tail',
    ],
    depends: [cur_options],
    depend_files: [
      prog_name + '.head',
      prog_name + '.tail'
    ],
    capture: true,
    output: prog_name + '.1'
    #install_dir: get_option('mandir'),
    #install: true
  )
  install_man(prog_name_man_page.full_path())
endforeach


text2wave_man_page = custom_target(
  'text2wave' + '.1',
  command: [
    cat_prog,
    meson.current_source_dir() / 'text2wave' + '.head',
    meson.current_source_dir() / 'text2wave' + '.options',
    meson.current_source_dir() / 'text2wave' + '.tail',
  ],
  depend_files: [
    'text2wave' + '.head',
    'text2wave' + '.options',
    'text2wave' + '.tail'
  ],
  capture: true,
  output: 'text2wave' + '.1'
)
install_man(text2wave_man_page.full_path())
endif

latex = find_program('latex', required: false)
dvips = find_program('dvips', required: false)


if latex.found() and dvips.found()

# Reference card:

refcard_dvi = custom_target(
  'refcard.dvi',
  command: [
    latex,
    '-output-directory=@OUTDIR@',
    files('refcard.tex')
  ],
  depend_files: [files('refcard.tex')],
  output: 'refcard.dvi'
)

refcard_ps = custom_target(
  'refcard.ps',
  command: [
    dvips,
    '-f', '-t', 'landscape',
    refcard_dvi.full_path(),
  ],
  depends: [refcard_dvi],
  output: 'refcard.ps',
  capture: true,
  install: true,
  install_dir: get_option('datadir') / 'doc' / meson.project_name()
)

endif

# festival.ps festival.html festival.info

bash = find_program('bash', required: false)
sed = find_program('sed', required: false)
tex = find_program('tex', required: false)
texindex = find_program('texindex', required: false)
makeinfo = find_program('makeinfo', required: false)

if bash.found() and sed.found() and tex.found() and texindex.found() and makeinfo.found()

festival_ps = custom_target(
  'festival.ps',
  command: [
    files('build_docs.sh'),
    FESTIVAL,
    meson.current_source_dir(),
    '@PRIVATE_DIR@',
    tex,
    texindex,
    dvips,
    '@OUTPUT0@',
    makeinfo,
    '@OUTPUT1@',
    '@OUTPUT2@'
  ],
  output: ['festival.ps', 'html', 'festival.info'],
  install: true,
  install_dir: get_option('datadir') / 'doc' / meson.project_name()
)

endif

