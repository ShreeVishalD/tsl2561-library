#ifndef TSL2561_H
#define TSL2561_H

#include "pico/stdlib.h"
#include "hardware/spi.h"

// TSL2561 SPI Address and Register Definitions
#define TSL2561_ADDR 0x39 // Default I2C address for TSL2561
#define TSL2561_COMMAND_REG 0x80
#define TSL2561_CONTROL_REG 0x00
#define TSL2561_DATA_REG 0x0C
#define TSL2561_TIMING_REG 0x01

// TSL2561 control commands
#define TSL2561_POWER_ON 0x03
#define TSL2561_POWER_OFF 0x00

// Function prototypes
void tsl2561_init(spi_inst_t *spi, uint8_t cs_pin);
void tsl2561_power_on();
void tsl2561_power_off();
uint32_t tsl2561_read_data();
uint8_t tsl2561_read_register(uint8_t reg);
void tsl2561_write_register(uint8_t reg, uint8_t value);
void tsl2561_set_timing(uint8_t timing);

#endif // TSL2561_H
