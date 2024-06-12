

#pragma once

// Keep default crazy number of layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 3

#define RGB_MATRIX_KEYPRESSES  // reacts to keypresses
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR

#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)