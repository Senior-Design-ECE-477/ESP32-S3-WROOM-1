#include "esp_log.h"                    // Logging ESP debugging
#include "driver/gpio.h"                // For powering the motor
#include "freertos/FreeRTOS.h"
#include "pinout.h"

void motor_unlock();
void motor_lock();
void motor_off();
