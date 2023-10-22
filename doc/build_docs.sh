#!/bin/bash

FESTIVAL="$1"
SOURCEDOCDIR="$2"
WORKDIR="$3"
TEX="$4"
TEXINDEX="$5"
DVIPS="$6"
FESTIVAL_PS="$7"
MAKEINFO="$8"
HTML_DIR="$9"
FESTIVAL_INFO="${10}"

cp -pr "${SOURCEDOCDIR}" "${WORKDIR}"

pushd "${WORKDIR}"

${FESTIVAL} --script doc.scm

${TEX} festival.texi
${TEXINDEX} festival.cp
${TEX} festival.texi

pwd

${DVIPS} -f festival.dvi > festival.ps

mkdir -p html
(cd html; ${MAKEINFO} --html --ifinfo  ../festival.texi)


mkdir -p info
sed 's/@url{/@file{/g' <festival.texi >info/festival.texi
cp festfunc.texi info/festfunc.texi
cp festvars.texi info/festvars.texi
cp festfeat.texi info/festfeat.texi
( cd info; ${MAKEINFO} --output festival.info festival.texi )
rm info/*.texi

popd

cp "${WORKDIR}/festival.ps" "${FESTIVAL_PS}"
cp -pr "${WORKDIR}/html/festival" "${HTML_DIR}"
cp "${WORKDIR}/info/festival.info" "${FESTIVAL_INFO}"


