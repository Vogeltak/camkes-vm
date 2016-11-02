/*
 * Copyright 2016, Data 61
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(D61_GPL)
 */

#ifndef __EMITS_EVENT_IOCTL_COMMANDS_H
#define __EMITS_EVENT_IOCTL_COMMANDS_H

#define EMITS_EVENT_MAGIC 'E'

enum {
    __EMITS_EVENT_EMIT,
};

#define EMITS_EVENT_EMIT _IOW(EMITS_EVENT_MAGIC, __EMITS_EVENT_EMIT, unsigned int)

#endif