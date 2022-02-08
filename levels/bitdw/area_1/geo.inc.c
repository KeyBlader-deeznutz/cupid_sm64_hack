#include "src/game/envfx_snow.h"

const GeoLayout bitdw_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -12117, -3047, -23528, -180, 0, 0, bitdw_dl_carpet_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1717, -7823, -16990, bitdw_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -568, -5251, -4503, bitdw_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3912, -9910, -9507, bitdw_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1705, -5664, -1255, bitdw_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3912, -9910, -8536, bitdw_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3912, -9910, -7504, bitdw_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2491, -8951, -2661, 0, -180, 0, bitdw_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5689, -7568, 12684, bitdw_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7471, -7568, 12684, bitdw_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5716, -9306, -21033, bitdw_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3912, -9910, -10581, bitdw_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 247, -10556, -1861, 0, -90, 0, bitdw_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 247, -10556, -3968, 0, -90, 0, bitdw_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 247, -10193, -5016, 0, -90, 0, bitdw_dl_Cube_013_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -304, -9910, -7329, bitdw_dl_Cube_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 247, -10556, -2968, 0, -90, 0, bitdw_dl_Cube_015_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5689, -10393, -24497, bitdw_dl_Cube_016_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7539, -9306, -21033, bitdw_dl_Cube_017_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7566, -10393, -24497, bitdw_dl_Cube_018_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5716, -641, 16457, bitdw_dl_Cube_019_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1670, -8682, -7358, 0, -180, 0, bitdw_dl_Cube_020_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1670, -8682, -10564, 0, -180, 0, bitdw_dl_Cube_021_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1721, -10937, -6369, bitdw_dl_Cube_022_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 160, -9910, -8349, bitdw_dl_Cube_023_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1532, -9509, -14971, 0, -180, 0, bitdw_dl_Cube_024_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1928, -3252, -7867, 0, -180, 0, bitdw_dl_Cube_025_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2907, -10118, -2803, bitdw_dl_Cube_026_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5716, -7820, -2345, bitdw_dl_Cube_027_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5689, -8907, -5809, bitdw_dl_Cube_028_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7539, -7820, -2345, bitdw_dl_Cube_029_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7566, -8907, -5809, bitdw_dl_Cube_030_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -7539, -641, 16457, bitdw_dl_Cube_031_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8613, -1047, 16276, bitdw_dl_Cube_032_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -723, -3262, -10467, 0, -180, 0, bitdw_dl_Cube_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1699, -3278, -17585, 0, -180, 0, bitdw_dl_Cube_034_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11374, -2088, -795, 0, 90, 0, bitdw_dl_Cube_035_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13006, -2088, -6614, 0, -90, 0, bitdw_dl_Cube_036_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11469, -2180, -5814, 0, -180, 0, bitdw_dl_Cube_037_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13006, -2088, -1077, 0, -90, 0, bitdw_dl_Cube_038_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -10117, -2406, -26213, bitdw_dl_Cube_039_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -12117, -2406, -26213, bitdw_dl_Cube_040_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -14117, -2406, -26213, bitdw_dl_Cube_041_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -16117, -2406, -26213, bitdw_dl_Cube_042_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1300, -3703, 8280, 0, -180, 0, bitdw_dl_Cube_043_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3107, -9559, -11029, bitdw_dl_Cube_044_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 914, -8951, -2661, 0, -180, 0, bitdw_dl_Cube_045_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2762, -9397, 2929, bitdw_dl_Cube_048_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2742, -9704, 1915, bitdw_dl_Cube_049_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 495, -8437, 3993, 0, -90, 0, bitdw_dl_Cube_051_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1695, -5785, 5161, 0, -180, 0, bitdw_dl_Cube_052_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2993, -6454, 10678, bitdw_dl_Cube_053_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 4927, -1047, 16359, bitdw_dl_Cube_054_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -117, -3829, 12752, 0, -180, 0, bitdw_dl_Cube_055_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2318, -3415, 2719, 0, -180, 0, bitdw_dl_Cube_056_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3376, -3699, -3893, -3, 165, -10, bitdw_dl_Cube_058_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4394, -2147, -698, 0, -180, 60, bitdw_dl_Cube_059_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5864, -2147, -698, 0, 0, 60, bitdw_dl_Cube_060_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5053, -1388, -719, 0, -180, 0, bitdw_dl_Cube_061_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1242, -3165, -15219, 0, -180, 0, bitdw_dl_Cube_063_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4394, -2147, 11474, 0, -180, 60, bitdw_dl_Cube_064_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5864, -2147, 11474, 0, 0, 60, bitdw_dl_Cube_065_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4394, -2147, -10124, 0, -180, 60, bitdw_dl_Cube_066_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5864, -2147, -10124, 0, 0, 60, bitdw_dl_Cube_067_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3173, -10924, 5130, -1, -102, -8, bitdw_dl_Cube_068_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5622, -10924, 1453, -1, -22, -8, bitdw_dl_Cube_069_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 9837, -2180, -1595, bitdw_dl_Cube_070_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11374, -2088, -6333, 0, 90, 0, bitdw_dl_Cube_071_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -15608, -1792, -23533, bitdw_dl_Cube_072_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bitdw_dl_Cube_072_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 9837, -2180, -7132, bitdw_dl_Cube_073_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11374, -2088, -11439, 0, 90, 0, bitdw_dl_Cube_074_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 9837, -2180, -12239, bitdw_dl_Cube_075_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11374, -2088, 6073, 0, 90, 0, bitdw_dl_Cube_076_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 9837, -2180, 5273, bitdw_dl_Cube_077_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11469, -2180, -277, 0, -180, 0, bitdw_dl_Cube_078_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13006, -2088, 4030, 0, -90, 0, bitdw_dl_Cube_079_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11469, -2180, 4830, 0, -180, 0, bitdw_dl_Cube_080_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -13006, -2088, -13482, 0, -90, 0, bitdw_dl_Cube_081_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11469, -2180, -12682, 0, -180, 0, bitdw_dl_Cube_082_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -10117, -2406, -20744, bitdw_dl_Cube_083_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -12117, -2406, -20744, bitdw_dl_Cube_084_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -14117, -2406, -20744, bitdw_dl_Cube_085_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -16117, -2406, -20744, bitdw_dl_Cube_086_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1498, -5187, 9047, bitdw_dl_Cylinder_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1847, -4974, 10122, bitdw_dl_Cylinder_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2096, -7880, 11338, bitdw_dl_Cylinder_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1672, -9467, -10586, bitdw_dl_Cylinder_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1672, -9467, -7380, bitdw_dl_Cylinder_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -5086, -4237, -715, bitdw_dl_Sphere_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5851, -4869, 11457, 26, 100, 0, bitdw_dl_Sphere_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -5086, -4237, -10141, bitdw_dl_Sphere_003_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bitdw_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 40000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bitdw_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_LAVA_BUBBLES, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bitdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bitdw_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
