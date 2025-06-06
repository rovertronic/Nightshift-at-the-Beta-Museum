#include "src/game/envfx_snow.h"

const GeoLayout darkness_geo[] = {
	GEO_CULLING_RADIUS(32000),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, darkness_darkness_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, darkness_darkness_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
