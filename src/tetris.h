#ifndef TETRIS_H
#define TETRIS_H

#include <stdint.h>

#define BOARD_WIDTH 8
#define BOARD_HEIGHT 16

void tetris_init(void);
void tetris_update(void);
void tetris_handle_input(uint8_t buttons);
const uint8_t *tetris_get_board(void);

#endif /* TETRIS_H */
