#pragma error(disable:C2440)
/*
 * aconf-win32.h
 *
 * Copyright 2002-2003 Glyph & Cog, LLC
 */

#ifndef ACONF_H
#define ACONF_H

#include <aconf2.h>

/*
 * Use A4 paper size instead of Letter for PostScript output.
 */
#undef A4_PAPER

/*
 * Do not allow text selection.
 */
#undef NO_TEXT_SELECT

/*
 * Include support for OPI comments.
 */
#undef OPI_SUPPORT

/*
 * Enable multithreading support.
 */
#define MULTITHREADED 1

/*
 * Enable C++ exceptions.
 */
#define USE_EXCEPTIONS 1

/*
 * Enable word list support.
 */
#define TEXTOUT_WORD_LIST 1

/*
 * Use fixed point (instead of floating point) arithmetic.
 */
#undef USE_FIXEDPOINT

/*
 * Directory with the Xpdf app-defaults file.
 */
#undef APPDEFDIR

/*
 * Full path for the system-wide xpdfrc file.
 */
#undef SYSTEM_XPDFRC

/*
 * Various include files and functions.
 */
#undef HAVE_DIRENT_H
#undef HAVE_SYS_NDIR_H
#undef HAVE_SYS_DIR_H
#undef HAVE_NDIR_H
#undef HAVE_SYS_SELECT_H
#undef HAVE_SYS_BSDTYPES_H
#undef HAVE_STRINGS_H
#undef HAVE_BSTRING_H
#undef HAVE_POPEN
#undef HAVE_MKSTEMP
#undef HAVE_MKSTEMPS
#undef SELECT_TAKES_INT
#undef HAVE_FSEEKO
#undef HAVE_FSEEK64
#undef _FILE_OFFSET_BITS
#undef _LARGE_FILES
#undef _LARGEFILE_SOURCE
#undef HAVE_XTAPPSETEXITFLAG

/*
 * This is defined if using libXpm.
 */
#undef HAVE_X11_XPM_H

/*
 * This is defined if using t1lib.
 */
#undef HAVE_T1LIB_H

/*
 * One of these is defined if using FreeType (version 1 or 2).
 */
#undef HAVE_FREETYPE_H
#define HAVE_FREETYPE_FREETYPE_H 1

/*
 * This is defined if using FreeType version 2.
 */
#define FREETYPE2

/*
 * This is defined if using libpaper.
 */
#define HAVE_PAPER_H

/*
 * Enable support for loading plugins.
 */
#undef ENABLE_PLUGINS

/*
 * Defined if the Splash library is avaiable.
 */
#define HAVE_SPLASH

/*
 * Enable support for CMYK output.
 */
#undef SPLASH_CMYK

#define HAVE_ZLIB
#endif
