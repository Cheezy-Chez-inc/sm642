#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "game/level_geo.h"
#include "game/geo_misc.h"
#include "game/camera.h"
#include "game/moving_texture.h"
#include "game/screen_transition.h"
#include "game/paintings.h"
#include "menu/file_select.h"
#include "menu/star_select.h"

#include "make_const_nonconst.h"

#include "levels/menu/header.h"

const GeoLayout geo_yeah[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 524288),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dl_menu_mario_save_button_base),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, dl_menu_save_button_back),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};