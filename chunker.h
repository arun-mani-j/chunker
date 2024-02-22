/*
 * Copyright (C) 2024 Tether Operations Limited
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <gst/gst.h>

#define CHUNKER_MAX_SIZE_TIME 7 * GST_SECOND
#define CHUNKER_MIC "mic"
#define CHUNKER_MINIMUM_SILENCE_TIME GST_SECOND / 2
#define CHUNKER_SILENCE_HYSTERESIS 480
#define CHUNKER_SILENCE_THRESHOLD -60
