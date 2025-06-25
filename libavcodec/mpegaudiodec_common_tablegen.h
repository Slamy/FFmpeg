/*
 * Header file for hardcoded shared mpegaudiodec tables
 *
 * Copyright (c) 2009 Reimar Döffinger <Reimar.Doeffinger@gmx.de>
 * Copyright (c) 2020 Andreas Rheinhardt <andreas.rheinhardt@gmail.com>
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_MPEGAUDIODEC_COMMON_TABLEGEN_H
#define AVCODEC_MPEGAUDIODEC_COMMON_TABLEGEN_H

#include <stdint.h>

#define TABLE_4_3_SIZE ((8191 + 16)*4)

#if CONFIG_HARDCODED_TABLES
#define mpegaudiodec_common_tableinit()
#include "libavcodec/mpegaudiodec_common_tables.h"
#else
#include <math.h>
#include "libavutil/attributes.h"


#endif /* CONFIG_HARDCODED_TABLES */
#endif /* AVCODEC_MPEGAUDIODEC_COMMON_TABLEGEN_H */
