/* -----------------------------------------------------------------------------
 *
 * Giada - Your Hardcore Loopmachine
 *
 * -----------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019 Giovanni A. Zuliani | Monocasual
 *
 * This file is part of Giada - Your Hardcore Loopmachine.
 *
 * Giada - Your Hardcore Loopmachine is free software: you can
 * redistribute it and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * Giada - Your Hardcore Loopmachine is distributed in the hope that it
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Giada - Your Hardcore Loopmachine. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * -------------------------------------------------------------------------- */


#ifndef G_REC_MANAGER_H
#define G_REC_MANAGER_H


#include "types.h"


namespace giada {
namespace m {
namespace recManager
{
void init(pthread_mutex_t* mixerMutex);

/* isWaiting
Returns true if any Recorder (Action Recorder or Input Recorder) are waiting
for input signals. */

bool isWaiting();

bool startActionRec(RecTriggerMode m);
void stopActionRec();
bool startInputRec(RecTriggerMode m);
void stopInputRec();
}}} // giada::m::recManager

#endif