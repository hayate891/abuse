#ifndef __ID_HPP_
#define __ID_HPP_

enum dev_ids
{      
        ID_NULL,

 	DEV_COMMAND=3050,

	ID_LOAD_GAME_NUMBER=3000,
	ID_LOAD_GAME_PREVIEW=3100,
	ID_LOAD_PLAYER_GAME=3200,

	DEV_COMMAND_OK,
	DEV_EDIT_FG,
	DEV_EDIT_BG,
	DEV_EDIT_FGBG,
	DEV_PLAY,
	DEV_SAVE,
	DEV_QUIT,
	DEV_CREATE,
        DEV_OEDIT_OK,
	DEV_OEDIT_DELETE,
	DEV_OEDIT_MOVE,
	DEV_OEDIT_FRONT,
	DEV_OEDIT_BACK,
	DEV_OEDIT_TYPE,
	DEV_OEDIT_LEFT,
	DEV_OEDIT_RIGHT,
	DEV_OEDIT_CHAR_BOX,
	DEV_OEDIT_COPY,       
	DEV_OEDIT_STATE,

	DEV_LEDIT_OK,
	DEV_LEDIT_COPY,
	DEV_LEDIT_DEL,
	DEV_LEDIT_MOVE,
	DEV_LEDIT_W,
	DEV_LEDIT_H,
	DEV_LEDIT_R1,
	DEV_LEDIT_R2,
	

	DEV_MUSIC_PICKLIST,
	DEV_PALETTE,
	DEV_LIGHT_BUTTON_BOX,
	DEV_LIGHT0,
	DEV_LIGHT1,
	DEV_LIGHT2,
	DEV_LIGHT3,
	DEV_LIGHT4,
	DEV_LIGHT5,
	DEV_LIGHT6,
	DEV_LIGHT7,
	DEV_LIGHT8,
	DEV_LIGHT9,
	DEV_AMBIENT,
	DEV_LIGHTW,
	DEV_LIGHTH,
	DEV_LIGHTR1,
	DEV_LIGHTR2,
	DEV_LIGHT_ADD,
	DEV_BG_PICKER,
	DEV_FG_PICKER,
	DEV_CHAR_PICKER,
	DEV_OBJECTS_DELETE,
	DEV_LIGHTS_DELETE,
	DEV_OEDIT_AI,
	DEV_AI_OK,
	DEV_AI_XVEL,
	DEV_AI_YVEL,
	DEV_AI_XACEL,
	DEV_AI_YACEL,
	DEV_AI_STTIME,
	DEV_AI_GRAVITY,
	DEV_AI_HEALTH,
	DEV_AI_MORPHPR,
	DEV_AI_TYPE,
	DEV_AI_STATE,
	DEV_AI_FADE,


	DO_VOLUME,
	RAISE_SFX,
	LOWER_SFX,
	RAISE_MUSIC,
	LOWER_MUSIC,
	TOP_MENU,
        CALB_JOY,
	ID_KEY_SETUP,
	ID_MOUSE_SETUP,
	JOY_OK,
	ORDER_INFO,
	DEV_NULL,
	PICK_MUSIC,
	TOGGLE_FORETILES,
	TOGGLE_BACKTILES,
	TOGGLE_PALETTES,
	SHOW_FOREGROUND,
	SHOW_FOREGROUND_BOUND,
	SHOW_BACKGROUND,
	SHOW_CHARACTERS,
	SHOW_LIGHT,

	SENSOR_XRANGE,
	SENSOR_YRANGE,
	SENSOR_SIGNAL,
	SENSOR_ACTIVATE,

	ELCONTROL_ALLOW_DIR,
	ELEVATOR_SPEED,
	ELEVATOR_DIR,
	ELEVATOR_DIRECTION,
	CHAR_SELECT,

	ID_MODEM,
	ID_TCPIP,
	ID_IPX,
	ID_SPLIT_SCREEN,
	
	ID_VOLUME,
	ID_SFX_UP,
	ID_SFX_DOWN,
	ID_MUSIC_UP,
	ID_MUSIC_DOWN,
	ID_SFX_OFF,
	ID_MUSIC_OFF,
	ID_SFX_CHANNELS,
	
	ID_LIGHT_DETAIL,
	ID_SCREEN_SIZE,

