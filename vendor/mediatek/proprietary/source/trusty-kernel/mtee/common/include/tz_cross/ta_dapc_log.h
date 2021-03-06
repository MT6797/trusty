/*
* Copyright (c) 2015 MediaTek Inc.
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files
* (the "Software"), to deal in the Software without restriction,
* including without limitation the rights to use, copy, modify, merge,
* publish, distribute, sublicense, and/or sell copies of the Software,
* and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef __TRUSTZONE_TA_DAPC_LOG__
#define __TRUSTZONE_TA_DAPC_LOG__

// for self-defined log output marco
#ifndef __MTEE_LOG_H__
#include <tz_private/log.h>
#endif

// to control the DEBUG level output. define it some where else.
extern unsigned int g_tee_dbg_log;

// for temporary debugging purpose
#define MTEE_LOG_CUSTOM_LEVEL MTEE_LOG_LVL_INFO

#define MTEE_LOG_I(args...) \
do { if ((MTEE_LOG_LVL_INFO) >= MTEE_LOG_BUILD_LEVEL && g_tee_dbg_log > 0) { _MTEE_LOG(MTEE_LOG_LVL_INFO, args); } } while (0)

#define MTEE_LOG_D(args...) \
do { if ((MTEE_LOG_LVL_DEBUG) >= MTEE_LOG_BUILD_LEVEL && g_tee_dbg_log > 0) { _MTEE_LOG(MTEE_LOG_LVL_DEBUG, args); } } while (0)

#define MTEE_LOG_P(args...) \
do { if ((MTEE_LOG_LVL_PRINTF) >= MTEE_LOG_BUILD_LEVEL) { _MTEE_LOG(MTEE_LOG_LVL_PRINTF, args); } } while (0)

#define MTEE_LOG_W(args...) \
do { if ((MTEE_LOG_LVL_WARN) >= MTEE_LOG_BUILD_LEVEL) { _MTEE_LOG(MTEE_LOG_LVL_WARN, args); } } while (0)

#define MTEE_LOG_B(args...) \
do { if ((MTEE_LOG_LVL_BUG) >= MTEE_LOG_BUILD_LEVEL) { _MTEE_LOG(MTEE_LOG_LVL_BUG, args); } } while (0)

#define MTEE_LOG_A(args...) \
do { if ((MTEE_LOG_LVL_ASSERT) >= MTEE_LOG_BUILD_LEVEL) { _MTEE_LOG(MTEE_LOG_LVL_ASSERT, args); } } while (0)

#endif /* __TRUSTZONE_TA_DAPC_LOG__ */
