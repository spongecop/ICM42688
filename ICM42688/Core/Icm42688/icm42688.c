#include "icm42688.h"

#include "spi.h"

void imu_write_reg(uint8_t address, uint8_t data) {
    ICM42688_NSS_LOW();
    uint8_t txdata[2];
    txdata[0] = address & 0x7f;
    txdata[1] = data;
    HAL_SPI_Transmit_DMA(&hspi1, txdata, 2);
    ICM42688_NSS_HIGH();
}

void icm42688_init(void) {}