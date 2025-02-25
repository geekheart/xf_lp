/**
 * @file xf_lp_sleep.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief
 * @version 0.1
 * @date 2025-02-05
 *
 * @copyright Copyright (c) 2025, CorAL. All rights reserved.
 *
 */

#ifndef __XF_LP_SLEEP_H__
#define __XF_LP_SLEEP_H__

/* ==================== [Includes] ========================================== */

#include "xf_lp_config_internal.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

typedef enum _xf_lp_sleep_source_t {
    XF_LP_SLEEP_WAKEUP_UNDEFINED = 0,

    XF_LP_SLEEP_WAKEUP_TIMER = 1 << 0,
    XF_LP_SLEEP_WAKEUP_GPIO = 1 << 1,
    XF_LP_SLEEP_WAKEUP_BLE = 1 << 2,

    XF_LP_SLEEP_WAKEUP_ALL = 0x7fffffff,
} xf_lp_sleep_source_t;

/* ==================== [Global Prototypes] ================================= */

xf_err_t xf_lp_sleep_enable_wakeup_source(xf_lp_sleep_source_t source);

xf_err_t xf_lp_sleep_timer_wakeup(uint64_t us);

xf_err_t xf_lp_sleep_gpio_wakeup(int pin, int level);

xf_err_t xf_lp_light_sleep_start(void);

xf_err_t xf_lp_deep_sleep_start(void);

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __XF_LP_SLEEP_H__
