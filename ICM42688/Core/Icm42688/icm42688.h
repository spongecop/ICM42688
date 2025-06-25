#ifndef __ICM42688_H__
#define __ICM42688_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "gpio.h"

#define ICM42688_NSS_LOW() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET)
#define ICM42688_NSS_HIGH() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET)

void imu_writebyte(uint8_t address, uint8_t data);
void icm42688_init(void);

#ifdef __cplusplus
}
#endif

#endif /* __ICM42688_H__ */