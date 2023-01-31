// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Chart;
lv_obj_t *ui_tempSlider;
lv_obj_t *ui_humiSlider;
lv_obj_t *ui_nameLabel;

lv_chart_series_t *temp_point;
lv_chart_series_t *humi_point;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
#error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Chart = lv_chart_create(ui_Screen1);
    lv_obj_set_width(ui_Chart, 800);
    lv_obj_set_height(ui_Chart, 400);
    lv_obj_set_align(ui_Chart, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_Chart, LV_CHART_AXIS_PRIMARY_Y, -20, 60);
    lv_chart_set_range(ui_Chart, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui_Chart, LV_CHART_AXIS_PRIMARY_X, 10, 5, 10, 2, true, 50);
    lv_chart_set_axis_tick(ui_Chart, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 9, 5, true, 50);
    lv_chart_set_axis_tick(ui_Chart, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 11, 5, true, 50);

    // ���ӱ���Ԫ��
    temp_point = lv_chart_add_series(ui_Chart, lv_color_make(200, 60, 100), LV_CHART_AXIS_PRIMARY_Y);
    humi_point = lv_chart_add_series(ui_Chart, lv_color_make(100, 60, 220), LV_CHART_AXIS_SECONDARY_Y);

    ui_tempSlider = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_tempSlider, -20, 60);
    lv_slider_set_value(ui_tempSlider, 0, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_tempSlider) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_tempSlider, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_tempSlider, 10);
    lv_obj_set_height(ui_tempSlider, 390);
    lv_obj_set_x(ui_tempSlider, -395);
    lv_obj_set_y(ui_tempSlider, 0);
    lv_obj_set_align(ui_tempSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_tempSlider, lv_color_hex(0xC8C8C8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_tempSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_clear_flag(ui_tempSlider, LV_OBJ_FLAG_CLICKABLE);

    lv_obj_set_style_bg_color(ui_tempSlider, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_tempSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_tempSlider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_tempSlider, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_tempSlider, lv_color_hex(0xFF0000), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_tempSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_tempSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_tempSlider, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_humiSlider = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_humiSlider, 0, 100);

    lv_slider_set_value(ui_humiSlider, 0, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_humiSlider) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_humiSlider, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_humiSlider, 10);
    lv_obj_set_height(ui_humiSlider, 390);
    lv_obj_set_x(ui_humiSlider, 395);
    lv_obj_set_y(ui_humiSlider, 0);
    lv_obj_set_align(ui_humiSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_humiSlider, lv_color_hex(0xC8C8C8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_humiSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_clear_flag(ui_humiSlider, LV_OBJ_FLAG_CLICKABLE);

    lv_obj_set_style_bg_color(ui_humiSlider, lv_color_hex(0x0000FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_humiSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_humiSlider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_humiSlider, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_humiSlider, lv_color_hex(0x0000FF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_humiSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_humiSlider, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_humiSlider, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_nameLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_nameLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_nameLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_nameLabel, 0);
    lv_obj_set_y(ui_nameLabel, -250);
    lv_obj_set_align(ui_nameLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_nameLabel, "Temperature and humidity monitoring system");
    lv_obj_set_style_text_color(ui_nameLabel, lv_color_hex(0x7D88BF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_nameLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_nameLabel, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
