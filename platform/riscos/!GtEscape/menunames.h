/* --------------------------------------------------------------------------
 *    Name: menunames.h
 * Purpose: Identifiers for menu numbers
 *  Author: David Thomas
 * ----------------------------------------------------------------------- */

#ifndef MENUNAMES_H
#define MENUNAMES_H

enum
{
  ICONBAR_INFO          = 0,
  ICONBAR_HELP,
  ICONBAR_INSTRUCTIONS,
  ICONBAR_QUIT,
  ICONBAR__LIMIT,

  ZXGAME_VIEW           = 0,
  ZXGAME_SPEED,
  ZXGAME_SOUND,
  ZXGAME__LIMIT,

  VIEW_GAME             = 0,
  VIEW_WINDOW,
  VIEW_MONOCHROME,
  VIEW__LIMIT,

  GAME_SCALE            = 0,
  GAME_FIT_WINDOW,
  GAME_SNAP_PIXELS,
  GAME__LIMIT,

  WINDOW_FIT_GAME       = 0,
  WINDOW_FIT_SCREEN,
  WINDOW__LIMIT,

  SPEED_PAUSE           = 0,
  SPEED_100PC,
  SPEED_MAXIMUM,
  SPEED_FASTER,
  SPEED_SLOWER,
  SPEED__LIMIT,

  SOUND_ENABLED         = 0,
  SOUND__LIMIT
};

#endif /* MENUNAMES_H */

// vim: ts=8 sts=2 sw=2 et
