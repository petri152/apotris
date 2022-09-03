#include "small1tiles_bin.h"
#include "small2tiles_bin.h"
#include "small3tiles_bin.h"
#include "small4tiles_bin.h"
#include "small5tiles_bin.h"
#include "small6tiles_bin.h"
#include "small7tiles_bin.h"
#include "small8tiles_bin.h"
#include "small9tiles_bin.h"
#include "small10tiles_bin.h"
#include "small11tiles_bin.h"
#include "small12tiles_bin.h"
#include "small13tiles_bin.h"
#include "small14tiles_bin.h"

#include "move1tiles_bin.h"
#include "move2tiles_bin.h"
#include "move3tiles_bin.h"
#include "move4tiles_bin.h"
#include "move5tiles_bin.h"
#include "move6tiles_bin.h"
#include "move7tiles_bin.h"
#include "move8tiles_bin.h"

const uint8_t * mini[2][7] = {
    {
        small1tiles_bin,
        small2tiles_bin,
        small3tiles_bin,
        small4tiles_bin,
        small5tiles_bin,
        small6tiles_bin,
        small7tiles_bin,
    },{
        small8tiles_bin,
        small9tiles_bin,
        small10tiles_bin,
        small11tiles_bin,
        small12tiles_bin,
        small13tiles_bin,
        small14tiles_bin,
    }   
};

const uint8_t * moveSpriteTiles[8] = {
        move1tiles_bin,
        move2tiles_bin,
        move3tiles_bin,
        move4tiles_bin,
        move5tiles_bin,
        move6tiles_bin,
        move7tiles_bin,
        move8tiles_bin,
};

const uint16_t palette[2][256] __attribute__((aligned(4)))=
{
	{
		0x0000,0x45c3,0x6ea5,0x7f26,0x7FFF,0x0c63,0x0421,0x7fff,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//0

		0x0000,0x48a4,0x5ce5,0x7506,0x7FFF,0x1ce7,0x0421,0x0421,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//1

		0x0000,0x0174,0x01fa,0x025f,0x7FFF,0x318c,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//2

		0x0000,0x0276,0x02fa,0x035f,0x7FFF,0x5294,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//3

		0x0000,0x0287,0x02e8,0x0368,0x7FFF,0x6739,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//4

		0x0000,0x588f,0x6cb2,0x7cd5,0x7FFF,0x5294,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//5

		0x0000,0x0015,0x0018,0x001a,0x7FFF,0x318c,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//6

		0x0000,0x1ce7,0x318c,0x5294,0x7FFF,0x1ce7,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//7

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//8

		0x0000,0x318c,0x5294,0x7fff,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//9

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//10

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//11

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//12

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//13

		0x0000,0x4A52,0x318c,0x0421,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//14

		0x0000,0x4A52,0x7FFF,0x294a,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//15
	},{
		0x0000,0x45c3,0x6ea5,0x7f26,0x7FFF,0x0c63,0x0421,0x7fff,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//0

		0x0000,0x48a4,0x5982,0x7e66,0x7FFF,0x1ce7,0x0421,0x0421,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//1

		0x0000,0x0174,0x123e,0x2ebf,0x7FFF,0x318c,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//2

		0x0000,0x0276,0x1f5e,0x3fff,0x7FFF,0x5294,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//3

		0x0000,0x0287,0x26ea,0x43f0,0x7FFF,0x6739,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//4

		0x0000,0x588f,0x50d3,0x757b,0x7FFF,0x5294,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//5

		0x0000,0x0015,0x313d,0x3dff,0x7FFF,0x318c,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//6

		0x0000,0x1ce7,0x318c,0x5294,0x7FFF,0x1ce7,0x0421,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//7

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//8

		0x0000,0x318c,0x5294,0x7fff,0x739c,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//9

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//10

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//11

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//12

		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//13

		0x0000,0x4A52,0x318c,0x0421,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//14

		0x0000,0x4A52,0x7FFF,0x294a,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,//15

	}
};
