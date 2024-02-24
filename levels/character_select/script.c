#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/area.h"
#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/character_select/header.h"

const LevelScript level_main_character_select_entry_file_select[] = {
    INIT_LEVEL(),
    LOAD_GODDARD(),
    LOAD_LEVEL_DATA(character_select),
    LOAD_BEHAVIOR_DATA(),
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_yeah),
    END_AREA(),

    FREE_LEVEL_POOL(),
    LOAD_AREA(/*area*/ 1),\
    SET_MENU_MUSIC(/*seq*/ SEQ_MENU_FILE_SELECT),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0xFF, 0xFF, 0xFF),
    GET_OR_SET(/*op*/ OP_SET, /*var*/ VAR_CURR_SAVE_FILE_NUM),
    STOP_MUSIC(/*fadeOutTime*/ 0x00BE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0xFF, 0xFF, 0xFF),
    SLEEP(/*frames*/ 16),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    SET_REG(/*value*/ START_LEVEL),
};

const LevelScript level_main_character_select_entry_act_select_exit[] = {
    EXIT(),
};
