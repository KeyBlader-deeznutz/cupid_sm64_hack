void scroll_mario_000_offset_001_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 18;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(mario_000_offset_001_mesh_layer_1_vtx_4);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_actor_geo_mario() {
	scroll_mario_000_offset_001_mesh_layer_1_vtx_4();
}
