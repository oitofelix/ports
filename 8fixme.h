/*
  8fixme.h -- Quick&dirty compatibility header;

  Copyright (C) 2015, 2016, 2017 Bruno Félix Rezende Ribeiro
  <oitofelix@gnu.org>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OITOFIXME_H
#define OITOFIXME_H

/* Unix */

#undef errno
#define errno 0

#undef strerror
#define strerror(errnum) ""

#undef setlocale
#define setlocale(category, locale) NULL

#undef getenv
#define getenv(name) NULL

#undef system
#define system(command) -1

#undef clock
#define clock() ((clock_t)(-1))

#undef remove
#define remove(filename) unlink (filename)

#undef tmpfile
#define tmpfile() NULL

#undef perror
#define perror(message)

#undef strcoll
#define strcoll(s1, s2) strcmp (s1, s2)

#undef rewind
#define rewind(stream) fseek (stream, 0L, SEEK_SET)

#undef signal
#define signal(signum, action) ((void(*)(int))(NULL))

#undef raise
#define raise(signum) -1

/* Windows */

#undef GetMenu
#define GetMenu(hwnd) NULL

#undef timeBeginPeriod
#define timeBeginPeriod(uPeriod) TIMERR_NOCANDO

#undef timeSetEvent
#define timeSetEvent(uDelay, uResolution, fptc, dwUser, fuEvent) NULL

#undef timeKillEvent
#define timeKillEvent(uTimerID) MMSYSERR_INVALPARAM

#undef timeEndPeriod
#define timeEndPeriod(uPeriod) TIMERR_NOCANDO

#endif	/* OITOFIXME_H */
