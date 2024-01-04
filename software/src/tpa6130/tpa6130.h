/*
 * tpa6130.h
 *
 *  Created on: 31 Jul 2021
 *      Author: alex
 */

#ifndef FOXDAC_DRIVERS_TPA6130_TPA6130_H_
#define FOXDAC_DRIVERS_TPA6130_TPA6130_H_

void tpa6130_init(void);
void tpa6130_set_volume(int8_t volume);
int8_t tpa6130_get_volume(void);
void tpa6130_toggle_mute(void);
bool tpa6130_get_muted(void);
const char* tpa6130_get_volume_str(uint8_t volume);

#endif /* FOXDAC_DRIVERS_TPA6130_TPA6130_H_ */
