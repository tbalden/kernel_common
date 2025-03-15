#ifndef __S2S_H__
#define __S2S_H__


// if true, TS driver should report fake x and y coords coming from s2s driver, and also pass real x and y to s2s for calc...
bool s2s_freeze_coords(int *x, int *y, int r_x, int r_y);
// in direct input mode for some drivers where touch events otherwise gets lost in offload...
void s2s_direct_input(struct input_handle *handle, unsigned int type, unsigned int code, int value,unsigned char touch_id);

#endif /* __S2S_H__ */
