// 0x0701AD54 - 0x0701ADD8
const Collision bits_seg7_collision_arrow_platform[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
    COL_VERTEX(-460, 0, -306),
    COL_VERTEX(461, 0, 307),
    COL_VERTEX(-460, 0, 307),
    COL_VERTEX(461, 0, -306),
    COL_VERTEX(-460, 102, -306),
    COL_VERTEX(461, 102, 307),
    COL_VERTEX(461, 102, -306),
    COL_VERTEX(-460, 102, 307),
    COL_TRI_INIT(SURFACE_DEFAULT, 12),
    COL_TRI(0, 1, 2),
    COL_TRI(0, 3, 1),
    COL_TRI(4, 3, 0),
    COL_TRI(2, 4, 0),
    COL_TRI(2, 1, 5),
    COL_TRI(6, 5, 1),
    COL_TRI(6, 1, 3),
    COL_TRI(2, 5, 7),
    COL_TRI(2, 7, 4),
    COL_TRI(4, 6, 3),
    COL_TRI(6, 4, 7),
    COL_TRI(6, 7, 5),
    COL_TRI_STOP(),
    COL_END(),
};
