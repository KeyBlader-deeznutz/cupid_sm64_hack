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
#include "levels/bitdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, geo_bitdw_0003C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, geo_bitdw_0003D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, geo_bitdw_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, geo_bitdw_000408), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, geo_bitdw_000420), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, geo_bitdw_000438), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, geo_bitdw_000450), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, geo_bitdw_000468), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, geo_bitdw_000480), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, geo_bitdw_000498), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, geo_bitdw_0004B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, geo_bitdw_0004C8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, geo_bitdw_0004E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, geo_bitdw_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, geo_bitdw_000510), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM, geo_bitdw_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM, geo_bitdw_000540), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM, geo_bitdw_000528), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM, geo_bitdw_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4, geo_bitdw_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3, geo_bitdw_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2, geo_bitdw_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1, geo_bitdw_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE, geo_bitdw_000600), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bitdw_area_1),
		WARP_NODE(0xC1, LEVEL_BITDW, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BITDW, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BITDW, 0x01, 0xC1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1A, LEVEL_ENDING, 0x01, 0x10, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AMP, -2119, -3121, 2576, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -1201, -2957, -14478, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -1201, -3248, 1536, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_BLACK_BOBOMB, 2174, -8451, -5558, 0, -90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, 1279, -8451, -4576, 0, 90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, 2174, -8451, -3270, 0, -90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, 1279, -8451, -2288, 0, 90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, 2174, -8451, -555, 0, -90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, 1279, -8451, 427, 0, 90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, -248, -3044, -20939, 0, -90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_BLACK_BOBOMB, -2710, -3044, -19957, 0, 90, 0, 0x00000000, bhvBouncingFireball),
		OBJECT(MODEL_AMP, 1701, -8503, -4928, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_AMP, 1701, -8503, -2640, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_AMP, 1701, -8503, 75, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, 1685, -8577, -7415, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, 1673, -5605, 4163, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, 2159, -3969, 11122, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, -3675, -3264, 2810, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, -1382, -3264, 2716, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, -2673, -2978, -22107, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, -1382, -2972, -13298, 0, -180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BLACK_BOBOMB, 1661, -5179, 8624, -90, -180, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_BLACK_BOBOMB, 1655, -5547, 5825, -90, -180, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_BLACK_BOBOMB, 1904, -5547, 6501, 118, -27, 102, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_GOOMBA, 1894, -8503, -3886, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1939, -8580, -7630, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -331, -2982, -15207, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2000, -8503, -10875, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_BLACK_BOBOMB, 1691, -8503, -10484, -90, 0, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_GOOMBA, -1345, -2982, -16824, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3091, -3460, -4386, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1330, -3457, 8509, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2082, -6929, 5180, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1558, -5167, 8143, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1716, -4477, 10126, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1728, -6915, 4316, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1884, -5590, 5371, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1418, -5590, 3362, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1474, -5564, 4766, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3081, -3043, 3030, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2079, -3043, -21887, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5149, -2463, -22889, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -9176, -2978, -23337, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -11630, -2978, -22911, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -13122, -2978, -23759, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -11255, -2978, -23337, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -13709, -2978, -22911, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -15201, -2978, -23759, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1569, -5564, 7019, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1521, -6992, 5469, -90, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_Move, 1651, -8749, -12057, 0, 0, 0, 0x00000000, bhvMoveSidey),
		OBJECT(MODEL_Move, 1651, -8749, -8903, 0, 0, 0, 0x00000000, bhvMoveSidey),
		OBJECT(MODEL_Move, 1696, -8463, 1948, 0, 0, 0, 0x00000000, bhvMove),
		OBJECT(MODEL_Move, 668, -6997, 4812, 0, 0, 0, 0x00000000, bhvMove),
		OBJECT(MODEL_Move, -2624, -3396, -6369, 0, 0, 0, 0x00000000, bhvMoveSidey),
		OBJECT(MODEL_Move, -2146, -3245, -8880, 0, 0, 0, 0x00000000, bhvMoveSide),
		OBJECT(MODEL_Move, -1532, -3183, -11931, 0, 0, 0, 0x00000000, bhvMoveSide),
		OBJECT(MODEL_NONE, 1085, -8037, -14409, 0, 0, 0, 0x00C10000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 1085, -8071, -14409),
		OBJECT(MODEL_NONE, -17458, -2953, -24150, 0, 0, 0, 0x401A0000, bhvWarp),
		OBJECT(MODEL_NONE, -17458, -2953, -23044, 0, 0, 0, 0x401A0000, bhvWarp),
		TERRAIN(bitdw_area_1_collision),
		MACRO_OBJECTS(bitdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_FACTORY),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 1085, -8071, -14409),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
