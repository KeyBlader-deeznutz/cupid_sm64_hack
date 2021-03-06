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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CCM, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xA2, LEVEL_CCM, 0x01, 0xA2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xB2, LEVEL_THI, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1368, 6807, -309, 0, 0, 0, 0x30B20000, bhvWarp),
		OBJECT(MODEL_GOOMBA, -132, -1257, -1699, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 563, -1428, -1566, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -506, -1154, -1975, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -1930, -880, -1975, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -3755, -403, -1786, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -4228, 555, -755, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -1466, 555, -755, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, 912, 621, -755, 0, 0, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -2382, 1176, 1199, 0, 13, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -2079, 1662, 2745, 0, 13, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -1047, 1662, 2354, 0, 13, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_GOOMBA, -477, 1662, 2859, 0, 13, 0, 0x00000000, bhvFloomba),
		OBJECT(MODEL_Move, -4699, -583, -1695, 0, 0, 0, 0x00000000, bhvMove),
		OBJECT(MODEL_Move, 3106, 4781, 168, 0, 0, 0, 0x00000000, bhvMove),
		OBJECT(MODEL_Move, 2190, -1785, -1615, 0, -180, 0, 0x00000000, bhvMoveSidey),
		OBJECT(MODEL_Move, -966, 2563, 1307, 0, -180, 0, 0x00000000, bhvMoveSide),
		OBJECT(MODEL_Move, -2487, 2563, -1047, 0, -180, 0, 0x00000000, bhvMoveSidey),
		OBJECT(MODEL_Move, 3159, 4845, -2384, 0, -180, 0, 0x00000000, bhvMoveSidey),
		OBJECT(MODEL_NONE, 4011, -1928, 9, 0, -180, 0, 0x00A20000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 4011, -1929, 9),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_SNOW),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 4011, -1929, 9),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
