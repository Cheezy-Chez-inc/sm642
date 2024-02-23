void bhv_stone_bridge_update_pos(void) {
    f32 offset = (o->oPosX + o->oPosZ) / 25;
    o->oPosY = o->oHomeY + sinf((o->oTimer + offset) / 150 * 2 * M_PI) * 200;
}
