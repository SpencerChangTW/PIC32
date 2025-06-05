#include "tetris.h"
#include "led_matrix.h"
#include "button.h"

int main(void) {
    system_init();
    led_matrix_init();
    button_init();
    tetris_init();

    while (1) {
        tetris_update();
        led_matrix_draw(tetris_get_board());
        tetris_handle_input(button_get_state());
    }
    return 0;
}
