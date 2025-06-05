#ifndef LED_MATRIX_H
#define LED_MATRIX_H

#include <stdint.h>

void led_matrix_init(void);
void led_matrix_draw(const uint8_t *board);

#endif /* LED_MATRIX_H */
