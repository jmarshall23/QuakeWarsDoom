// Copyright (C) 2007 Id Software, Inc.
//

#ifndef __GAME_CONTENTMASK_H__
#define __GAME_CONTENTMASK_H__

// content masks
const int MASK_ALL							= -1;
const int MASK_SOLID						= CONTENTS_SOLID;
const int MASK_EXPLOSIONSOLID				= CONTENTS_SOLID | CONTENTS_EXPLOSIONSOLID | CONTENTS_RENDERMODEL | CONTENTS_FORCEFIELD;
const int MASK_VEHICLESOLID					= CONTENTS_SOLID | CONTENTS_VEHICLECLIP | CONTENTS_BODY  | CONTENTS_SLIDEMOVER;
const int MASK_PLAYERSOLID					= CONTENTS_SOLID | CONTENTS_PLAYERCLIP | CONTENTS_BODY | CONTENTS_SLIDEMOVER;
const int MASK_DEADSOLID					= CONTENTS_SOLID | CONTENTS_PLAYERCLIP;
const int MASK_WATER						= CONTENTS_WATER;
const int MASK_OPAQUE						= CONTENTS_OPAQUE;
const int MASK_SHOT_RENDERMODEL				= CONTENTS_SOLID | CONTENTS_RENDERMODEL | CONTENTS_FORCEFIELD;
const int MASK_SHOT_BOUNDINGBOX				= CONTENTS_SOLID | CONTENTS_BODY;
const int MASK_PROJECTILE					= CONTENTS_SOLID | CONTENTS_RENDERMODEL | CONTENTS_PROJECTILE | CONTENTS_FORCEFIELD;

// mask for just the hurtzones in vehicles - eg the wheels under the main body
const int MASK_HURTZONE						= CONTENTS_PLAYERCLIP | CONTENTS_FLYERHIVECLIP;

#endif // __GAME_CONTENTMASK_H__

