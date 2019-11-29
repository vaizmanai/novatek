#
# Include uitron related setting
#

include $(NVT_PRJCFG_MODEL_CFG)

C_DEFINE_EXT = -D_BOARD_DRAM_ADDR_=$(BOARD_DRAM_ADDR) \
				-D_BOARD_DRAM_SIZE_=$(BOARD_DRAM_SIZE) \
				-D_BOARD_SHMEM_ADDR_=$(BOARD_SHMEM_ADDR) \
				-D_BOARD_SHMEM_SIZE_=$(BOARD_SHMEM_SIZE) \
				-D_BOARD_LINUXTMP_ADDR_=$(BOARD_LINUXTMP_ADDR) \
				-D_BOARD_LINUXTMP_SIZE_=$(BOARD_LINUXTMP_SIZE) \
				-D_BOARD_UBOOT_ADDR_=$(BOARD_UBOOT_ADDR) \
				-D_BOARD_UBOOT_SIZE_=$(BOARD_UBOOT_SIZE) \
				-D_BOARD_RAMDISK_ADDR_=$(BOARD_RAMDISK_ADDR) \
				-D_BOARD_RAMDISK_SIZE_=$(BOARD_RAMDISK_SIZE) \
				-D_BOARD_LOADER_ADDR_=$(BOARD_LOADER_ADDR) \
				-D_BOARD_LOADER_SIZE_=$(BOARD_LOADER_SIZE) \
				-D_BOARD_EXTDRAM_ADDR_=$(BOARD_EXTDRAM_ADDR) \
				-D_BOARD_EXTDRAM_SIZE_=$(BOARD_EXTDRAM_SIZE) \
				-D_BOARD_LINUX_ADDR_=$(BOARD_LINUX_ADDR) \
				-D_BOARD_LINUX_SIZE_=$(BOARD_LINUX_SIZE) \
				-D_BIN_NAME_='"$(BIN_NAME)"' \
				-D_BIN_NAME_T_='"$(BIN_NAME_T)"' \
				-D_CHIP_$(CHIP)_ \
				-D_CHIP_NAME_='"NT$(CHIP)"' \
				-D_$(EMBMEM)_ \
				-D_EMBMEM_BLK_SIZE_=$(EMBMEM_BLK_SIZE) \
				-D_$(NVT_ROOTFS_TYPE)_ \
				-D_$(NVT_LINUX_SMP)_ \
				-D_$(NVT_UBOOT_ENV_IN_STORG_SUPPORT)_

PLATFORM_CPPFLAGS += $(C_DEFINE_EXT)
PLATFORM_CPPFLAGS += -DCONFIG_SYS_TEXT_BASE=$(BOARD_UBOOT_ADDR)
