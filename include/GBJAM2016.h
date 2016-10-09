#ifndef GBJAM2016_H
#define GBJAM2016_H

#include "main.h"

typedef enum {
	STATE_MENU,
	STATE_GAME,
	STATE_LIVELOST,
	STATE_GAMEOVER,

	N_STATES
} STATE;

typedef enum {
	SPRITE_PRINCESS,
	SPRITE_BULLET,
	SPRITE_MUSHROOM,
	SPRITE_ENEMY_BULLET,
	SPRITE_CSHOOTER,
	SPRITE_SHOOTER,
	SPRITE_EPARTICLE,
	SPRITE_PPARTICLE,

	N_SPRITE_TYPES
} SPRITE_TYPE;

#endif