	ID_NEW_GAME,
	ID_DIFFICULTY,
	ID_LOAD_GAME,
	ID_QUIT,
	ID_QUIT_OK,
	ID_RETURN,
	ID_SHOW_SELL,
	ID_NETWORKING,
	
	ID_MACCONF,
	ID_MACKEYS,


	ID_MESS_STR1,
	ID_MESS_STR2,
	ID_MESS_STR3,
	ID_MESS_STR4,
	ID_LEVEL_LOAD,
	ID_LEVEL_LOAD_OK,
	ID_LEVEL_SAVE,
	ID_LEVEL_SAVEAS,
	ID_LEVEL_SAVEAS_OK,
	ID_GAME_SAVE,
	ID_GAME_LOAD,
	ID_LEVEL_RESIZE,
	ID_LEVEL_RESIZE_OK,
	ID_LEVEL_NEW,
	ID_LEVEL_NEW_OK,


	ID_CACHE_PROFILE,
	ID_CACHE_PROFILE_END,
	ID_EDIT_SAVE,

	ID_SUSPEND,
	ID_PLAY_MODE,
	ID_SET_SCROLL,
	ID_SET_SCROLL_OK,
	ID_CENTER_PLAYER,
	ID_ADD_PALETTE,
	ID_ADD_PALETTE_OK,
	ID_TOGGLE_DELAY,
	ID_SMALL_MODE,
	ID_GOD_MODE,
	ID_CLEAR_WEAPONS,
	ID_TOGGLE_LIGHT,
	ID_TOGGLE_MAP,
	ID_PROFILE,

	ID_MOUSE_SCROLL,
	ID_LOCK_PALETTES,
	ID_SEARCH,
	ID_SEARCH_FOREWARD,
	ID_SEARCH_BACKWARD,
	ID_SEARCH_TEXT,
	ID_TOGGLE_NAMES,
	ID_WARN_CANCEL,
	ID_SET_SCROLL_CHECK,

	ID_WIN_FORE,
	ID_WIN_BACK,
	ID_WIN_LAYERS,
	ID_WIN_LIGHTING,
	ID_WIN_PALETTES,
	ID_WIN_OBJECTS,
	ID_WIN_CONSOLE,
	ID_WIN_TOOLBAR,
	ID_SAVE_WINDOWS,
	ID_CANCEL,
	ID_SETUP_OK,
	ID_SETUP_DETECT,

	ID_INTERPOLATE_DRAW,
	ID_DISABLE_AUTOLIGHT,

	ID_DMODE_DRAW,
	ID_DMODE_PICK,
	ID_DMODE_FILL,
	ID_DMODE_LINE,
	ID_DMODE_RECT,
	ID_DMODE_BAR,
	ID_DMODE_AREA,
	DEV_AREA_OK,
	DEV_AREA_DELETE,
	DEV_AREA_AMBIENT,
	DEV_AREA_AMBIENT_SPEED,
	DEV_AREA_VIEW_XOFF,
	DEV_AREA_VIEW_YOFF,
	DEV_AREA_VIEW_XOFF_SPEED,
	DEV_AREA_VIEW_YOFF_SPEED,
	
	ID_START_GAME,
	ID_EASY,
	ID_MEDIUM,
	ID_HARD,
	ID_EXTREME,
	ID_LIGHT_ON,
	ID_LIGHT_OFF,
	ID_SHOW_FPS,
	ID_RAISE_ALL,
	SHOW_LINKS,
	
	ID_RED_PICKER,
	ID_GREEN_PICKER,
	ID_BLUE_PICKER,
	ID_GAMMA_OK,
	ID_ENLARGE_RENDER,
	ID_NET_DISCONNECT,

	ID_DISABLE_VIEW_SHIFT,
	ID_RECORD_DEMO,
	ID_RECORD_DEMO_OK,
	ID_RECORD_DEMO_FILENAME,

	ID_PLAY_DEMO,
	ID_PLAY_DEMO_OK,
	ID_PLAY_DEMO_FILENAME
	
	
};


#define EDIT_MODE               1
#define DRAW_FG_LAYER           2
#define DRAW_BG_LAYER           4
#define DRAW_PEOPLE_LAYER       8
#define DRAW_HELP_LAYER        16
#define PERFORMANCE_TEST_MODE  32
#define DRAW_LIGHTS            64
#define DRAW_FG_BOUND_LAYER   128
#define SUSPEND_MODE          256
#define MAP_MODE              512
#define DRAW_LINKS           1024

#endif


