---
title: oitofelix - Ports
description: >
  Software Ports to Eccentric Platforms
tags: >
  Windows CE 3.0 ARM, Handheld PC 2000
license: CC BY-SA 4.0
layout: oitofelix-homepage
base: http://oitofelix.github.io
#base_local: http://localhost:4000
---
<div id="markdown" markdown="1">
## Handheld PC 2000 (Windows CE 3.0 ARM --- Jornada 720/728)

These ports were made using the
[mingw32ce](http://cegcc.sourceforge.net/) cross-compilation toolchain
and therefore are native Windows CE applications.  They were
originally intended for my personal use, but I decided to release them
for your convenience.  Likely quick&dirty solutions have been used to
remedy any technical difficulties in building the software.  No
guarantees are made regarding the usefulness or correctness of the
software published here.  However, let me known in case something does
not work as expected.  If there is interest, I may fix it.

Usually very minor source code changes were made upon the official
upstream release.  Virtually always this only mean including the
[8fixme.h](https://github.com/oitofelix/ports/blob/master/8fixme.h)
header in the offending C files.  Aside from that, the relevant work
is configuring the specific build system of the package at hand for a
successful compilation.  I have not bothered releasing neither the
tiny modifications to the source code nor the (often trivial) build
recipes.  However, in case you do care about that, please let me know
and I'll make them available.

### Lua 5.0.3

This is the latest revision of the original Lua interpreter 5.0
series, released on 26 Jun 2006.  Currently, this is the only one for
which the [Programming in Lua](https://www.lua.org/pil/contents.html)
book is freely available (first edition; for personal use).  It's also
the one I chose to embed in
[MININIM](http://oitofelix.github.io/mininim/).  This port includes
both, the interactive interpreter and the compiler.

- [lua-5-0-3.zip](https://github.com/oitofelix/ports/releases/download/Release/lua-5-0-3.zip)
- [Homepage](http://www.lua.org/)

### Metamath

This is the canonical interactive program used to write and verify
formal mathematical proofs written in the Metamath language.  This is
version 0.144 (15-May-2017).  Only the program binary is included in
this release.  The databases are huge and transient, thus you should
download an updated version of only those you need from the official
site linked below.

There are two known issues with this port.  First, all file arguments
(like the ones for reading and saving databases) must be given in
full, because they are relative to the root directory.  Second, as
Windows CE 3.0 doesn't implement virtual memory paging, large
databases (like `set.mm`) exhaust memory even on 64 Mb (like Jornada
728) devices.

- [metamath-0-144.zip](https://github.com/oitofelix/ports/releases/download/Release/metamath-0-144.zip)
- [Homepage](http://metamath.org/)

</div>
