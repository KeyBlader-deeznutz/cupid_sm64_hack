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
#include "levels/thi/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_thi_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, thi_geo_0005F0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, thi_area_1),
		WARP_NODE(0xC1, LEVEL_THI, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_THI, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_THI, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xC2, LEVEL_BITDW, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2159, -4598, -2317, 0, -90, 0, 0x00C20000, bhvWarp),
		OBJECT(MODEL_NONE, -1873, 3593, -1862, 0, -90, 0, 0x40C20000, bhvWarp),
		OBJECT(MODEL_NONE, -1564, 3593, -1862, 0, -90, 0, 0x40C20000, bhvWarp),
		OBJECT(MODEL_GOOMBA, 28, -4204, -37, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 1623, -2749, 1267, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 3398, -2417, 324, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 4504, -843, -2261, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 5308, -889, 429, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 3032, -116, -4723, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 268, -116, -6084, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_Move, -4080, -229, -7419, 0, 0, 0, 0x00000000, bhvMoveSide),
		OBJECT(MODEL_GOOMBA, -10691, 2502, -1746, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -8713, 2344, 1486, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -6316, 2344, 2952, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 2433, -4000, -280, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 651, -3389, 988, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 4947, -2193, 601, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 6254, -880, -924, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 3594, -66, -3931, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -11145, 2502, -194, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -10234, 2502, 1342, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -9782, 2502, 182, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -8949, 2502, 2608, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -5430, 2502, 2283, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -5358, 2617, 4224, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -3087, 2617, 4054, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -1419, 2987, 3536, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -2480, 2987, 1360, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -59, -116, -4169, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -545, -116, -3829, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -246, -116, -4684, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_Move, 6573, -1957, 827, 0, -32, 0, 0x00000000, bhvMove),
		OBJECT(MODEL_Move, -4080, -229, -3230, 0, 0, 0, 0x00000000, bhvMoveSide),
		OBJECT(MODEL_GOOMBA, -9947, 1321, -6066, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_NONE, -3341, -4475, -54, 0, 0, 0, 0x00C10000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -3341, -4484, -54),
		TERRAIN(thi_area_1_collision),
		MACRO_OBJECTS(thi_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_FOREST),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3341, -4484, -54),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
