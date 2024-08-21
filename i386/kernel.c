#include <stdint.h>
#include "vga.h"

extern void main(){
    enum VGA_colors {
        BLACK = 0x0,
        BLUE = 0x1,
        GREEN = 0x2,
        CYAN = 0x3,
        RED = 0x4,
        MAGENTA = 0x5,
        BROWN = 0x6,
        LIGHT_GRAY = 0x7,
        DARK_GRAY = 0x8,
        LIGHT_BLUE = 0x9,
        LIGHT_GREEN = 0xA,
        LIGHT_CYAN = 0xB,
        LIGHT_RED = 0xC,
        LIGHT_MAGENTA = 0xD,
        YELLOW = 0xE,
        WHITE = 0xF
    };
    VGA_print_str(0x0f, "kkOS 32-bit", 0);
    return;
}