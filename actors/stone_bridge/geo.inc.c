#include "src/game/envfx_snow.h"

const GeoLayout stone_bridge_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, stone_bridge_Cube_001_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};