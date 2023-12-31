/**
 * @file ui_animation_helpers.h
 * Helpers for ui_animations. Contains callbacks for color and opacity changes for each style.
 */
#ifndef _UI_ANIMATION_HELPERS_H
#define _UI_ANIMATION_HELPERS_H

#include "../ui.h"

#define ANIM_DURATION_1000MS 1000
#define ANIM_DURATION_750MS 750
#define ANIM_DURATION_500MS 500
#define ANIM_DURATION_250MS 250
#define ANIM_DURATION_100MS 100

#define ANIM_MAX_VALUE 500
#define ANIM_SHAKE_REPETITIONS 10

#define ICON_X_CENTER 88
#define ICON_Y_CENTER 28
#define ICON_X_TOPLEFT -8
#define ICON_Y_TOPLEFT -8

int32_t _ui_getColorLerpAtStep(int32_t initial_color, int32_t final_color, int curr_step);
void _ui_anim_callback_set_color_green(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_color_red(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_color_black(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text48_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text40_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text30_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text30KP_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text18_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text18top_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_text_opacity(lv_obj_t *obj, lv_anim_value_t value);
void _ui_anim_callback_set_keypad_opacity(lv_obj_t *obj, lv_anim_value_t value);

#endif /* _UI_ANIMATION_HELPERS_H */