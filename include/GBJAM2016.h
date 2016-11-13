#ifndef GBJAM2016_H
#define GBJAM2016_H

#include "main.h"

typedef enum {
	STATE_MENU,
	STATE_GAME,
	STATE_LIVELOST,
	STATE_GAMEOVER,
	STATE_STAGEINTRO,
	STATE_WIN,

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
	SPRITE_PLATFORM,
	SPRITE_FLY,
	SPRITE_ROLLER,
	SPRITE_OVNI,
	SPRITE_MISSILE,

	N_SPRITE_TYPES
} SPRITE_TYPE;

#endif