#include <eadk.h>

const char eadk_app_name[] __attribute__((section(".rodata.eadk_app_name"))) = "ChargeMe";
const uint32_t eadk_api_level  __attribute__((section(".rodata.eadk_api_level"))) = 0;

int height = EADK_SCREEN_HEIGHT; 
int width = EADK_SCREEN_WIDTH;

int main(int argc, char *argv[]) {
  eadk_display_push_rect_uniform((eadk_rect_t){0, 0, width, height}, eadk_color_black);
  eadk_backlight_set_brightness(1);
  eadk_display_draw_string("La calculatrice est allumer.",(eadk_point_t){0, 0}, false, eadk_color_white, eadk_color_black);
  //eadk_display_draw_string("The calculator is ON.",(eadk_point_t){0, 0}, false, eadk_color_white, eadk_color_black);
  while (1) {
    eadk_timing_msleep(100);
  }
}
