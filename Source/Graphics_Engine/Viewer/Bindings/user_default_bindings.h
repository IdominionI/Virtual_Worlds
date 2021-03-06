#pragma once

// default Action id definitions

#define ACTION_TYPE_MOVEMENT_FORWARD  10
#define ACTION_TYPE_MOVEMENT_BACKWARD 11
#define ACTION_TYPE_MOVEMENT_LEFT     12
#define ACTION_TYPE_MOVEMENT_RIGHT    13
#define ACTION_TYPE_MOVEMENT_UP       14
#define ACTION_TYPE_MOVEMENT_DOWN     15
#define ACTION_TYPE_ROLL_LEFT         16
#define ACTION_TYPE_ROLL_RIGHT        17

#define ACTION_TYPE_EXIT_VIEWER         100
#define ACTION_TYPE_DRAW_AXIS		    101
#define ACTION_TYPE_DRAW_GRID		    102
#define ACTION_TYPE_DRAW_XY_GRID		103
#define ACTION_TYPE_DRAW_XZ_GRID		104
#define ACTION_TYPE_DRAW_YZ_GRID		105
#define ACTION_TYPE_DISPLAY_FPS	        106
#define ACTION_TYPE_ENABLE_TEXT		    107
#define ACTION_TYPE_SAVE_SCREENSHOT     108
#define ACTION_TYPE_ANIMATION		    109
#define ACTION_TYPE_TOGGLE_FIRST_PERSON 110
#define ACTION_TYPE_DISPLAY_CAMERA_INFO 111
#define ACTION_TYPE_DISPLAY_CROSS_HAIRS 112

#define ACTION_TYPE_CAMERA_LOOK             200
#define ACTION_TYPE_CAMERA_ROLL             201
#define ACTION_TYPE_CAMERA_ROTATE           202
#define ACTION_TYPE_CAMERA_ZOOM             203
#define ACTION_TYPE_CAMERA_TRANSLATE        204
#define ACTION_TYPE_CAMERA_SCREEN_ROTATE    205
#define ACTION_TYPE_CAMERA_SCREEN_TRANSLATE 206
#define ACTION_TYPE_CAMERA_REGION_ZOOM      207
#define ACTION_TYPE_CAMERA_ALIGN_XY_PLANE   210
#define ACTION_TYPE_CAMERA_ALIGN_XZ_PLANE   211
#define ACTION_TYPE_CAMERA_ALIGN_YZ_PLANE   212

#define ACTION_TYPE_FRAME_ROTATE            300
#define ACTION_TYPE_FRAME_ZOOM              301
#define ACTION_TYPE_FRAME_TRANSLATE         302
#define ACTION_TYPE_FRAME_SCREEN_ROTATE     303
#define ACTION_TYPE_FRAME_SCREEN_TRANSLATE  304
#define ACTION_TYPE_FRAME_REGION_ZOOM       305

#define ACTION_TYPE_ALIGN_CAMERA      50
#define ACTION_TYPE_ALIGN_FRAME       51
#define ACTION_TYPE_CENTER_FRAME      52
#define ACTION_TYPE_CENTER_SCENE      53
#define ACTION_TYPE_SELECT            54
#define ACTION_TYPE_RAP_FROM_PIXEL    55
#define ACTION_TYPE_RAP_IS_CENTER     56
#define ACTION_TYPE_SHOW_ENTIRE_SCENE 57
#define ACTION_TYPE_ZOOM_ON_PIXEL     58
#define ACTION_TYPE_ZOOM_TO_FIT       59

#define NO_KEY          0
#define NO_MODIFIER     0
#define NO_EVENT_SOURCE 0
#define NO_BUTTON       0


// default bindings - Keybaord
#define KEY_TOGGLE_FIRST_PERSON	GLFW_KEY_T

#define KEY_EXIT_VIEWER         GLFW_KEY_ESCAPE
#define KEY_DRAW_AXIS			GLFW_KEY_A
#define KEY_DRAW_GRID			GLFW_KEY_G
#define KEY_DISPLAY_FPS			GLFW_KEY_F
#define KEY_DISPLAY_CAMERA_INFO GLFW_KEY_C
#define KEY_DISPLAY_CROSS_HAIRS	GLFW_KEY_X
#define KEY_ENABLE_TEXT			GLFW_KEY_SLASH
#define KEY_SAVE_SCREENSHOT		GLFW_KEY_S

#define KEY_MOVEMENT_FORWARD	GLFW_KEY_KP_8 
#define KEY_MOVEMENT_BACKWARD	GLFW_KEY_KP_2 
#define KEY_MOVEMENT_LEFT		GLFW_KEY_KP_4 
#define KEY_MOVEMENT_RIGHT		GLFW_KEY_KP_6 
#define KEY_MOVEMENT_UP			GLFW_KEY_UP
#define KEY_MOVEMENT_DOWN		GLFW_KEY_DOWN

#define KEY_ROLL_LEFT           GLFW_KEY_LEFT
#define KEY_ROLL_RIGHT          GLFW_KEY_RIGHT

#define KEY_CAMERA_ROLL		    GLFW_KEY_R
#define KEY_CAMERA_ALIGN_PLANE  GLFW_KEY_MINUS


