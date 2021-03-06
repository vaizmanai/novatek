/*
 * Copyright (C) 2014 Novatek Microelectronics Corp. All rights reserved.
 * Author: SP-KSW <SP_KSW_MailGrp@novatek.com.tw>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __NT72670B_SOC_H
#define __NT72670B_SOC_H

#if !(defined(__KERNEL_STRICT_NAMES) || defined(__ASSEMBLY__))
#include <asm/types.h>
#endif /* !(__KERNEL_STRICT_NAMES || __ASSEMBLY__) */

#define PERIPH_BASE_ADDR			0xffd00000

#define SCU_BASE_ADDR				(PERIPH_BASE_ADDR + 0x0000)
#define GICC_BASE_ADDR				(PERIPH_BASE_ADDR + 0x2000)
#define GTIMER_BASE_ADDR          	(PERIPH_BASE_ADDR + 0x0200)
#define PTIMER_WATCH_BASE_ADDR		(PERIPH_BASE_ADDR + 0x0600)
#define GICD_BASE_ADDR				(PERIPH_BASE_ADDR + 0x1000)

/* The following definitions are for ARMv8 system clock of generic time */
#define SYSCNT_CTRL_BASE_ADDR		0xfd810000

#define CNTCR_EN			(1 << 0)	/* Enables the counter 		*/
#define CNTCR_HDBG			(1 << 1)	/* Halt-on-debug			*/
#define CNTCR_FCREQ(x)		((x) << 8)	/* Frequency change request */

#define CNT_CTL_ENABLE_SHIFT   0
#define CNT_CTL_IMASK_SHIFT    1
#define CNT_CTL_ISTATUS_SHIFT  2

#define CNT_CTL_ENABLE_MASK    1
#define CNT_CTL_IMASK_MASK     1
#define CNT_CTL_ISTATUS_MASK   1


#ifndef __KERNEL_STRICT_NAMES
#ifndef __ASSEMBLY__

struct ptimer {
	u32 load;			/* 0x00 r/w Private Timer Load Register */
	u32 count;			/* 0x04 r/w Private Timer Counter Register */
	u32 ctrl;			/* 0x08 r/w Private Timer Control Register */
	u32 sttus;			/* 0x0c r/w Private Timer Interrupt Status Register */
};

struct watchdog {
	u32 load;			/* 0x20 r/w Watchdog Load Register */
	u32 count;			/* 0x24 r/w Watchdog Counter Register */
	u32 ctrl;			/* 0x28 r/w Watchdog Control Register */
	u32 status;			/* 0x2c r/w Watchdog Interrupt Status Register */
	u32 rststatus;		/* 0x30 r/w Watchdog Reset Status Register */
	u32 disable;		/* 0x34 wo  Watchdog Disable Register */
};

#endif /* __ASSEMBLY__ */
#endif /* __KERNEL_STRICT_NAMES */

/* enable sys_clk NO-prescale /1 */
#define GPT_EN			((0x0 << 2) | (0x1 << 1) | (0x1 << 0))

#define WD_UNLOCK1		0xAAAA
#define WD_UNLOCK2		0x5555

#endif /* __NT72670B_SOC_H */
