/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define SPLIT_WPM_ENABLE
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

// Responsive WPM Configuration
#define WPM_SAMPLE_SECONDS 2           // 2-second window instead of 5 (faster response)
#define WPM_SAMPLE_PERIODS 40          // 50ms periods instead of 200ms (smoother)
#define WPM_LAUNCH_CONTROL             // Immediate WPM response from 0
#define WPM_UNFILTERED                 // Remove extra smoothing lag


