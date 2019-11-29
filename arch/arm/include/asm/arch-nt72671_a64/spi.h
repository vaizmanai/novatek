/*
 * Copyright (C) 2014 Novatek Microelectronics Corp. All rights reserved.
 * Author: SP-KSW <SP_KSW_MailGrp@novatek.com.tw>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ARCH_SPI_H_
#define __ARCH_SPI_H_

#define SPI_BASE_BASE			 			0xfd081000UL

#define SPI_CTRL_OFFSET						0x00
#define SPI_CTRL_REG						(SPI_BASE_BASE+SPI_CTRL_OFFSET)

#define SPI_CMD_OFFSET						0x04
#define SPI_CMD_REG							(SPI_BASE_BASE+SPI_CMD_OFFSET)
#define SPI_ADDR_OFFSET						0x04
#define SPI_ADDR_REG						(SPI_BASE_BASE+SPI_ADDR_OFFSET)

#define SPI_ACCESS_CTRL_OFFSET				0x08
#define SPI_ACCESS_CTRL_REG					(SPI_BASE_BASE+SPI_ACCESS_CTRL_OFFSET)

#define SPI_DATA0_OFFSET					0x10
#define SPI_DATA0_REG						(SPI_BASE_BASE+SPI_DATA0_OFFSET)
#define SPI_DATA1_OFFSET					0x14
#define SPI_DATA1_REG						(SPI_BASE_BASE+SPI_DATA1_OFFSET)
#define SPI_DATA2_OFFSET					0x18
#define SPI_DATA2_REG						(SPI_BASE_BASE+SPI_DATA2_OFFSET)
#define SPI_DATA3_OFFSET					0x1c
#define SPI_DATA3_REG						(SPI_BASE_BASE+SPI_DATA3_OFFSET)

#define SPI_APB_DMA_CTRL_OFFSET				0x20
#define SPI_APB_DMA_CTRL_REG				(SPI_BASE_BASE+SPI_APB_DMA_CTRL_OFFSET)
#define SPI_APB_DMA_DATAPORT_OFFSET			0x24
#define SPI_APB_DMA_DATAPORT_REG			(SPI_BASE_BASE+SPI_APB_DMA_DATAPORT_OFFSET)

#define SPI_INTERRUP_OFFSET					0x30
#define SPI_INTERRUP_REG					(SPI_BASE_BASE+SPI_INTERRUP_OFFSET)

#define SPI_AHB_DMA_ADDR_OFFSET				0x40
#define SPI_AHB_DMA_ADDR_REG				(SPI_BASE_BASE+SPI_AHB_DMA_ADDR_OFFSET)
#define SPI_AHB_DMA_CTRL_OFFSET				0x44
#define SPI_AHB_DMA_CTRL_REG				(SPI_BASE_BASE+SPI_AHB_DMA_CTRL_OFFSET)

/* bit mapping of spi control register */
#define SPI_DEFAULT_VALUE					0x00008000UL
#define SPI_CTRL_DIR			 			0x00000001UL
#define SPI_CTRL_LOCK			 			0x00000002UL
#define SPI_CTRL_ADDR_EN		 			0x00000004UL
#define SPI_CTRL_DUMMY_EN		 			0x00000008UL
#define SPI_CTRL_DUMMY_CNT		 			0x000001f0UL
#define SPI_CTRL_WIDTH_SELECT	 			0x00003000UL
#define SPI_CTRL_ADDR_BYTE_SFT 				14
#define SPI_CTRL_ADDR_BYTE_1 				(0 << SPI_CTRL_ADDR_BYTE_SFT)
#define SPI_CTRL_ADDR_BYTE_2 				(1 << SPI_CTRL_ADDR_BYTE_SFT)
#define SPI_CTRL_ADDR_BYTE_3 				(2 << SPI_CTRL_ADDR_BYTE_SFT)
#define SPI_CTRL_ADDR_BYTE_4 				(3 << SPI_CTRL_ADDR_BYTE_SFT)

/* bit mapping of spi command register */
#define SPI_CMD_MASK			 			0x000000ffUL
#define SPI_ADDR_MASK			 			0xffffff00UL

