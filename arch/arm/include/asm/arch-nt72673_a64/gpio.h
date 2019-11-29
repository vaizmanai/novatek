/*
 * Copyright (C) 2014 Novatek Microelectronics Corp. All rights reserved.
 * Author: SP-KSW <SP_KSW_MailGrp@novatek.com.tw>
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __NT72670B_GPIO_H
#define __NT72670B_GPIO_H

#define GPIO_GRPA_BASE_ADDR				0xfd0f0000
#define GPIO_GRPA_CLEAR_ENABLE_OFFSET	0x00
#define GPIO_GRPA_SET_ENABLE_OFFSET		0x04
#define GPIO_GRPA_DIR_MODE_OFFSET		0x08
#define GPIO_GRPA_PULL_DOWN_OFFSET		0x18
#define GPIO_GRPA_PULL_UP_OFFSET		0x1c
#define GPIO_GRPA_MUX_SELECT0_OFFSET	0x20
#define GPIO_GRPA_MUX_SELECT1_OFFSET	0x24
#define GPIO_GRPA_MUX_SELECT2_OFFSET	0x28
#define GPIO_GRPA_MUX_SELECT3_OFFSET	0x2c
#define GPIO_GRPA_TEST_MODE_OFFSET		0x30

#define GPIO_GRPB_BASE_ADDR				0xfd0f0200
#define GPIO_GRPB_CLEAR_ENABLE_OFFSET	0x00
#define GPIO_GRPB_SET_ENABLE_OFFSET		0x04
#define GPIO_GRPB_DIR_MODE_OFFSET		0x08
#define GPIO_GRPB_PULL_DOWN_OFFSET		0x18
#define GPIO_GRPB_PULL_UP_OFFSET		0x1c
#define GPIO_GRPB_MUX_SELECT0_OFFSET	0x20
#define GPIO_GRPB_MUX_SELECT1_OFFSET	0x24
#define GPIO_GRPB_MUX_SELECT2_OFFSET	0x28
#define GPIO_GRPB_MUX_SELECT3_OFFSET	0x2c
#define GPIO_GRPB_TEST_MODE_OFFSET		0x30

#define GPIO_GRPC_BASE_ADDR				0xfd100000
#define GPIO_GRPC_CLEAR_ENABLE_OFFSET	0x00
#define GPIO_GRPC_SET_ENABLE_OFFSET		0x04
#define GPIO_GRPC_DIR_MODE_OFFSET		0x08
#define GPIO_GRPC_PULL_DOWN_OFFSET		0x0c
#define GPIO_GRPC_PULL_UP_OFFSET		0x10
#define GPIO_GRPC_MUX_SELECT0_OFFSET	0x20
#define GPIO_GRPC_MUX_SELECT1_OFFSET	0x24
#define GPIO_GRPC_MUX_SELECT2_OFFSET	0x28
#define GPIO_GRPC_TEST_MODE_OFFSET		0x30

#define GPIO_GRPD_BASE_ADDR				0xfd110000
#define GPIO_GRPD_CLEAR_ENABLE_OFFSET	0x00
#define GPIO_GRPD_SET_ENABLE_OFFSET		0x04
#define GPIO_GRPD_DIR_MODE_OFFSET		0x08
#define GPIO_GRPD_PULL_DOWN_OFFSET		0x18
#define GPIO_GRPD_PULL_UP_OFFSET		0x1c
#define GPIO_GRPD_MUX_SELECT0_OFFSET	0x20
#define GPIO_GRPD_MUX_SELECT1_OFFSET	0x24
#define GPIO_GRPD_MUX_SELECT2_OFFSET	0x28
#define GPIO_GRPD_MUX_SELECT3_OFFSET	0x2c
#define GPIO_GRPD_TEST_MODE_OFFSET		0x30

#define GPIO_GRPE_BASE_ADDR				0xfd110200
#define GPIO_GRPE_CLEAR_ENABLE_OFFSET	0x00
#define GPIO_GRPE_SET_ENABLE_OFFSET		0x04
#define GPIO_GRPE_DIR_MODE_OFFSET		0x08
#define GPIO_GRPE_PULL_DOWN_OFFSET		0x18
#define GPIO_GRPE_PULL_UP_OFFSET		0x1c
#define GPIO_GRPE_MUX_SELECT0_OFFSET	0x20
#define GPIO_GRPE_MUX_SELECT1_OFFSET	0x24
#define GPIO_GRPE_MUX_SELECT2_OFFSET	0x28
#define GPIO_GRPE_MUX_SELECT3_OFFSET	0x2c
#define GPIO_GRPE_TEST_MODE_OFFSET		0x30

#endif /* __NT72670B_GPIO_H */
