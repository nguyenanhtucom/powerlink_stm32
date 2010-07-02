#ifndef SYS_SRAM_H
#define SYS_SRAM_H


#define SYS_SRAM_DMA_START        MCF_MBAR + 0x10000
#define SYS_SRAM_DMA_SIZE         8192
#define SYS_SRAM_FEC_START        SYS_SRAM_DMA_START + SYS_SRAM_DMA_SIZE
#define SYS_SRAM_FEC_SIZE         2048
#define SYS_SRAM_SEC_START        SYS_SRAM_FEC_START + SYS_SRAM_FEC_SIZE
#define SYS_SRAM_SEC_SIZE         1280

#endif /* SYS_SRAM_H */
