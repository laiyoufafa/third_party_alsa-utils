/*
 *  ALSA utils header file include/aconfig.h
 *  Copyright (c) 2022 by Allen Riemann Free Software Foundation, Inc.
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as
 *   published by the Free Software Foundation; either version 2.1 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __ACONFIG_H
#define __ACONFIG_H

/* directory containing alsa configuration */
#define DATADIR "/system/etc/audio/alsa/share/"

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define if curses-based programs can show translated messages. */
/* #undef ENABLE_NLS_IN_CURSES */

/* Define to 1 if you have the <alsa/mixer.h> header file. */
#define HAVE_ALSA_MIXER_H 1

/* Define to 1 if you have the <alsa/pcm.h> header file. */
#define HAVE_ALSA_PCM_H 1

/* Define to 1 if you have the <alsa/rawmidi.h> header file. */
#define HAVE_ALSA_RAWMIDI_H 1

/* Define to 1 if you have the <alsa/seq.h> header file. */
#define HAVE_ALSA_SEQ_H 1

/* Define to 1 if you have the <alsa/topology.h> header file. */
#define HAVE_ALSA_TOPOLOGY_H 1

/* Define to 1 if you have the <alsa/use-case.h> header file. */
#define HAVE_ALSA_USE_CASE_H 1

/* Define to 1 if you have the Mac OS X function
   CFLocaleCopyPreferredLanguages in the CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYPREFERREDLANGUAGES */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Have clock gettime */
#define HAVE_CLOCK_GETTIME 1

/* Have curses set_escdelay */
/* #undef HAVE_CURSES_ESCDELAY */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <form.h> header file. */
/* #undef HAVE_FORM_H */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the `asound' library (-lasound). */
#define HAVE_LIBASOUND 1

/* Define to 1 if you have the `atopology' library (-latopology). */
#define HAVE_LIBATOPOLOGY 1

/* Define to 1 if you have the `fftw3f' library (-lfftw3f). */
/* #undef HAVE_LIBFFTW3F */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Have librt */
#define HAVE_LIBRT 1

/* Define to 1 if you have the `tinyalsa' library (-ltinyalsa). */
/* #undef HAVE_LIBTINYALSA */

/* Define if Linux kernel supports memfd_create system call */
#define HAVE_MEMFD_CREATE 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the <menu.h> header file. */
/* #undef HAVE_MENU_H */

/* Define to 1 if you have the <panel.h> header file. */
/* #undef HAVE_PANEL_H */

/* Define to 1 if you have the <samplerate.h> header file. */
/* #undef HAVE_SAMPLERATE_H */

/* alsa-lib supports snd_seq_client_info_get_card */
#define HAVE_SEQ_CLIENT_INFO_GET_CARD 1

/* alsa-lib supports snd_seq_client_info_get_pid */
#define HAVE_SEQ_CLIENT_INFO_GET_PID 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
/* #undef HAVE_STDLIB_H */

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
/* #undef HAVE_STRING_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/types.h> header file. */
/* #undef HAVE_SYS_TYPES_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Name of package */
#define PACKAGE "alsa-utils"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "alsa-utils"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "alsa-utils 1.2.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "alsa-utils"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2.6"

/* directory containing sample data */
#define SOUNDSDIR "/system/etc/audio/alsa/share/sounds/"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* ALSA util version */
#define VERSION "1.2.6"

/* Define if FFADO library is available */
/* #undef WITH_FFADO */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

#endif /* __ACONFIG_H */