/* bit mapping of spi access control register */
#define SPI_ACCESS_CTRL_START	 			0x00000001UL
#define SPI_ACCESS_CTRL_DATA_ENABLE	 		0x00000008UL
#define SPI_ACCESS_CTRL_DATA_COUNT_MASK		0x000000f0UL

/* bit mapping of spi dma control register */
#define SPI_APB_DMA_DATA_COUNT	 			0x0003ffffUL
#define SPI_APB_DMA_START		 			0x01000000UL

/* bit mapping of spi interrupt register */
#define SPI_INTERRUPT_ENABLE				0x00000001UL
#define SPI_AHB_DMA_INTERRUPT_ENABLE		0x00000002UL
#define SPI_INTERRUPT_FINISH				0x00000100UL
#define SPI_AHB_DMA_FINISH					0x00000200UL

/* bit mapping of spi AHB DMA control register */
#define SPI_AHB_DMA_DATA_COUNT     			0x0003ffffUL
#define SPI_AHB_DMA_ENABLE	     			0x00200000UL
#define SPI_AHB_DMA_DIR_TO_DEV   			0x00000000UL
#define SPI_AHB_DMA_DIR_FROM_DEV 			0x00100000UL

#define APB_DMA_BASE_ADDR					0xfc0a0080UL

#define APB_DMA_CHA							0
#define APB_DMA_CHB							1
#define APB_DMA_CHC							2
#define APB_DMA_CHD							3

#define APB_DMA_SRC_ADDR_OFFSET				0x00
#define APB_DMA_DEST_ADDR_OFFSET			0x04
#define APB_DMA_COUNT_OFFSET				0x08
#define APB_DMA_CMD_OFFSET					0x0c

#define APB_DMA_CHA_BASE					(APB_DMA_BASE_ADDR + (APB_DMA_CHA * 16))
#define APB_DMA_CHB_BASE					(APB_DMA_BASE_ADDR + (APB_DMA_CHB * 16))
#define APB_DMA_CHC_BASE					(APB_DMA_BASE_ADDR + (APB_DMA_CHC * 16))
#define APB_DMA_CHD_BASE					(APB_DMA_BASE_ADDR + (APB_DMA_CHD * 16))

#define APB_DMA_CHA_SRC_ADDR_REG			(APB_DMA_CHA_BASE + APB_DMA_SRC_ADDR_OFFSET)
#define APB_DMA_CHA_DEST_ADDR_REG			(APB_DMA_CHA_BASE + APB_DMA_DEST_ADDR_OFFSET)
#define APB_DMA_CHA_COUNT_REG				(APB_DMA_CHA_BASE + APB_DMA_COUNT_OFFSET)
#define APB_DMA_CHA_CMD_REG					(APB_DMA_CHA_BASE + APB_DMA_CMD_OFFSET)

#define APB_DMA_CHB_SRC_ADDR_REG			(APB_DMA_CHB_BASE + APB_DMA_SRC_ADDR_OFFSET)
#define APB_DMA_CHB_DEST_ADDR_REG			(APB_DMA_CHB_BASE + APB_DMA_DEST_ADDR_OFFSET)
#define APB_DMA_CHB_COUNT_REG				(APB_DMA_CHB_BASE + APB_DMA_COUNT_OFFSET)
#define APB_DMA_CHB_CMD_REG					(APB_DMA_CHB_BASE + APB_DMA_CMD_OFFSET)

#define APB_DMA_CHC_SRC_ADDR_REG			(APB_DMA_CHC_BASE + APB_DMA_SRC_ADDR_OFFSET)
#define APB_DMA_CHC_DEST_ADDR_REG			(APB_DMA_CHC_BASE + APB_DMA_DEST_ADDR_OFFSET)
#define APB_DMA_CHC_COUNT_REG				(APB_DMA_CHC_BASE + APB_DMA_COUNT_OFFSET)
#define APB_DMA_CHC_CMD_REG					(APB_DMA_CHC_BASE + APB_DMA_CMD_OFFSET)

