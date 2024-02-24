#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000000, bhvMario), 
	LUIGI(MODEL_LUIGI, 0x00000000, bhvLuigi), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE( 0x1E, LEVEL_CASTLE_GROUNDS,   0x01,   0x1E, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x14, LEVEL_CASTLE_GROUNDS,   0x01,   0x14, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x0A, LEVEL_CASTLE_GROUNDS,   0x01,   0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x08, LEVEL_CASTLE_GROUNDS,   0x01,   0x08, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x07, LEVEL_CASTLE_GROUNDS,   0x01,   0x07, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x06, LEVEL_CASTLE_GROUNDS,   0x01,   0x06, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x05, LEVEL_VCUTM,   0x01,   0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x04, LEVEL_CASTLE_GROUNDS,   0x01,   0x04, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x03, LEVEL_CASTLE_GROUNDS,   0x01,   0x03, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x02, LEVEL_CASTLE,   0x03,   0x02, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x01, LEVEL_CASTLE,   0x01,   0x01, WARP_NO_CHECKPOINT),
		WARP_NODE( 0x00, LEVEL_CASTLE,   0x01,   0x00, WARP_NO_CHECKPOINT),
		WARP_NODE( 0xF1, LEVEL_CASTLE_GROUNDS,   0x01,   0x03, WARP_NO_CHECKPOINT),
		OBJECT( MODEL_NONE, -5408, 4500, 3637, 0, 45, -180,   0x000A0000, bhvAirborneWarp),
		OBJECT( MODEL_NONE, 6901, 2376, -6509, 0, 50, -180,   0x00140000, bhvAirborneWarp),
		OBJECT( MODEL_NONE, 7430, 1500, -5937, 180, 0, 0,   0x00000000, bhvAmbientSounds),
		OBJECT( MODEL_BIRDS, 5069, 850, 3221, 180, 0, 0,   0x00010000, bhvBird),
		OBJECT( MODEL_BIRDS, 4711, 742, 433, 180, 0, 0,   0x00010000, bhvBird),
		OBJECT( MODEL_BIRDS, -5774, 913, -1114, 180, 0, 0,   0x00010000, bhvBird),
		OBJECT( MODEL_NONE, 7430, 1500, 873, 180, 0, 0,   0x00000000, bhvBirdsSoundLoop),
		OBJECT( MODEL_NONE, 80, 1500, 5004, 180, 0, 0,   0x00010000, bhvBirdsSoundLoop),
		OBJECT( MODEL_NONE, -7131, 1500, -2989, 180, 0, 0,   0x00020000, bhvBirdsSoundLoop),
		OBJECT( MODEL_BUTTERFLY, 4508, 406, 4400, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, 4408, 406, 4500, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, 4708, 406, 4100, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, 6003, 473, -2621, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, 6003, 473, -2321, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, -6543, 461, -617, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, -6143, 461, -617, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, -5773, 775, -5722, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, -5873, 775, -5622, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, -5473, 775, -5322, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, 1504, 326, 3196, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_BUTTERFLY, 1204, 326, 3296, 180, 0, 0,   0x00000000, bhvButterfly),
		OBJECT( MODEL_LAKITU, -11, 803, -3015, 180, 0, 0,   0x00010000, bhvCameraLakitu),
		OBJECT( MODEL_CASTLE_GROUNDS_FLAG, 3213, 3348, -3011, 180, 0, 0,   0x00000000, bhvCastleFlagWaving),
		OBJECT( MODEL_CASTLE_GROUNDS_FLAG, -3213, 3348, -3011, 180, 0, 0,   0x00000000, bhvCastleFlagWaving),
		OBJECT( MODEL_CASTLE_GROUNDS_FLAG, 3835, 3348, -6647, 180, 0, 0,   0x00000000, bhvCastleFlagWaving),
		OBJECT( MODEL_CASTLE_GROUNDS_FLAG, -3835, 3348, -6647, 180, 0, 0,   0x00000000, bhvCastleFlagWaving),
		OBJECT( MODEL_NONE, 0, 900, -1710, 0, 0, -180,   0x00030000, bhvDeathWarp),
		OBJECT( MODEL_EXCLAMATION_BOX, -13, 3476, -5646, 180, 0, 0,   0x00000000, bhvExclamationBox),
		OBJECT( MODEL_CASTLE_GROUNDS_CANNON_GRILL, 0, 0, 0, 180, 0, 0,   0x00000000, bhvHiddenAt120Stars),
		OBJECT( MODEL_NONE, 1328, 260, 4664, 0, 0, -180,   0x00280000, bhvIntroScene),
		OBJECT( MODEL_NONE, 3379, -500, -2025, 0, 0, -180,   0x00060000, bhvLaunchDeathWarp),
		OBJECT( MODEL_NONE, 3379, -500, -2025, 0, 0, -180,   0x00080000, bhvLaunchStarCollectWarp),
		OBJECT( MODEL_CASTLE_GROUNDS_VCUTM_GRILL, 0, 0, 0, 180, 0, 0,   0x00000000, bhvMoatGrills),
		MARIO_POS(0x01, 0, 1328, 260, 4664),
		MARIO_POS(0x01, 0, 1328, 260, 4664),
		OBJECT( MODEL_NONE, 3799, -1199, -5816, 180, 0, 0,   0x00070000, bhvSwimmingWarp),
		OBJECT( MODEL_NONE, -4997, -1250, 2258, 0, 30, -180,   0x001E0000, bhvSwimmingWarp),
		OBJECT( MODEL_BUTTERFLY, 6240, 295, 320, 180, 0, 0,   0x00000000, bhvTripletButterfly),
		OBJECT( MODEL_BUTTERFLY, -6330, 710, -3760, 180, 0, 0,   0x00000000, bhvTripletButterfly),
		OBJECT( MODEL_NONE, 3379, -815, -2025, 180, 0, 0,   0x3C050000, bhvWarp),
		OBJECT( MODEL_NONE, 5812, 100, -5937, 180, 0, 0,   0x00000000, bhvWaterfallSoundLoop),
		OBJECT( MODEL_MIST, 4878, -787, -5690, 180, 0, 0,   0x00000000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 4996, -787, -5548, 180, 0, 0,   0x00010000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5114, -787, -5406, 180, 0, 0,   0x00020000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5212, -787, -5219, 180, 0, 0,   0x00030000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5311, -787, -5033, 180, 0, 0,   0x00040000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5419, -787, -4895, 180, 0, 0,   0x00050000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5527, -787, -4757, 180, 0, 0,   0x00060000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5686, -787, -4733, 180, 0, 0,   0x00070000, bhvWaterMist2),
		OBJECT( MODEL_MIST, 5845, -787, -4710, 180, 0, 0,   0x00080000, bhvWaterMist2),
		OBJECT( MODEL_YOSHI, 0, 3174, -5625, 180, 0, 0,   0x00000000, bhvYoshi),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SOUND_PLAYER),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 1328, 260, 4664),
	LUIGI_POS(0x01, 0, 1328, 260, 4664),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
