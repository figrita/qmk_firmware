
#include "ortho75.h"

#define MEDIA_KEY_DELAY 10

uint8_t layer = 0;

uint32_t layer_state_set_kb(uint32_t state) {
  state = layer_state_set_user(state);
  layer = biton32(state);
  return state;
}