#define APB_DMA_CHD_SRC_ADDR_REG			(APB_DMA_CHD_BASE + APB_DMA_SRC_ADDR_OFFSET)
#define APB_DMA_CHD_DEST_ADDR_REG			(APB_DMA_CHD_BASE + APB_DMA_DEST_ADDR_OFFSET)
#define APB_DMA_CHD_COUNT_REG				(APB_DMA_CHD_BASE + APB_DMA_COUNT_OFFSET)
#define APB_DMA_CHD_CMD_REG					(APB_DMA_CHD_BASE + APB_DMA_CMD_OFFSET)

/* bit mapping of APB DMA register */
#define APB_DMA_DISABLE						0x00000000UL
#define APB_DMA_ENABLE						0x00000001UL
#define APB_DMA_FINISH_STATUS				0x00000002UL
#define APB_DMA_FINISH_INTR_ENABLE			0x00000004UL
#define APB_DMA_BURST_MODE					0x00000008UL
#define APB_DMA_ERR_RSP_STATUS				0x00000010UL
#define APB_DMA_ERR_RSP_INTR_ENABLE			0x00000020UL
#define APB_DMA_SRC_ADDR_BUS				0x00000040UL
#define APB_DMA_DEST_ADDR_BUS				0x00000080UL
#define APB_DMA_SRC_ADDR_INCR				0x00000700UL
#define APB_DMA_DEST_ADDR_INCR				0x00007000UL
#define APB_DMA_DATA_WIDTH					0x00300000UL
#define APB_DMA_REQ_SIGNAL_SEL				0x0f000000UL

#define APB_DMA_SRC_BURST_NO_INC			0x00000000UL
#define APB_DMA_SRC_BURST_INC_1				0x00000100UL
#define APB_DMA_SRC_BURST_INC_2				0x00000200UL
#define APB_DMA_SRC_BURST_INC_4				0x00000300UL
#define APB_DMA_SRC_BURST_DEC_1				0x00000500UL
#define APB_DMA_SRC_BURST_DEC_2				0x00000600UL
#define APB_DMA_SRC_BURST_DEC_4				0x00000700UL

#define APB_DMA_DST_BURST_NO_INC			0x00000000UL
#define APB_DMA_DST_BURST_INC_1				0x00001000UL
#define APB_DMA_DST_BURST_INC_2				0x00002000UL
#define APB_DMA_DST_BURST_INC_4				0x00003000UL
#define APB_DMA_DST_BURST_DEC_1				0x00005000UL
#define APB_DMA_DST_BURST_DEC_2				0x00006000UL
#define APB_DMA_DST_BURST_DEC_4				0x00007000UL

#define APB_DMA_SRC_ADDR_APB_BUS			0x00000000UL
#define APB_DMA_SRC_ADDR_AHB_BUS			0x00000040UL
#define APB_DMA_DEST_ADDR_APB_BUS			0x00000000UL
#define APB_DMA_DEST_ADDR_AHB_BUS			0x00000080UL

#define APB_DMA_DATA_WIDTH_WORD				0x00000000UL
#define APB_DMA_DATA_WIDTH_HWORD			0x00100000UL
#define APB_DMA_DATA_WIDTH_BYTE				0x00200000UL

#define APB_DMA_REQ_SIGNAL_NO				0x00000000UL
#define APB_DMA_REQ_SIGNAL_PB				0x01000000UL
#define APB_DMA_REQ_SIGNAL_SDMMC			0x02000000UL
#define APB_DMA_REQ_SIGNAL_CF				0x03000000UL
#define APB_DMA_REQ_SIGNAL_SMC				0x04000000UL
#define APB_DMA_REQ_SIGNAL_USB				0x05000000UL
#define APB_DMA_REQ_SIGNAL_SDIO				0x05000000UL
#define APB_DMA_REQ_SIGNAL_AUDIO			0x06000000UL
#define APB_DMA_REQ_SIGNAL_SPDIF			0x06000000UL
#define APB_DMA_REQ_SIGNAL_MSPRO			0x07000000UL
#define APB_DMA_REQ_SIGNAL_SPI				0x09000000UL

#endif /* __ARCH_SPI_H_ */