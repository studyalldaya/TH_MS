// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Chart;
extern lv_obj_t * ui_tempSlider;
extern lv_obj_t * ui_humiSlider;
extern lv_obj_t* ui_nameLabel;


extern lv_chart_series_t* temp_point;
extern lv_chart_series_t* humi_point;






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
