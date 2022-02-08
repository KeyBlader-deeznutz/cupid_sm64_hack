

void bhv_movesidey_loop(void) {
    o->oPosZ += 30 * coss(o->oTimer*0x200);
}