/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2007-2012
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Tom Cubie <tangliang@allwinnertech.com>
 *
 * Definitions that are shared between the Allwinner pinctrl and GPIO drivers,
 * also used by some non-DM SPL code directly.
 */

#ifndef _SUNXI_SPC_H
#define _SUNXI_SPC_H

#include <asm/arch-sunxi/cpu.h>

#define SUNXI_CCM_SEC_SWITCH_REG        (SUNXI_CCM_BASE + 0x0f00)
#define SUNXI_PRCM_SEC_SWITCH_REG       (SUNXI_PRCM_BASE + 0x0290)
#define SUNXI_SPC_DECPORT_STA_REG(p)    (SUNXI_SPC_BASE + 0x0000 + 0x10 * (p))
#define SUNXI_SPC_DECPORT_SET_REG(p)    (SUNXI_SPC_BASE + 0x0004 + 0x10 * (p))
#define SUNXI_SPC_DECPORT_CLR_REG(p)    (SUNXI_SPC_BASE + 0x0008 + 0x10 * (p))
#define SUNXI_SPC_NUM_PORTS             13
#define DMA_SEC_REG             0x20

#endif /* _SUNXI_SPC_H */
