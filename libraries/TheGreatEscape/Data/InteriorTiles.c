/**
 * InteriorTiles.c
 *
 * This file is part of "The Great Escape in C".
 *
 * This project recreates the 48K ZX Spectrum version of the prison escape
 * game "The Great Escape" in portable C code. It is free software provided
 * without warranty in the interests of education and software preservation.
 *
 * "The Great Escape" was created by Denton Designs and published in 1986 by
 * Ocean Software Limited.
 *
 * The original game is copyright (c) 1986 Ocean Software Ltd.
 * The original game design is copyright (c) 1986 Denton Designs Ltd.
 * The recreated version is copyright (c) 2012-2019 David Thomas
 */

#include "TheGreatEscape/Pixels.h"
#include "TheGreatEscape/Tiles.h"

#include "TheGreatEscape/InteriorTiles.h"

/**
 * $9768: Interior tiles.
 */
const tile_t interior_tiles[interiortile__LIMIT] =
{
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      __XX____,
      _X______,
      ______X_,
      ____XX__,
      X_______
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      _____X__,
      ____X___,
      _____X__
    }
  },
  {
    {
      __XX____,
      XXXXXX__,
      __XXXXXX,
      XX__XXXX,
      XX____XX,
      XX______,
      XX__X___,
      XX___XX_
    }
  },
  {
    {
      ___X____,
      _XX_____,
      ________,
      XX___XX_,
      XXXX____,
      XXXXXX__,
      __XXXXXX,
      ____XX__
    }
  },
  {
    {
      ________,
      X__XX___,
      _XX___X_,
      ____X___,
      __X_____,
      X_______,
      _____X__,
      ________
    }
  },
  {
    {
      __X__X__,
      X______X,
      ________,
      ____X___,
      _______X,
      _X______,
      __X_____,
      _______X
    }
  },
  {
    {
      _X______,
      __XX____,
      ________,
      _X__XX__,
      __XX____,
      ________,
      X____XX_,
      ____X___
    }
  },
  {
    {
      XX__X___,
      XX______,
      XX____X_,
      XX__XX__,
      XXXX____,
      XX______,
      ____XX__,
      _______X
    }
  },
  {
    {
      __X___XX,
      X_____XX,
      ______XX,
      ___X__XX,
      ______XX,
      X_____XX,
      _X____XX,
      ______XX
    }
  },
  {
    {
      ________,
      ___XX___,
      ________,
      _X______,
      ______X_,
      ____X___,
      __X_____,
      X_______
    }
  },
  {
    {
      ______XX,
      ___X__XX,
      ______XX,
      ______XX,
      _X____XX,
      ____XX__,
      __XX____,
      X_______
    }
  },
  {
    {
      ______X_,
      ____X___,
      __X_____,
      X_______,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ____X___,
      _X______,
      ________,
      __X_____,
      ________,
      _____X__,
      _X______,
      ________
    }
  },
  {
    {
      _X______,
      _____X__,
      ______X_,
      _X__XX__,
      __XX____,
      ________,
      XX____XX,
      ____X___
    }
  },
  {
    {
      ________,
      ________,
      ______XX,
      _X___X__,
      X___XX__,
      ___XXXX_,
      ____XX__,
      _X______
    }
  },
  {
    {
      ____X___,
      _____XX_,
      ________,
      _XX___XX,
      ____XXXX,
      __XXXXXX,
      XXXXXX__,
      __XX____
    }
  },
  {
    {
      ____XX__,
      __XXXXXX,
      XXXXXX__,
      XXXX__XX,
      XX____XX,
      ____X_XX,
      __X___XX,
      XX____XX
    }
  },
  {
    {
      _X______,
      ___X____,
      _____X__,
      _______X,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      XX______,
      __X___X_,
      __XX___X,
      _XXXX___,
      __XX____,
      ______X_
    }
  },
  {
    {
      XX___X__,
      XX_____X,
      XX______,
      XX_X____,
      XX______,
      XX_____X,
      XX____X_,
      XX______
    }
  },
  {
    {
      ___X__XX,
      ____X_XX,
      _X____XX,
      __XX__XX,
      ____XXXX,
      ______XX,
      __X_____,
      X_______
    }
  },
  {
    {
      _____XX_,
      __X_____,
      _X______,
      __XX_X__,
      ____X___,
      ______XX,
      XX______,
      __XX____
    }
  },
  {
    {
      XX______,
      XX__X___,
      XX______,
      XX______,
      XX____X_,
      __XX____,
      ____XX__,
      _______X
    }
  },
  {
    {
      ________,
      ___XX__X,
      _X___XX_,
      ___X____,
      _____X__,
      _______X,
      __X_____,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ___XX___,
      ________,
      _X____X_,
      ___X____,
      _____X__,
      _______X
    }
  },
  {
    {
      X______X,
      X__XX_XX,
      _XX___X_,
      _______X,
      X_______,
      __X___XX,
      _X__XXXX,
      ____X_XX
    }
  },
  {
    {
      XX____XX,
      ___X__XX,
      ______XX,
      XX____XX,
      XXXX__XX,
      XXXXXX__,
      __XXXXXX,
      ____XX__
    }
  },
  {
    {
      XX__X___,
      XX___X__,
      XX______,
      XX____XX,
      XX__XXXX,
      __XXXXXX,
      XXXXXX__,
      __XX____
    }
  },
  {
    {
      __XX____,
      XXXXXX__,
      __XXXXXX,
      XX__XXXX,
      XX____XX,
      XX______,
      X__XX___,
      _XXXXXX_
    }
  },
  {
    {
      _XXX__XX,
      _X__XXXX,
      _XXX_XXX,
      __XXX___,
      ___X_XX_,
      ______XX,
      _X______,
      _____X__
    }
  },
  {
    {
      XXXXXXXX,
      _XXXXXX_,
      X__XXX__,
      XXX_X___,
      XXXX__X_,
      ________,
      __X_____,
      X_______
    }
  },
  {
    {
      ___XX_XX,
      _X_XXXXX,
      ____XXX_,
      XX___X_X,
      ___XXXXX,
      __XX__XX,
      _XX_XX_X,
      _XXXXX_X
    }
  },
  {
    {
      _XXX__X_,
      XXXXX_XX,
      XXXXXXXX,
      XX_XX_XX,
      _XX__XXX,
      XXXXXX_X,
      X__XXXXX,
      _XX_XX_X
    }
  },
  {
    {
      X_XXX_XX,
      _XXXX_XX,
      _XXXX_XX,
      _XX___XX,
      XX____XX,
      XX__XX__,
      ___X____,
      ________
    }
  },
  {
    {
      XX____XX,
      XX__X_XX,
      _XX___XX,
      XXX___XX,
      XX_X__XX,
      XXXXX_XX,
      X_XXX_XX,
      XX__X_XX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ______XX,
      ____XXXX,
      __XXXX__,
      XXXX____,
      XX______
    }
  },
  {
    {
      ____XXXX,
      __XXXX__,
      XXXX____,
      XX______,
      ________,
      X_______,
      X_______,
      X_______
    }
  },
  {
    {
      XX______,
      XX______,
      XX______,
      XX______,
      XX______,
      XX______,
      XX______,
      XX______
    }
  },
  {
    {
      XX______,
      XX______,
      XX______,
      XX______,
      XX______,
      XX____XX,
      XX__XX__,
      XXXX____
    }
  },
  {
    {
      X_______,
      X_____XX,
      X___XX__,
      X_XX____,
      XX______,
      X_______,
      X_______,
      X_______
    }
  },
  {
    {
      ________,
      X_______,
      X_______,
      X_______,
      X_______,
      X_____XX,
      X___XX__,
      X_XX____
    }
  },
  {
    {
      XX______,
      X______X,
      X_____X_,
      X_____X_,
      X_______,
      X_______,
      X_______,
      X_______
    }
  },
  {
    {
      XX______,
      X_X_____,
      X_X_____,
      X_______,
      X_____XX,
      X___XXXX,
      X_XXXXXX,
      X_XXXX__
    }
  },
  {
    {
      XX______,
      XX______,
      XX______,
      XX______,
      _X______,
      XX______,
      ________,
      ________
    }
  },
  {
    {
      XX____XX,
      XX__XXXX,
      XX_XXXXX,
      XX_XXX__,
      XXXX____,
      XX______,
      ________,
      ________
    }
  },
  {
    {
      _XXX____,
      XX______,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      X_____XX,
      X___XXXX,
      X_XXXXXX,
      X_XXXX__,
      _XXX____,
      XX______,
      ________,
      ________
    }
  },
  {
    {
      XX______,
      XX_____X,
      XX____X_,
      XX____X_,
      XX______,
      XX______,
      XX______,
      XX______
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ______XX
    }
  },
  {
    {
      _X____XX,
      ___X__XX,
      _____XXX,
      ______XX,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ____XXXX,
      __XXXX__,
      XXXX____,
      XX______,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      XXXX____,
      __XXXX__,
      ____XXXX,
      ______XX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      XX______
    }
  },
  {
    {
      XXXX____,
      __XXXX__,
      ____XXXX,
      ______XX,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ______XX,
      ______XX,
      ______XX,
      ______XX,
      ______XX,
      ______XX,
      ______XX,
      ______XX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ______X_,
      ____X___,
      __X_____,
      X_______
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      _X______,
      ___X____,
      _____X__,
      _______X
    }
  },
  {
    {
      XX____X_,
      XX__X___,
      XXX_____,
      XX______,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ______XX,
      ______XX,
      ______XX,
      ______XX,
      ______X_,
      ____X___,
      __X_____,
      X_______
    }
  },
  {
    {
      XX______,
      XX______,
      XX______,
      XX______,
      _X______,
      ___X____,
      _____X__,
      _______X
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      _______X,
      ______XX,
      _____XX_,
      _____X_X
    }
  },
  {
    {
      _______X,
      _____XXX,
      ___XXX__,
      _XXX__XX,
      XX__XXXX,
      __XXXXXX,
      _XXXXXXX,
      X_XXXX__
    }
  },
  {
    {
      X___XXXX,
      ___XXX__,
      XX_X____,
      XXX_____,
      XXX_____,
      XX______,
      __XXXX__,
      XXXXXXXX
    }
  },
  {
    {
      _____X_X,
      __XX_X_X,
      XXXX_X__,
      XX___X_X,
      _____X_X,
      _____X_X,
      _____X__,
      _____X__
    }
  },
  {
    {
      XX_X__XX,
      XX__XXXX,
      XX_XXXXX,
      __XXXXXX,
      XX__XX__,
      XXXX__XX,
      XXXXXX__,
      __XXXXXX
    }
  },
  {
    {
      XXXXXX__,
      XXXX__XX,
      XX__XXXX,
      __XXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      __XXXXXX
    }
  },
  {
    {
      XX______,
      XXXX____,
      XXXXXX__,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      XX______,
      XXXX____,
      XXXXXX__,
      XXXXX__X
    }
  },
  {
    {
      ____XXXX,
      ______XX,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      XX__XXXX,
      XXXX__XX,
      XXXXXX__,
      __XXXXXX,
      ____XXXX,
      ______XX,
      ________,
      ________
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXX_,
      __XXX__X,
      XX_X_XXX,
      XXX_XX__,
      XXX_X_XX,
      __X_X___
    }
  },
  {
    {
      XXX__XXX,
      X__XXX_X,
      _XXX___X,
      XX__XX_X,
      __XX___X,
      XX______,
      ________,
      ________
    }
  },
  {
    {
      ____X___,
      ____X___,
      ____X___,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ___XXX__,
      _XXXXXXX,
      ___XXXXX,
      _XX__XXX,
      _X_XX__X,
      _X___XX_,
      _X_XX__X
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      XXXX____,
      XXXXXX__,
      _XXX____,
      X___XX__
    }
  },
  {
    {
      _X_X_XX_,
      _X_XXXX_,
      _X___XX_,
      _X_XX___,
      _X_X_XX_,
      _X_XXXX_,
      _X___XX_,
      _X_XX___
    }
  },
  {
    {
      X_XXXX__,
      X_XXXX__,
      X_XXXX__,
      X_XXXX__,
      X_XXXX__,
      X_XXXX__,
      X_XXXX__,
      X_XXXX__
    }
  },
  {
    {
      _X_X_XX_,
      _X_XXXX_,
      _XX__XX_,
      ___XX___,
      _____XX_,
      _______X,
      ________,
      ________
    }
  },
  {
    {
      X_XXXX__,
      X_XXXX__,
      X_XXXX_X,
      X_XXXX_X,
      X_XXXX__,
      X_XXX___,
      ________,
      ________
    }
  },
  {
    {
      ___XX___,
      _XXXXXX_,
      ___XXXXX,
      _XX__XXX,
      _X_XX__X,
      _X___XX_,
      _X_XX_XX,
      _X_XX_XX
    }
  },
  {
    {
      ________,
      ________,
      X_______,
      XXX_____,
      XXXXX___,
      _XXXXXX_,
      X__XXXXX,
      _XX__XX_
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      X_______,
      ________
    }
  },
  {
    {
      _X_XX_XX,
      _X_XX_XX,
      _X_XX_XX,
      _X_XX_XX,
      _X_XX_XX,
      _X_XX_XX,
      _X_XX_XX,
      _X_XX_XX
    }
  },
  {
    {
      ___XX__X,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX
    }
  },
  {
    {
      X_______,
      X_______,
      X_______,
      X_______,
      X_______,
      X_______,
      X_______,
      X_______
    }
  },
  {
    {
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX
    }
  },
  {
    {
      _XX___XX,
      ___XX_XX,
      _____XXX,
      _______X,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      _XX_X_XX,
      _XX_X_XX,
      _XX_X_XX,
      X___X_XX,
      _XX_X_XX,
      ___XX_XX,
      ______X_,
      ________
    }
  },
  {
    {
      X_______,
      X_______,
      X_______,
      X_______,
      X_XX____,
      X_XXXX__,
      ____XXXX,
      ______XX
    }
  },
  {
    {
      ______XX,
      ______XX,
      ______XX,
      XX____XX,
      XXXX__XX,
      __XXXXXX,
      ____XXXX,
      ______XX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ______XX,
      ____XXXX
    }
  },
  {
    {
      ________,
      ________,
      ______XX,
      ____XXXX,
      __XXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX
    }
  },
  {
    {
      __XX____,
      XXXXXX__,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      XXXX____,
      XXXXXX__,
      XXXXXXXX,
      XXXXXX__
    }
  },
  {
    {
      __XXXXXX,
      ____XXXX,
      ______XX,
      ____XX__,
      ____X_XX,
      ____X___,
      ____X___,
      ____X___
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      __XXXXXX,
      XX__XXXX,
      __XX__XX,
      ____XX__
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXX__,
      XXXX__XX,
      XX__XX__,
      __XX____,
      XX______
    }
  },
  {
    {
      XXXX____,
      XX__XX__,
      __XX_X__,
      XX___X__,
      _____X__,
      _____X__,
      _____X__,
      _____X__
    }
  },
  {
    {
      __XXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXX__
    }
  },
  {
    {
      XXXX__XX,
      XX__XX__,
      __XX____,
      XX______,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      ____XX__,
      __XX_X__
    }
  },
  {
    {
      XX__XX__,
      X_XX_X__,
      XX___X__,
      X____X__,
      X____X__,
      X_______,
      X___XXXX,
      __XXXXXX
    }
  },
  {
    {
      XXXXXXXX,
      __XXXXXX,
      X___XXXX,
      X_______,
      X_____X_,
      X_____X_,
      X_____X_,
      X_____X_
    }
  },
  {
    {
      ______X_,
      ______X_,
      ______X_,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      XXXX____,
      XX______,
      ___X____,
      ___X____,
      ___X____,
      ___X____,
      ___X____,
      ___X____
    }
  },
  {
    {
      X___XXXX,
      ___XXX__,
      XXX_____,
      __XX____,
      XX_X____,
      XXX_____,
      XX_X_X__,
      X_XXX_XX
    }
  },
  {
    {
      _XXXXX_X,
      XX_XXX_X,
      X_XXX_XX,
      XXXXX_XX,
      XXXX_XXX,
      XX__XXXX,
      XXXXXX_X,
      __XXXXX_
    }
  },
  {
    {
      XX______,
      _XXX____,
      X_XXXX__,
      XX_XXXXX,
      XX_XXXXX,
      XXX_X__X,
      XXX_XXX_,
      XXXXXXX_
    }
  },
  {
    {
      _XXX__XX,
      X___XX_X,
      XXXXXXX_,
      __XXX__X,
      XX___XXX,
      XXX_XX__,
      XXX_X_XX,
      __X_X___
    }
  },
  {
    {
      _______X,
      _____XXX,
      ___XXX__,
      _XXX____,
      XX__XX_X,
      __XXX_XX,
      _XXXX_XX,
      X_XXXX__
    }
  },
  {
    {
      _X____XX,
      _X_XX_XX,
      __XXXX_X,
      __XXXX_X,
      _X_XX_X_,
      _X____X_,
      _X_XX_XX,
      _X_XX_XX
    }
  },
  {
    {
      ___XX__X,
      _XX_X_XX,
      ____X_XX,
      _XX_X_XX,
      XXXX__XX,
      XXXX__XX,
      _XX_X_XX,
      ____X_XX
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      XX______,
      X_XX____
    }
  },
  {
    {
      XX__XX__,
      X_XX_X__,
      X___XX__,
      X____X__,
      X____X__,
      _____X__,
      XX___X__,
      XXXX____
    }
  },
  {
    {
      __XXXXXX,
      ____XXXX,
      __X___XX,
      __X_____,
      __X____X,
      __X____X,
      __X____X,
      __X____X
    }
  },
  {
    {
      XXXXXX__,
      XXXX____,
      XX___X__,
      _____X__,
      _____X__,
      _____X__,
      _____X__,
      _____X__
    }
  },
  {
    {
      _______X,
      _______X,
      _______X,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ______XX,
      ____XXXX,
      __XXXXXX,
      XXXXXX__,
      XXXX__XX,
      XX__XX__
    }
  },
  {
    {
      ________,
      XX______,
      XXXX____,
      XX______,
      __XX____,
      XX_X____,
      ___X____,
      XX_X____
    }
  },
  {
    {
      ______XX,
      ____XX__,
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ____XXX_
    }
  },
  {
    {
      __XX__XX,
      XX__X_XX,
      X_XXX_XX,
      X_XXX_XX,
      X_XXX_XX,
      X_XXX_XX,
      X_XXX_XX,
      X_XXX_XX
    }
  },
  {
    {
      XX_X____,
      XX_X____,
      XX_X____,
      _X_X____,
      _X_X____,
      XX_X____,
      XX_X____,
      XX_X____
    }
  },
  {
    {
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ____XXX_,
      ______X_,
      ________
    }
  },
  {
    {
      X_XXX_XX,
      X_XXX___,
      X_XX__XX,
      X___XX__,
      X_XX____,
      XX______,
      ________,
      ________
    }
  },
  {
    {
      __XX____,
      XX______,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      _XXX____,
      XX_XX___,
      _XX__XX_,
      __XXXX_X,
      ____XX_X,
      ______XX,
      _______X,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      X_______,
      _X______,
      X_X_____,
      XXX_____,
      XXXX____
    }
  },
  {
    {
      XXXX____,
      _XX_____,
      X__X____,
      XXXX____,
      X_XX____,
      X_XX____,
      X_XX____,
      X_XX____
    }
  },
  {
    {
      __XX____,
      XXXXXX__,
      __XXXXXX,
      ____XX__,
      ________,
      XXXX____,
      ________,
      ________
    }
  },
  {
    {
      ____XXXX,
      __XXXX__,
      XXXX____,
      XX______,
      ____X___,
      ____X___,
      X___X___,
      X___X___
    }
  },
  {
    {
      XX__X___,
      XX__X___,
      XX__X___,
      XX__X___,
      XX__X___,
      XX__X___,
      XX__X___,
      XX__X___
    }
  },
  {
    {
      X___X___,
      X___X___,
      X___X___,
      X___X___,
      X___X___,
      X___X___,
      X___X___,
      X___X___
    }
  },
  {
    {
      X___X___,
      X___X___,
      X___X___,
      X___X___,
      X_____XX,
      X___XXXX,
      __XXXXXX,
      XXXXXX__
    }
  },
  {
    {
      ________,
      ________,
      ________,
      _____X__,
      ___XXXX_,
      __XXXX__,
      ___X__X_,
      __X_XXX_
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      ________,
      ________,
      __XX____,
      XXXXXX__
    }
  },
  {
    {
      __X_XXX_,
      __X_XX_X,
      ___X__XX,
      XXX_XX__,
      __XX____,
      ____X___,
      ____X___,
      ________
    }
  },
  {
    {
      XXXX____,
      XX______,
      __X_____,
      __X_____,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      _______X,
      _____XXX,
      ___XXXXX,
      _XXXXXXX,
      ___XXXXX,
      _XX__XXX,
      _XXXX__X,
      _X_XXXX_
    }
  },
  {
    {
      X_______,
      _XX_____,
      X__XX___,
      XXX__XX_,
      X__XX___,
      _XX__XX_,
      X__XXXX_,
      _XXXXXX_
    }
  },
  {
    {
      _X_XXXXX,
      _X_XX_XX,
      _X_X_XXX,
      _X_XXXXX,
      _XX__XXX,
      ___XX_XX,
      _____XXX,
      _______X
    }
  },
  {
    {
      _XXXXXX_,
      _XXXX_X_,
      _XXX__X_,
      _XXX_XX_,
      _XXXXXX_,
      _XXXX___,
      _XX_____,
      X_______
    }
  },
  {
    {
      _____XX_,
      ___XX_X_,
      _XX_XXX_,
      _XXXX_X_,
      _X_XXXX_,
      _XXX_XX_,
      _X_XX___,
      _XX___XX
    }
  },
  {
    {
      XX______,
      XX______,
      XX______,
      XX____XX,
      XX__XXXX,
      XXXXXX__,
      XXXX____,
      XX______
    }
  },
  {
    {
      XX______,
      X_XX____,
      X___XX__,
      XXX__X__,
      X__XXX__,
      XX___X__,
      __XX_X__,
      ____XX__
    }
  },
  {
    {
      XXXX____,
      XX______,
      __XX____,
      XX_X____,
      ___X____,
      ___X____,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ______XX,
      ____XXXX,
      __XXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXX__
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      XXXX____,
      XX______,
      __X_____,
      XXX_____
    }
  },
  {
    {
      __X_____,
      __X_____,
      ________,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      __XXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXX__,
      XXXX__XX,
      XX__XX_X,
      __XX___X,
      XX_____X
    }
  },
  {
    {
      __XXXXXX,
      ____XXXX,
      __XX__XX,
      __X_XX__,
      __X___XX,
      __X___X_,
      ______X_,
      ______X_
    }
  },
  {
    {
      XXXX____,
      __XXXX__,
      ____XXXX,
      XX____XX,
      XXXX____,
      XX______,
      __X_____,
      XXX_____
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ____XX__,
      __XXXXXX,
      XXXXXX__,
      XXXX__XX,
      XX__XX_X
    }
  },
  {
    {
      __XX___X,
      XX__XX_X,
      X_XX_X_X,
      X_XX___X,
      X___XX_X,
      X_XX_X_X,
      X_XX___X,
      X___XX_X
    }
  },
  {
    {
      X_XX_X_X,
      X_XXXX_X,
      X_XX__XX,
      X___XX__,
      X_XX____,
      XX______,
      ________,
      ________
    }
  },
  {
    {
      ____XXX_,
      __X_XXX_,
      XXX_XXX_,
      XX__XXX_,
      ____XXX_,
      ____XXX_,
      ______X_,
      ________
    }
  },
  {
    {
      _X_XXXX_,
      _X_X__X_,
      _X_XXXX_,
      _X_XXXX_,
      _X___XX_,
      _X_XX___,
      _X_XXXX_,
      _X_X__X_
    }
  },
  {
    {
      _X_XXXX_,
      _X_X_XX_,
      _X_XXXX_,
      _X___XX_,
      _X_XX___,
      _X_XXXX_,
      _X_X__X_,
      _X_XXXX_
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      XXXX____,
      XXXXXX__,
      XXXXXXXX,
      XXXX__XX
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXX__,
      XXXX__XX,
      XX__XXXX,
      __XXXXXX,
      XX__XXXX,
      XXXX__XX
    }
  },
  {
    {
      XX__XX__,
      __XXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXX__,
      XXXX__XX
    }
  },
  {
    {
      XXXX____,
      __XXXX__,
      XX__XXXX,
      XXXX__XX,
      XX__XXXX,
      __XXXX__,
      XXXX__XX,
      XX__X_XX
    }
  },
  {
    {
      __XXXX__,
      _X__XXXX,
      _XXX__XX,
      _XXXXX__,
      _XXXXXXX,
      __XXXXX_,
      ____XXX_,
      ______X_
    }
  },
  {
    {
      XX__XXXX,
      __XXXX__,
      XXXX__XX,
      XX__XXXX,
      __XXXXXX,
      XX_XXXXX,
      XX_XXX__,
      XX_X____
    }
  },
  {
    {
      __XXX_XX,
      XXXXX_XX,
      XXXXX_XX,
      XXXX__XX,
      XX____XX,
      ______XX,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      XX______,
      XXXX____,
      __XXXX__,
      _X__XXXX,
      _X____XX,
      _XX_____,
      ___XX_X_,
      XX___XX_
    }
  },
  {
    {
      ________,
      ________,
      ______XX,
      _______X,
      __XXX__X,
      ___X___X,
      ___XX__X,
      ___X_X_X
    }
  },
  {
    {
      ________,
      ________,
      X_______,
      ________,
      X_______,
      _X______,
      ________,
      ________
    }
  },
  {
    {
      ___X____,
      ___X____,
      _______X,
      _____XXX,
      ___XXXXX,
      __X__XXX,
      __XXX__X,
      __XXXXX_
    }
  },
  {
    {
      ___XX___,
      _XX_XXX_,
      XXX_XXXX,
      XXX_XXXX,
      XXX_XXXX,
      X__X_XX_,
      XXXXX__X,
      _XX__XXX
    }
  },
  {
    {
      ________,
      ________,
      X_______,
      XXX_____,
      X__X____,
      _XXX____,
      XXXX____,
      XXXX____
    }
  },
  {
    {
      __XXXXXX,
      __XXXXXX,
      ___XXXXX,
      _____XXX,
      _______X,
      ______X_,
      ___XX_XX,
      _____XX_
    }
  },
  {
    {
      X__XXXXX,
      XXXXXXXX,
      X_XXXXXX,
      X_XXXXX_,
      X_XXX___,
      _XX_____,
      ________,
      ______XX
    }
  },
  {
    {
      XXXX____,
      XXX_____,
      X_______,
      ______XX,
      ____XXXX,
      __XXXX__,
      XXXX____,
      XX______
    }
  },
  {
    {
      ____XX__,
      __XXXX__,
      XXXX_X__,
      XXX_X___,
      _XX_X___,
      X___X___,
      X___X___,
      X__X_X__
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ______XX,
      ____XXXX,
      __XXXXX_,
      __XX_XX_,
      __X_X___
    }
  },
  {
    {
      __X_X___,
      ____X__X,
      ____X___,
      ___X_X__,
      _____X__,
      ____X___,
      ________,
      ________
    }
  },
  {
    {
      X____X__,
      _X__X___,
      _X______,
      X_______,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      XX______,
      _XX_____,
      X_______,
      ________,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ______XX,
      ____XXXX,
      __XXXX__,
      XXXXXX__,
      XX__X_XX
    }
  },
  {
    {
      X___X___,
      _XX_____,
      ___XX__X,
      _____XX_,
      ________,
      ________,
      ________,
      ________
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXX_,
      XXXXXX_X,
      XXXXX_XX,
      XXXXX_XX,
      XXXXX__X
    }
  },
  {
    {
      XXXXXXXX,
      XXXXXXXX,
      XXXXXXXX,
      ___XXX__,
      XXX___XX,
      XXX_XX__,
      X_______,
      XXX_____
    }
  },
  {
    {
      XXXX__X_,
      XX__X___,
      __XX_XXX,
      X___XXXX,
      _XX_XXXX,
      _XXXXX_X,
      __XXXX_X,
      ___XX_XX
    }
  },
  {
    {
      ________,
      XXXX____,
      XXXXX___,
      XXX_X___,
      XXX_X___,
      XX_XX___,
      XX_X__XX,
      XX__XXXX
    }
  },
  {
    {
      __X__XXX,
      _XXXX___,
      _XXXXXXX,
      _X_XXXXX,
      ____XXXX,
      XXXX____,
      XXXXXXXX,
      XXXXXX__
    }
  },
  {
    {
      __X_XXXX,
      XXX_XXXX,
      XXX_XXXX,
      XX_XXX__,
      __XX__XX,
      XX__XX_X,
      __XX___X,
      XX_____X
    }
  },
  {
    {
      ________,
      ________,
      ________,
      XX______,
      XXXX___X,
      XXXXX_XX,
      XXXXX_XX,
      XXXXX__X
    }
  },
  {
    {
      ________,
      ________,
      ________,
      ________,
      XXX_____,
      XXX_____,
      X_______,
      XXX_____
    }
  },
  {
    {
      ________,
      XXXX____,
      XXXXX___,
      XXX_X___,
      XXX_X___,
      XX_XX___,
      XX_X____,
      XX______
    }
  },
  {
    {
      __X_____,
      XXX_XX__,
      XXX_XXXX,
      XX_XXXXX,
      __XX__XX,
      XX__XX_X,
      __XX___X,
      XX_____X
    }
  },
};

// vim: ts=8 sts=2 sw=2 et
