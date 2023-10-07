// 0x0D0000D0
const GeoLayout koopa_without_shell_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_shellless),
            GEO_OPEN_NODE(),
               GEO_SWITCH_CASE(2, geo_switch_anim_state),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 114, 0, 0, koopa_seg6_dl_06007AF8),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 114, 0, 0, koopa_seg6_dl_06007B20),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 39, 60, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600B838),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, koopa_seg6_dl_060086D0),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 39, -60, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600BA10),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, koopa_seg6_dl_06008B50),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 55, 25, -73, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600BC18),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, koopa_seg6_dl_0600BA90),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 55, 25, 74, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600BE10),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, koopa_seg6_dl_0600BC88),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0D000214
const GeoLayout koopa_with_shell_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_06008250),
            GEO_OPEN_NODE(),
               GEO_SWITCH_CASE(2, geo_switch_anim_state),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 114, 0, 0, koopa_seg6_dl_06007AF8),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 114, 0, 0, koopa_seg6_dl_06007B20),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 39, 60, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600B838),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, koopa_seg6_dl_060086D0),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -29, 39, -60, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600BA10),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 60, 0, 0, koopa_seg6_dl_06008B50),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 55, 25, -73, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600BC18),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, koopa_seg6_dl_0600BA90),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 55, 25, 74, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, koopa_seg6_dl_0600BE10),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, koopa_seg6_dl_0600BC88),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, troopa_material_revert_render_settings),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, troopa_material_revert_render_settings),
   GEO_CLOSE_NODE(),
   GEO_END(),
};