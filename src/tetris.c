#include "tetris.h"
#include <string.h>

static uint8_t board[BOARD_HEIGHT][BOARD_WIDTH];

void tetris_init(void) {
    memset(board, 0, sizeof(board));
}

void tetris_update(void) {
    /* TODO: implement game logic */
}

void tetris_handle_input(uint8_t buttons) {
    /* TODO: handle buttons for moving/rotating tetromino */
}

const uint8_t *tetris_get_board(void) {
    return (const uint8_t *)board;
}
