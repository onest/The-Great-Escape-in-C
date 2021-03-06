/**
 * SuperTiles.c
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

#include "TheGreatEscape/SuperTiles.h"

/**
 * $5B00: Super tiles.
 *
 * The game's exterior map is constructed of references to these.
 * Each super tile is a 4x4 array of tileindex_t's.
 */
const supertile_t supertiles[supertileindex__LIMIT] =
{
  {
    {
      0x94, 0x93, 0x92, 0x94,
      0x92, 0x92, 0x94, 0x93,
      0x91, 0x94, 0x07, 0x08,
      0x03, 0x04, 0x05, 0x06,
    }
  },
  {
    {
      0x91, 0x92, 0x07, 0x08,
      0x07, 0x08, 0x09, 0x0A,
      0x09, 0x0A, 0x0B, 0x17,
      0x0C, 0x17, 0x18, 0x1F,
    }
  },
  {
    {
      0x94, 0x93, 0x92, 0x94,
      0x92, 0x91, 0x94, 0x93,
      0x91, 0x94, 0x07, 0x08,
      0x07, 0x08, 0x09, 0x0A,
    }
  },
  {
    {
      0x91, 0x92, 0x07, 0x08,
      0x07, 0x08, 0x09, 0x0A,
      0x09, 0x0A, 0x0B, 0x17,
      0x0B, 0x17, 0x18, 0x1F,
    }
  },
  {
    {
      0x09, 0x0A, 0x0B, 0x17,
      0x0B, 0x17, 0x18, 0x1F,
      0x18, 0x1F, 0x19, 0x1A,
      0x19, 0x1A, 0x1E, 0x17,
    }
  },
  {
    {
      0x18, 0x1F, 0x19, 0x1A,
      0x19, 0x1A, 0x1E, 0x17,
      0x1E, 0x17, 0x1D, 0x1C,
      0x1D, 0x1C, 0x19, 0x1B,
    }
  },
  {
    {
      0x93, 0x92, 0x91, 0x92,
      0x91, 0x93, 0x91, 0x94,
      0x91, 0x91, 0x93, 0x94,
      0x26, 0x27, 0x28, 0x29,
    }
  },
  {
    {
      0x94, 0x93, 0x92, 0x94,
      0x92, 0x91, 0x94, 0x93,
      0x91, 0x94, 0x93, 0x94,
      0x2A, 0x92, 0x94, 0x91,
    }
  },
  {
    {
      0x6D, 0x2B, 0x91, 0x93,
      0x19, 0x2C, 0x2D, 0x93,
      0x1E, 0x17, 0x18, 0x2E,
      0x1D, 0x1C, 0x19, 0x2F,
    }
  },
  {
    {
      0x1E, 0x17, 0x1D, 0x1C,
      0x1D, 0x1C, 0x19, 0x1B,
      0x19, 0x1B, 0x35, 0x36,
      0x35, 0x36, 0x34, 0x00,
    }
  },
  {
    {
      0x1E, 0x17, 0x1D, 0x1C,
      0x1D, 0x1C, 0x19, 0x1B,
      0x19, 0x1B, 0x35, 0x37,
      0x35, 0x36, 0x34, 0x38,
    }
  },
  {
    {
      0x1E, 0x17, 0x1D, 0x1C,
      0x1D, 0x1C, 0x19, 0x1B,
      0x19, 0x1B, 0x35, 0x37,
      0x32, 0x33, 0x34, 0x38,
    }
  },
  {
    {
      0x0D, 0x0E, 0x19, 0x1A,
      0x00, 0x0F, 0x10, 0x17,
      0x00, 0x00, 0x11, 0x12,
      0x8B, 0x00, 0x13, 0x14,
    }
  },
  {
    {
      0x02, 0x00, 0x00, 0x00,
      0x85, 0x00, 0x86, 0x87,
      0x01, 0x00, 0x88, 0x89,
      0x01, 0x00, 0x00, 0x8A,
    }
  },
  {
    {
      0x01, 0x00, 0x00, 0x81,
      0x85, 0x00, 0x00, 0x4E,
      0x6C, 0x00, 0x00, 0x50,
      0x6B, 0x69, 0x66, 0x4E,
    }
  },
  {
    {
      0x82, 0x00, 0x00, 0x15,
      0x83, 0x84, 0x00, 0x55,
      0x00, 0x68, 0x00, 0x55,
      0x00, 0x4E, 0x00, 0x62,
    }
  },
  {
    {
      0x93, 0x94, 0x65, 0x6A,
      0x94, 0x91, 0x8C, 0x8D,
      0x91, 0x92, 0x94, 0x94,
      0x92, 0x94, 0x93, 0x91,
    }
  },
  {
    {
      0x00, 0x4E, 0x00, 0x61,
      0x8E, 0x67, 0x66, 0x60,
      0x8F, 0x90, 0x65, 0x5F,
      0x93, 0x92, 0x91, 0x5E,
    }
  },
  {
    {
      0x16, 0x73, 0x78, 0x38,
      0x01, 0x73, 0x00, 0x38,
      0x77, 0x73, 0x00, 0x63,
      0x76, 0x58, 0x00, 0x64,
    }
  },
  {
    {
      0x75, 0x59, 0x00, 0x49,
      0x74, 0x5A, 0x4A, 0x4B,
      0x5C, 0x5B, 0x91, 0x93,
      0x5D, 0x93, 0x92, 0x94,
    }
  },
  {
    {
      0x09, 0x21, 0x22, 0x24,
      0x0B, 0x20, 0x23, 0x25,
      0x18, 0x1F, 0x19, 0x1A,
      0x19, 0x1A, 0x1E, 0x17,
    }
  },
  {
    {
      0x00, 0x00, 0x00, 0x49,
      0x00, 0x4C, 0x4A, 0x4B,
      0x4A, 0x4B, 0x91, 0x93,
      0x94, 0x93, 0x92, 0x94,
    }
  },
  {
    {
      0x39, 0x3A, 0x3F, 0x3E,
      0x40, 0x41, 0x42, 0x43,
      0x44, 0x45, 0x46, 0x47,
      0x48, 0x47, 0x4A, 0x4B,
    }
  },
  {
    {
      0x19, 0x1B, 0x35, 0x36,
      0x35, 0x36, 0x34, 0x00,
      0x34, 0x7D, 0x00, 0x00,
      0x00, 0x3B, 0x3C, 0x3D,
    }
  },
  {
    {
      0x4A, 0x4B, 0x93, 0x91,
      0x93, 0x94, 0x91, 0x92,
      0x94, 0x92, 0x93, 0x94,
      0x93, 0x91, 0x92, 0x91,
    }
  },
  {
    {
      0x4A, 0x5B, 0x93, 0x94,
      0x93, 0x94, 0x91, 0x92,
      0x94, 0x92, 0x93, 0x94,
      0x93, 0x91, 0x92, 0x91,
    }
  },
  {
    {
      0x91, 0x93, 0x94, 0x92,
      0x92, 0x94, 0x91, 0x94,
      0x94, 0x93, 0x91, 0x92,
      0x30, 0x92, 0x94, 0x93,
    }
  },
  {
    {
      0x31, 0x93, 0x92, 0x91,
      0x91, 0x92, 0x91, 0x94,
      0x93, 0x94, 0x93, 0x91,
      0x94, 0x93, 0x94, 0x92,
    }
  },
  {
    {
      0x19, 0x1B, 0x35, 0x6E,
      0x35, 0x33, 0x34, 0x55,
      0x34, 0x73, 0x00, 0x56,
      0x00, 0x73, 0x00, 0x55,
    }
  },
  {
    {
      0x79, 0x73, 0x00, 0x55,
      0x00, 0x58, 0x00, 0x7E,
      0x7A, 0x59, 0x79, 0x56,
      0x78, 0x5A, 0x4A, 0x57,
    }
  },
  {
    {
      0x34, 0x00, 0x00, 0x7C,
      0x00, 0x3B, 0x72, 0x00,
      0x39, 0x4F, 0x4E, 0x00,
      0x4E, 0x00, 0x80, 0x7B,
    }
  },
  {
    {
      0x50, 0x00, 0x7F, 0x4C,
      0x51, 0x00, 0x4D, 0x4B,
      0x52, 0x53, 0x54, 0x91,
      0x6F, 0x70, 0x71, 0x94,
    }
  },
  {
    {
      0x34, 0x00, 0x00, 0x38,
      0x7B, 0x78, 0x00, 0x38,
      0x7C, 0x79, 0x00, 0x38,
      0x7A, 0x00, 0x00, 0x38,
    }
  },
  {
    {
      0x19, 0x1B, 0x35, 0x36,
      0x35, 0x36, 0x34, 0x7B,
      0x34, 0x00, 0x00, 0x7C,
      0x00, 0x3B, 0x3C, 0x3D,
    }
  },
  {
    {
      0x34, 0x00, 0x00, 0x38,
      0x77, 0x00, 0x00, 0x38,
      0x79, 0x00, 0x00, 0x63,
      0x7A, 0x00, 0x00, 0x64,
    }
  },
  {
    {
      0x94, 0x93, 0x92, 0x94,
      0x92, 0x91, 0x94, 0x93,
      0x91, 0x94, 0x93, 0x94,
      0x93, 0x92, 0x94, 0x91,
    }
  },
  {
    {
      0x93, 0x92, 0x91, 0x92,
      0x91, 0x93, 0x91, 0x93,
      0x91, 0x91, 0x93, 0x94,
      0x94, 0x92, 0x94, 0x93,
    }
  },
  {
    {
      0x93, 0x94, 0x93, 0x91,
      0x94, 0x91, 0x94, 0x93,
      0x91, 0x92, 0x94, 0x94,
      0x92, 0x94, 0x93, 0x91,
    }
  },
  {
    {
      0xAF, 0xB9, 0xC4, 0xB0,
      0xC5, 0xB9, 0xBA, 0xB0,
      0x96, 0xBB, 0xB6, 0xC6,
      0x94, 0x93, 0xBC, 0x98,
    }
  },
  {
    {
      0x00, 0xF0, 0xF1, 0x00,
      0xB3, 0xF2, 0xF3, 0x00,
      0xAF, 0xB5, 0x95, 0xB4,
      0xAF, 0xB7, 0xB8, 0xB0,
    }
  },
  {
    {
      0x00, 0x00, 0x00, 0x00,
      0xB3, 0xF4, 0x00, 0x00,
      0xAF, 0xB5, 0x95, 0xB4,
      0xAF, 0xB7, 0xB8, 0xB0,
    }
  },
  {
    {
      0xAE, 0xC0, 0xC1, 0x9C,
      0xF8, 0xC2, 0x91, 0x92,
      0x94, 0x92, 0x93, 0x94,
      0x93, 0x91, 0x92, 0x91,
    }
  },
  {
    {
      0xB2, 0x9B, 0xBE, 0xB0,
      0xAF, 0xBD, 0xBF, 0xB0,
      0xAF, 0xB9, 0xBA, 0xF9,
      0xAF, 0xB9, 0xBA, 0xC3,
    }
  },
  {
    {
      0xE3, 0xE2, 0xE5, 0x00,
      0xE5, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0xF5, 0xB1,
    }
  },
  {
    {
      0xF6, 0xC7, 0x99, 0x9C,
      0x99, 0xC8, 0x91, 0x93,
      0x91, 0x91, 0x93, 0x94,
      0x94, 0x92, 0x94, 0x93,
    }
  },
  {
    {
      0x1E, 0x45, 0x45, 0x44,
      0x1E, 0x45, 0x48, 0x49,
      0x1E, 0x4A, 0x4B, 0x4C,
      0x4D, 0x7B, 0x65, 0x0A,
    }
  },
  {
    {
      0x52, 0x51, 0x54, 0x6D,
      0x54, 0x6D, 0x6D, 0x6D,
      0x18, 0x64, 0x3A, 0x43,
      0x47, 0x46, 0x45, 0x44,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x65, 0x0A,
      0x65, 0x36, 0x08, 0x0B,
      0x08, 0x37, 0x00, 0x01,
    }
  },
  {
    {
      0x13, 0x6D, 0x6D, 0x53,
      0x0D, 0x53, 0x52, 0x51,
      0x6A, 0x51, 0x54, 0x6D,
      0x6C, 0x6D, 0x4E, 0x4F,
    }
  },
  {
    {
      0x0F, 0x6D, 0x6D, 0x50,
      0x0D, 0x6D, 0x6D, 0x6D,
      0x14, 0x19, 0x6D, 0x6D,
      0x15, 0x16, 0x6D, 0x6D,
    }
  },
  {
    {
      0x0F, 0x6D, 0x6D, 0x6D,
      0x0D, 0x6D, 0x65, 0x0A,
      0x09, 0x0A, 0x08, 0x0B,
      0x08, 0x0B, 0x02, 0x00,
    }
  },
  {
    {
      0x1E, 0x45, 0x48, 0x49,
      0x1E, 0x4A, 0x4B, 0x4C,
      0x4D, 0x7B, 0x6D, 0x53,
      0x6D, 0x53, 0x52, 0x51,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x53,
      0x6D, 0x53, 0x52, 0x51,
      0x52, 0x51, 0x54, 0x6D,
      0x54, 0x4E, 0x4F, 0x6D,
    }
  },
  {
    {
      0x6D, 0x6D, 0x50, 0x6D,
      0x7C, 0x19, 0x6D, 0x6D,
      0x17, 0x16, 0x1A, 0x6D,
      0x18, 0x1C, 0x1B, 0x6D,
    }
  },
  {
    {
      0x7C, 0x19, 0x6D, 0x6D,
      0x17, 0x16, 0x65, 0x0A,
      0x7D, 0x36, 0x08, 0x0B,
      0x08, 0x37, 0x00, 0x01,
    }
  },
  {
    {
      0x6D, 0x7C, 0x50, 0x6D,
      0x6D, 0x7E, 0x7F, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
    }
  },
  {
    {
      0x7D, 0x36, 0x08, 0x0B,
      0x08, 0x37, 0x00, 0x02,
      0x00, 0x00, 0x02, 0x03,
      0x03, 0x01, 0x03, 0x02,
    }
  },
  {
    {
      0x52, 0x51, 0x54, 0x6D,
      0x54, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x7C, 0x19, 0x6D,
    }
  },
  {
    {
      0x6D, 0x17, 0x16, 0x1A,
      0x7C, 0x18, 0x1C, 0x1B,
      0x7E, 0x7F, 0x6D, 0x6D,
      0x6D, 0x6D, 0x7D, 0x0A,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x0E,
      0x04, 0x63, 0x6D, 0x0C,
      0x05, 0x80, 0x04, 0x06,
      0x00, 0x02, 0x05, 0x07,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x58, 0x6D, 0x6D, 0x6D,
      0x59, 0x5A, 0x58, 0x6D,
    }
  },
  {
    {
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x6D, 0x5B,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x55, 0x57,
    }
  },
  {
    {
      0x58, 0x6D, 0x6D, 0x12,
      0x59, 0x5A, 0x58, 0x0C,
      0x6D, 0x5B, 0x59, 0x69,
      0x6D, 0x6D, 0x6D, 0x6B,
    }
  },
  {
    {
      0x70, 0x6D, 0x56, 0x6D,
      0x73, 0x74, 0x6D, 0x6D,
      0x77, 0x78, 0x6D, 0x6D,
      0x04, 0x66, 0x6D, 0x6D,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x0E,
      0x6D, 0x6D, 0x6D, 0x0C,
      0x6D, 0x6D, 0x6D, 0x12,
      0x6D, 0x6D, 0x6D, 0x10,
    }
  },
  {
    {
      0x05, 0x07, 0x04, 0x66,
      0x03, 0x00, 0x05, 0x07,
      0x00, 0x01, 0x03, 0x03,
      0x01, 0x03, 0x02, 0x00,
    }
  },
  {
    {
      0x58, 0x6D, 0x6D, 0x6D,
      0x59, 0x5A, 0x58, 0x6D,
      0x38, 0x5B, 0x59, 0x5A,
      0x3B, 0x39, 0x63, 0x5B,
    }
  },
  {
    {
      0x3C, 0x5E, 0x3D, 0x3E,
      0x3C, 0x5E, 0x5E, 0x1F,
      0x3C, 0x5E, 0x5E, 0x1F,
      0x3F, 0x40, 0x5E, 0x1F,
    }
  },
  {
    {
      0x5C, 0x41, 0x42, 0x1F,
      0x04, 0x66, 0x05, 0x5D,
      0x05, 0x07, 0x04, 0x63,
      0x02, 0x03, 0x05, 0x80,
    }
  },
  {
    {
      0x58, 0x6D, 0x6D, 0x6D,
      0x59, 0x5A, 0x58, 0x6D,
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x6D, 0x5B,
    }
  },
  {
    {
      0x6D, 0x6D, 0x56, 0x74,
      0x70, 0x6D, 0x81, 0x78,
      0x73, 0x6D, 0x6D, 0x6D,
      0x04, 0x63, 0x6D, 0x6D,
    }
  },
  {
    {
      0x6D, 0x82, 0x6D, 0x6D,
      0x74, 0x6D, 0x6D, 0x6D,
      0x73, 0x6D, 0x6D, 0x6D,
      0x04, 0x63, 0x6D, 0x6D,
    }
  },
  {
    {
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x6D, 0x5B,
      0x55, 0x57, 0x74, 0x6D,
      0x56, 0x81, 0x78, 0x6D,
    }
  },
  {
    {
      0x05, 0x80, 0x04, 0x63,
      0x01, 0x00, 0x05, 0x80,
      0x00, 0x03, 0x02, 0x03,
      0x02, 0x01, 0x03, 0x00,
    }
  },
  {
    {
      0x86, 0x6D, 0x56, 0x6D,
      0x85, 0x6E, 0x6F, 0x70,
      0x84, 0x71, 0x72, 0x73,
      0x83, 0x63, 0x76, 0x77,
    }
  },
  {
    {
      0x87, 0x5B, 0x59, 0x5A,
      0x86, 0x82, 0x6D, 0x5B,
      0x84, 0x6D, 0x6D, 0x6D,
      0x87, 0x6D, 0x55, 0x57,
    }
  },
  {
    {
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x6D, 0x5B,
      0x55, 0x57, 0x6D, 0x6D,
      0x56, 0x6D, 0x55, 0x57,
    }
  },
  {
    {
      0x6D, 0x6D, 0x56, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x82, 0x6D, 0x6D, 0x6E,
      0x04, 0x66, 0x6D, 0x71,
    }
  },
  {
    {
      0x6D, 0x74, 0x56, 0x6D,
      0x81, 0x78, 0x6D, 0x6D,
      0x82, 0x6D, 0x6D, 0x6D,
      0x04, 0x63, 0x6D, 0x6D,
    }
  },
  {
    {
      0x70, 0x6D, 0x56, 0x6D,
      0x73, 0x74, 0x6D, 0x6D,
      0x77, 0x78, 0x6D, 0x81,
      0x04, 0x66, 0x6D, 0x82,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x38, 0x6D, 0x6D, 0x6D,
      0x3B, 0x39, 0x63, 0x6D,
      0x3F, 0x40, 0x3D, 0x3E,
    }
  },
  {
    {
      0x71, 0x72, 0x73, 0x74,
      0x38, 0x76, 0x77, 0x78,
      0x3B, 0x39, 0x63, 0x6D,
      0x3F, 0x40, 0x3D, 0x3E,
    }
  },
  {
    {
      0x58, 0x6D, 0x6D, 0x6D,
      0x59, 0x5A, 0x58, 0x6D,
      0x6D, 0x5B, 0x59, 0x5A,
      0x6E, 0x6F, 0x70, 0x5B,
    }
  },
  {
    {
      0x38, 0x5B, 0x59, 0x5A,
      0x3B, 0x39, 0x63, 0x5B,
      0x3C, 0x5E, 0x3D, 0x3E,
      0x3C, 0x5E, 0x5E, 0x1F,
    }
  },
  {
    {
      0x3C, 0x5E, 0x5E, 0x1F,
      0x3F, 0x40, 0x5E, 0x1F,
      0x5C, 0x41, 0x42, 0x1F,
      0x04, 0x63, 0x05, 0x5D,
    }
  },
  {
    {
      0x86, 0x6D, 0x6D, 0x6D,
      0x84, 0x6D, 0x6D, 0x6D,
      0x87, 0x6D, 0x6D, 0x6D,
      0x86, 0x5A, 0x58, 0x6D,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x04, 0x66, 0x82, 0x6D,
      0x05, 0x07, 0x04, 0x63,
      0x02, 0x03, 0x05, 0x80,
    }
  },
  {
    {
      0x6E, 0x6F, 0x70, 0x6D,
      0x71, 0x72, 0x73, 0x74,
      0x75, 0x76, 0x77, 0x78,
      0x6D, 0x6D, 0x82, 0x6D,
    }
  },
  {
    {
      0x3C, 0x5E, 0x5E, 0x1F,
      0x3F, 0x40, 0x5E, 0x1F,
      0x5C, 0x41, 0x42, 0x1F,
      0x6D, 0x6D, 0x05, 0x5D,
    }
  },
  {
    {
      0x87, 0x6D, 0x6D, 0x5B,
      0x86, 0x82, 0x55, 0x57,
      0x84, 0x6E, 0x56, 0x6D,
      0x87, 0x82, 0x6D, 0x6D,
    }
  },
  {
    {
      0x55, 0x57, 0x6D, 0x6D,
      0x56, 0x6D, 0x55, 0x57,
      0x6D, 0x6D, 0x56, 0x6D,
      0x73, 0x6D, 0x6D, 0x6D,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6E, 0x6F,
      0x6D, 0x6D, 0x71, 0x72,
      0x58, 0x6D, 0x75, 0x76,
      0x59, 0x5A, 0x58, 0x6D,
    }
  },
  {
    {
      0x86, 0x6D, 0x6D, 0x6D,
      0x84, 0x5A, 0x58, 0x6D,
      0x87, 0x5B, 0x59, 0x5A,
      0x86, 0x6D, 0x6D, 0x5B,
    }
  },
  {
    {
      0x86, 0x6D, 0x6D, 0x74,
      0x84, 0x6D, 0x81, 0x78,
      0x84, 0x6D, 0x82, 0x6D,
      0x87, 0x66, 0x6D, 0x6D,
    }
  },
  {
    {
      0x6E, 0x6F, 0x70, 0x12,
      0x71, 0x72, 0x73, 0x10,
      0x75, 0x76, 0x77, 0x0E,
      0x6D, 0x6D, 0x6D, 0x0C,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x65, 0x7C, 0x6D, 0x6D,
      0x08, 0x7E, 0x7F, 0x6D,
      0x6D, 0x6D, 0x6D, 0x7C,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
    }
  },
  {
    {
      0x86, 0x3F, 0x40, 0x5E,
      0x85, 0x5C, 0x41, 0x88,
      0x84, 0x6D, 0x82, 0x05,
      0x83, 0x63, 0x6D, 0x6D,
    }
  },
  {
    {
      0x5E, 0x3D, 0x3E, 0x0E,
      0x40, 0x5E, 0x1F, 0x0C,
      0x41, 0x42, 0x1F, 0x12,
      0x58, 0x05, 0x5D, 0x10,
    }
  },
  {
    {
      0x87, 0x6D, 0x6D, 0x5B,
      0x86, 0x38, 0x81, 0x78,
      0x84, 0x3B, 0x39, 0x63,
      0x87, 0x3C, 0x5E, 0x3D,
    }
  },
  {
    {
      0x59, 0x5A, 0x58, 0x0E,
      0x6D, 0x5B, 0x59, 0x5F,
      0x6D, 0x6D, 0x81, 0x6B,
      0x39, 0x63, 0x82, 0x10,
    }
  },
  {
    {
      0x86, 0x3F, 0x40, 0x5E,
      0x84, 0x5C, 0x41, 0x88,
      0x87, 0x5A, 0x58, 0x05,
      0x86, 0x5B, 0x59, 0x5A,
    }
  },
  {
    {
      0x0F, 0x53, 0x52, 0x51,
      0x6A, 0x51, 0x54, 0x7F,
      0x6C, 0x4E, 0x4F, 0x6D,
      0x11, 0x6D, 0x50, 0x6D,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x6D,
      0x04, 0x66, 0x6D, 0x6D,
      0x05, 0x07, 0x04, 0x63,
      0x03, 0x02, 0x05, 0x80,
    }
  },
  {
    {
      0x6D, 0x6F, 0x70, 0x6D,
      0x81, 0x72, 0x73, 0x6D,
      0x82, 0x76, 0x77, 0x6D,
      0x04, 0x66, 0x82, 0x6D,
    }
  },
  {
    {
      0x66, 0x6D, 0x6D, 0x6D,
      0x07, 0x74, 0x6E, 0x6D,
      0x81, 0x78, 0x04, 0x82,
      0x82, 0x6D, 0x05, 0x6D,
    }
  },
  {
    {
      0xA1, 0x9A, 0xA3, 0xA4,
      0x86, 0x6D, 0x8E, 0x9A,
      0x85, 0x5A, 0x58, 0x81,
      0x84, 0x5B, 0x59, 0x5A,
    }
  },
  {
    {
      0x8E, 0x8F, 0x90, 0x91,
      0x6E, 0x5A, 0x8E, 0x94,
      0x82, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x6D, 0x5B,
    }
  },
  {
    {
      0x0F, 0x6D, 0x64, 0x20,
      0x8B, 0x0A, 0x2D, 0x1F,
      0x8C, 0x2C, 0x2E, 0x1F,
      0x8D, 0x28, 0x29, 0x68,
    }
  },
  {
    {
      0x17, 0x16, 0x1A, 0x9B,
      0x18, 0x1C, 0x1B, 0x9C,
      0x6D, 0x53, 0x52, 0x9D,
      0x52, 0x51, 0x54, 0x9C,
    }
  },
  {
    {
      0x92, 0x93, 0x6D, 0x9D,
      0x95, 0x96, 0x9A, 0x9F,
      0x8E, 0x97, 0x95, 0x96,
      0x59, 0x5A, 0x8E, 0x97,
    }
  },
  {
    {
      0x54, 0x19, 0x6D, 0x9B,
      0x17, 0x16, 0x6D, 0x9C,
      0x6D, 0x7D, 0x6D, 0x9D,
      0x7C, 0x19, 0x6D, 0x9E,
    }
  },
  {
    {
      0x9A, 0xA0, 0x00, 0x01,
      0x95, 0x96, 0x9A, 0xA0,
      0x8E, 0x97, 0x95, 0x96,
      0x59, 0x5A, 0x8E, 0x97,
    }
  },
  {
    {
      0x02, 0x00, 0x01, 0x00,
      0x03, 0x01, 0x02, 0x03,
      0x9A, 0xA0, 0x01, 0x00,
      0x95, 0x96, 0x9A, 0xA0,
    }
  },
  {
    {
      0x8E, 0x97, 0x95, 0x96,
      0x59, 0x5A, 0x8E, 0x94,
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x6D, 0x5B,
    }
  },
  {
    {
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6E, 0x74, 0x5B,
      0x6D, 0x81, 0x78, 0x6D,
      0x6D, 0x82, 0x6D, 0x6D,
    }
  },
  {
    {
      0x00, 0x03, 0xB2, 0xB3,
      0xA0, 0x01, 0xB6, 0xB7,
      0x8E, 0x9A, 0xA0, 0x02,
      0x58, 0x82, 0x8E, 0x9A,
    }
  },
  {
    {
      0x02, 0x00, 0x01, 0x00,
      0x03, 0x01, 0x02, 0x03,
      0x01, 0x00, 0xA6, 0xA7,
      0xA6, 0xA7, 0xA8, 0x6D,
    }
  },
  {
    {
      0x02, 0x01, 0xA6, 0xA7,
      0xA6, 0xA7, 0xA8, 0x6D,
      0xA8, 0x6D, 0xA5, 0xA4,
      0xA5, 0xA4, 0x00, 0x03,
    }
  },
  {
    {
      0xB4, 0xB5, 0x02, 0x01,
      0xB8, 0xB9, 0x03, 0xB1,
      0x02, 0xB1, 0xAF, 0xB0,
      0xAF, 0xB0, 0x6D, 0x53,
    }
  },
  {
    {
      0xAD, 0xAE, 0xAF, 0xA2,
      0xAF, 0xB0, 0x7E, 0x9E,
      0x7C, 0x53, 0x52, 0x9B,
      0x52, 0x51, 0x54, 0x9C,
    }
  },
  {
    {
      0x02, 0x03, 0x00, 0x02,
      0x00, 0x00, 0x02, 0x03,
      0xAA, 0xAB, 0x03, 0x02,
      0x6D, 0xA9, 0xAA, 0xAB,
    }
  },
  {
    {
      0xAA, 0xAB, 0x03, 0x00,
      0x6D, 0xA9, 0xAA, 0xAB,
      0xAD, 0xAC, 0x6D, 0xA9,
      0x02, 0x01, 0xAD, 0xAC,
    }
  },
  {
    {
      0xBD, 0x6D, 0xA5, 0xA4,
      0xBF, 0xA4, 0x01, 0x00,
      0x00, 0x02, 0x03, 0xB1,
      0x00, 0xB1, 0xAF, 0xB0,
    }
  },
  {
    {
      0xA8, 0x6D, 0xA5, 0xA4,
      0xA5, 0xA4, 0x01, 0x00,
      0x00, 0x02, 0x03, 0xB1,
      0x00, 0xB1, 0xAF, 0xB0,
    }
  },
  {
    {
      0xBE, 0xB0, 0xBA, 0xBC,
      0xBF, 0xBC, 0xBB, 0x6D,
      0x6D, 0x7C, 0xBB, 0x6D,
      0x6D, 0x7E, 0x7F, 0x6D,
    }
  },
  {
    {
      0xAF, 0xB0, 0xBA, 0xBC,
      0xA5, 0xBC, 0xBB, 0x7C,
      0x6D, 0x6D, 0xBB, 0x6D,
      0x6D, 0x6D, 0x6D, 0x6D,
    }
  },
  {
    {
      0x02, 0x03, 0xFE, 0xB1,
      0x01, 0xB1, 0xAF, 0xB0,
      0xAF, 0xB0, 0xA5, 0xBC,
      0xA5, 0xBC, 0x6D, 0x6D,
    }
  },
  {
    {
      0xAF, 0xB0, 0xBA, 0xC1,
      0xA5, 0xBC, 0x6D, 0x5B,
      0x89, 0x6D, 0x55, 0x57,
      0x87, 0x6D, 0x56, 0x6D,
    }
  },
  {
    {
      0xC5, 0x28, 0x33, 0x15,
      0xC4, 0x28, 0x29, 0x1F,
      0x05, 0x2A, 0x25, 0xC2,
      0x00, 0xB1, 0xC3, 0xB0,
    }
  },
  {
    {
      0x85, 0x5B, 0x59, 0x5A,
      0xC7, 0x63, 0x6D, 0x5B,
      0xC6, 0x24, 0x04, 0x23,
      0xC6, 0x26, 0x27, 0x1F,
    }
  },
  {
    {
      0x6D, 0x6D, 0x6D, 0x5B,
      0x70, 0x38, 0x81, 0x78,
      0x73, 0x3B, 0x39, 0x63,
      0x6D, 0x3C, 0x5E, 0x3D,
    }
  },
  {
    {
      0xB4, 0xB5, 0x02, 0x01,
      0xB8, 0xB9, 0x03, 0x00,
      0x00, 0x02, 0x03, 0x01,
      0xA0, 0x00, 0x01, 0x02,
    }
  },
  {
    {
      0xAD, 0xAC, 0x6D, 0xA9,
      0x03, 0x00, 0xAD, 0xAC,
      0x00, 0x01, 0x03, 0x03,
      0x01, 0x03, 0x02, 0x00,
    }
  },
  {
    {
      0x59, 0x5A, 0x58, 0x6D,
      0x6D, 0x5B, 0x59, 0x5A,
      0x6D, 0x6D, 0x81, 0x5B,
      0x39, 0x63, 0x82, 0x6D,
    }
  },
  {
    {
      0x5E, 0x3D, 0x3E, 0x6D,
      0x40, 0x5E, 0x1F, 0x70,
      0x41, 0x42, 0x1F, 0x73,
      0x58, 0x05, 0x5D, 0x6D,
    }
  },
  {
    {
      0x8E, 0x9A, 0xA0, 0x01,
      0x58, 0x6D, 0x8E, 0x9A,
      0x59, 0x5A, 0x58, 0x6D,
      0x6D, 0x5B, 0x59, 0x5A,
    }
  },
  {
    {
      0x86, 0x6F, 0x70, 0x6D,
      0x85, 0x72, 0x73, 0x74,
      0x84, 0x76, 0x77, 0x78,
      0x83, 0x63, 0x6D, 0x6D,
    }
  },
  {
    {
      0x0F, 0x6D, 0x6D, 0x6D,
      0x0D, 0x7C, 0x19, 0x6D,
      0x13, 0x17, 0x16, 0x1A,
      0x11, 0x18, 0x1C, 0x1B,
    }
  },
  {
    {
      0x08, 0x09, 0x0B, 0x09,
      0x08, 0x09, 0x0B, 0x09,
      0x08, 0x09, 0x0B, 0x09,
      0x10, 0x09, 0x0B, 0x09,
    }
  },
  {
    {
      0x11, 0x0F, 0x0B, 0x09,
      0x15, 0x13, 0x0D, 0x0F,
      0x12, 0x16, 0x12, 0x13,
      0x13, 0x14, 0x15, 0x15,
    }
  },
  {
    {
      0x0B, 0x09, 0x0B, 0x0C,
      0x0B, 0x09, 0x0B, 0x0C,
      0x0D, 0x0F, 0x0B, 0x0C,
      0x14, 0x13, 0x0D, 0x0E,
    }
  },
  {
    {
      0x0B, 0x09, 0x0A, 0x06,
      0x0B, 0x09, 0x0B, 0x0C,
      0x0B, 0x09, 0x0B, 0x0C,
      0x0B, 0x09, 0x0B, 0x0C,
    }
  },
  {
    {
      0x15, 0x14, 0x13, 0x12,
      0x02, 0x12, 0x14, 0x15,
      0x05, 0x06, 0x02, 0x16,
      0x0A, 0x06, 0x05, 0x06,
    }
  },
  {
    {
      0x07, 0x01, 0x02, 0x17,
      0x03, 0x06, 0x05, 0x06,
      0x08, 0x09, 0x0A, 0x06,
      0x08, 0x09, 0x0B, 0x09,
    }
  },
  {
    {
      0x14, 0x16, 0x12, 0x13,
      0x15, 0x14, 0x13, 0x17,
      0x17, 0x13, 0x15, 0x14,
      0x02, 0x12, 0x13, 0x12,
    }
  },
  {
    {
      0x16, 0x15, 0x17, 0x14,
      0x14, 0x13, 0x15, 0x12,
      0x16, 0x12, 0x17, 0x13,
      0x15, 0x14, 0x13, 0x17,
    }
  },
  {
    {
      0x1E, 0x20, 0x1E, 0x1F,
      0x1E, 0x20, 0x1E, 0x1F,
      0x1E, 0x20, 0x1E, 0x1F,
      0x1E, 0x20, 0x1E, 0x1F,
    }
  },
  {
    {
      0x1E, 0x20, 0x22, 0x23,
      0x22, 0x21, 0x17, 0x14,
      0x14, 0x13, 0x15, 0x12,
      0x16, 0x12, 0x17, 0x13,
    }
  },
  {
    {
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x22, 0x21,
      0x24, 0x21, 0x17, 0x13,
    }
  },
  {
    {
      0x1B, 0x00, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
    }
  },
  {
    {
      0x17, 0x18, 0x19, 0x1A,
      0x1B, 0x1C, 0x1B, 0x1D,
      0x1B, 0x00, 0x1E, 0x1F,
      0x1E, 0x20, 0x1E, 0x1F,
    }
  },
  {
    {
      0x13, 0x15, 0x14, 0x15,
      0x14, 0x16, 0x17, 0x18,
      0x17, 0x18, 0x1B, 0x1C,
      0x1B, 0x1C, 0x1B, 0x00,
    }
  },
  {
    {
      0x16, 0x15, 0x17, 0x14,
      0x14, 0x13, 0x15, 0x12,
      0x12, 0x16, 0x17, 0x13,
      0x15, 0x17, 0x13, 0x18,
    }
  },
  {
    {
      0x16, 0x14, 0x15, 0x12,
      0x13, 0x69, 0x6A, 0x13,
      0x15, 0x6B, 0x6C, 0x14,
      0x14, 0x13, 0x16, 0x12,
    }
  },
  {
    {
      0x28, 0x27, 0x26, 0x29,
      0x02, 0x28, 0x29, 0x27,
      0x05, 0x06, 0x02, 0x17,
      0x0A, 0x06, 0x05, 0x06,
    }
  },
  {
    {
      0x27, 0x28, 0x29, 0x28,
      0x26, 0x29, 0x28, 0x27,
      0x28, 0x27, 0x27, 0x26,
      0x02, 0x28, 0x26, 0x18,
    }
  },
  {
    {
      0x26, 0x28, 0x27, 0x28,
      0x28, 0x27, 0x29, 0x18,
      0x26, 0x18, 0x1B, 0x1C,
      0x1B, 0x1C, 0x1B, 0x00,
    }
  },
  {
    {
      0x2D, 0x20, 0x1E, 0x20,
      0x2D, 0x20, 0x1E, 0x20,
      0x2D, 0x20, 0x22, 0x21,
      0x2B, 0x21, 0x17, 0x13,
    }
  },
  {
    {
      0x0B, 0x09, 0x0B, 0x2C,
      0x0B, 0x09, 0x0B, 0x2C,
      0x0D, 0x0F, 0x0B, 0x2C,
      0x13, 0x14, 0x0D, 0x2A,
    }
  },
  {
    {
      0x0B, 0x09, 0x0A, 0x2E,
      0x0B, 0x09, 0x0B, 0x2C,
      0x0B, 0x09, 0x0B, 0x2C,
      0x0B, 0x09, 0x0B, 0x2C,
    }
  },
  {
    {
      0x2F, 0x00, 0x1E, 0x20,
      0x2D, 0x20, 0x1E, 0x20,
      0x2D, 0x20, 0x1E, 0x20,
      0x2D, 0x20, 0x1E, 0x20,
    }
  },
  {
    {
      0x15, 0x14, 0x13, 0x12,
      0x02, 0x17, 0x14, 0x15,
      0x05, 0x06, 0x02, 0x17,
      0x0A, 0x06, 0x05, 0x30,
    }
  },
  {
    {
      0x13, 0x15, 0x14, 0x15,
      0x14, 0x16, 0x17, 0x18,
      0x17, 0x18, 0x1B, 0x1C,
      0x31, 0x1C, 0x1B, 0x00,
    }
  },
  {
    {
      0x42, 0x09, 0x0B, 0x3A,
      0x41, 0x09, 0x0B, 0x3A,
      0x3D, 0x3E, 0x3B, 0x3A,
      0x13, 0x17, 0x3D, 0x3C,
    }
  },
  {
    {
      0x36, 0x3E, 0x3B, 0x45,
      0x12, 0x13, 0x3D, 0x46,
      0x14, 0x15, 0x14, 0x13,
      0x12, 0x13, 0x12, 0x14,
    }
  },
  {
    {
      0x44, 0x38, 0x37, 0x06,
      0x42, 0x43, 0x40, 0x39,
      0x42, 0x09, 0x0B, 0x3F,
      0x42, 0x09, 0x0B, 0x3A,
    }
  },
  {
    {
      0x35, 0x09, 0x0B, 0x47,
      0x35, 0x09, 0x0B, 0x45,
      0x34, 0x09, 0x0B, 0x45,
      0x35, 0x09, 0x0B, 0x45,
    }
  },
  {
    {
      0x07, 0x01, 0x02, 0x17,
      0x32, 0x06, 0x05, 0x06,
      0x33, 0x38, 0x37, 0x06,
      0x34, 0x43, 0x40, 0x38,
    }
  },
  {
    {
      0x16, 0x15, 0x14, 0x15,
      0x02, 0x17, 0x13, 0x17,
      0x05, 0x06, 0x02, 0x15,
      0x41, 0x06, 0x05, 0x06,
    }
  },
  {
    {
      0x29, 0x27, 0x28, 0x29,
      0x02, 0x28, 0x29, 0x27,
      0x05, 0x06, 0x02, 0x26,
      0x0A, 0x06, 0x05, 0x06,
    }
  },
  {
    {
      0x08, 0x09, 0x0B, 0x09,
      0x08, 0x09, 0x0B, 0x4F,
      0x08, 0x4F, 0x50, 0x4A,
      0x52, 0x4A, 0x51, 0x4B,
    }
  },
  {
    {
      0x0B, 0x49, 0x19, 0x48,
      0x50, 0x4A, 0x50, 0x1D,
      0x51, 0x4B, 0x4C, 0x4E,
      0x4C, 0x4D, 0x4C, 0x4E,
    }
  },
  {
    {
      0x53, 0x4B, 0x4C, 0x4D,
      0x25, 0x20, 0x1E, 0x4D,
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
    }
  },
  {
    {
      0x4C, 0x4D, 0x4C, 0x4E,
      0x4C, 0x4D, 0x4C, 0x4E,
      0x1E, 0x4D, 0x4C, 0x4E,
      0x1E, 0x20, 0x1E, 0x4E,
    }
  },
  {
    {
      0x55, 0x54, 0x57, 0x55,
      0x54, 0x56, 0x55, 0x18,
      0x57, 0x18, 0x1B, 0x1C,
      0x1B, 0x1C, 0x1B, 0x00,
    }
  },
  {
    {
      0x54, 0x55, 0x56, 0x57,
      0x56, 0x57, 0x54, 0x55,
      0x55, 0x56, 0x57, 0x54,
      0x54, 0x55, 0x54, 0x18,
    }
  },
  {
    {
      0x28, 0x28, 0x26, 0x29,
      0x27, 0x29, 0x27, 0x56,
      0x29, 0x56, 0x57, 0x57,
      0x57, 0x56, 0x55, 0x54,
    }
  },
  {
    {
      0x17, 0x18, 0x19, 0x1A,
      0x5A, 0x1C, 0x1B, 0x1D,
      0x65, 0x64, 0x58, 0x1F,
      0x65, 0x5E, 0x5F, 0x5C,
    }
  },
  {
    {
      0x61, 0x66, 0x62, 0x5C,
      0x61, 0x66, 0x68, 0x63,
      0x61, 0x66, 0x68, 0x63,
      0x61, 0x66, 0x68, 0x63,
    }
  },
  {
    {
      0x61, 0x66, 0x68, 0x09,
      0x61, 0x67, 0x0B, 0x09,
      0x11, 0x0F, 0x0B, 0x09,
      0x15, 0x14, 0x0D, 0x0F,
    }
  },
  {
    {
      0x5B, 0x01, 0x58, 0x20,
      0x03, 0x06, 0x5F, 0x5D,
      0x61, 0x60, 0x0A, 0x5E,
      0x61, 0x09, 0x0B, 0x09,
    }
  },
  {
    {
      0x1E, 0x20, 0x22, 0x23,
      0x59, 0x21, 0x17, 0x15,
      0x05, 0x06, 0x02, 0x16,
      0x0A, 0x06, 0x05, 0x06,
    }
  },
  {
    {
      0x1B, 0x00, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
      0x58, 0x20, 0x1E, 0x20,
    }
  },
  {
    {
      0x16, 0x14, 0x15, 0x12,
      0x13, 0x69, 0x6A, 0x13,
      0x15, 0x6B, 0x6C, 0x14,
      0x14, 0x13, 0x16, 0x12,
    }
  },
  {
    {
      0x28, 0x27, 0x26, 0x16,
      0x29, 0x17, 0x28, 0x27,
      0x17, 0x28, 0x16, 0x51,
      0x17, 0xA0, 0x9F, 0x9B,
    }
  },
  {
    {
      0x17, 0x28, 0x16, 0x26,
      0x16, 0x29, 0x27, 0x28,
      0x9A, 0x17, 0x28, 0x27,
      0x9C, 0x9D, 0x9E, 0x17,
    }
  },
  {
    {
      0x26, 0x27, 0x17, 0x70,
      0x16, 0x28, 0x29, 0x15,
      0x28, 0x29, 0x26, 0x16,
      0x02, 0x17, 0x26, 0x70,
    }
  },
  {
    {
      0x97, 0x99, 0xB0, 0xB1,
      0x88, 0x8F, 0x8A, 0xAC,
      0x8D, 0x96, 0x98, 0x6E,
      0x8B, 0xAF, 0x8C, 0x83,
    }
  },
  {
    {
      0xB2, 0xAE, 0x94, 0x95,
      0xAD, 0x85, 0x92, 0x93,
      0x6F, 0x91, 0xA9, 0x8E,
      0x84, 0xAB, 0xAA, 0x85,
    }
  },
  {
    {
      0x6D, 0x16, 0x28, 0x27,
      0x17, 0x28, 0x27, 0x26,
      0x16, 0x27, 0x17, 0x28,
      0x6D, 0x15, 0x29, 0x18,
    }
  },
  {
    {
      0x90, 0x8F, 0x8A, 0xAC,
      0x81, 0x17, 0x0D, 0x75,
      0x77, 0x06, 0x02, 0x7B,
      0x78, 0x06, 0x05, 0x71,
    }
  },
  {
    {
      0xAD, 0x85, 0x92, 0x89,
      0x76, 0x21, 0x26, 0x82,
      0x7C, 0x18, 0x1B, 0x7E,
      0x72, 0x1C, 0x1B, 0x7F,
    }
  },
  {
    {
      0x79, 0x09, 0x0A, 0x71,
      0x79, 0x09, 0x0B, 0x73,
      0x79, 0x09, 0x0B, 0x73,
      0x79, 0x09, 0x0B, 0x73,
    }
  },
  {
    {
      0x72, 0x00, 0x1E, 0x80,
      0x74, 0x20, 0x1E, 0x80,
      0x74, 0x20, 0x1E, 0x80,
      0x74, 0x20, 0x1E, 0x80,
    }
  },
  {
    {
      0x79, 0x09, 0x0B, 0x73,
      0x79, 0x09, 0x0B, 0x73,
      0x0D, 0x0F, 0x0B, 0x73,
      0x13, 0x12, 0x0D, 0x7A,
    }
  },
  {
    {
      0x74, 0x20, 0x1E, 0x80,
      0x74, 0x20, 0x1E, 0x80,
      0x74, 0x20, 0x22, 0x21,
      0x7D, 0x21, 0x14, 0x15,
    }
  },
  {
    {
      0x90, 0x8F, 0x8A, 0xAC,
      0xA1, 0x28, 0x0D, 0x75,
      0xA1, 0x15, 0x27, 0x7B,
      0xA1, 0x28, 0x17, 0xA4,
    }
  },
  {
    {
      0xA1, 0x18, 0x1B, 0xA5,
      0xA2, 0x1C, 0x1B, 0xA6,
      0xA2, 0x00, 0x1E, 0xA8,
      0xA3, 0x20, 0x1E, 0xA8,
    }
  },
  {
    {
      0xA3, 0x20, 0x1E, 0xA8,
      0xA3, 0x20, 0x1E, 0xA8,
      0x1E, 0x20, 0x1E, 0xA8,
      0x1E, 0x20, 0x1E, 0xA7,
    }
  },
  {
    {
      0xCB, 0xCB, 0xCA, 0xCB,
      0xCB, 0xCB, 0xCB, 0x18,
      0xCB, 0x18, 0x1B, 0x1C,
      0xBC, 0xBA, 0x1B, 0x00,
    }
  },
  {
    {
      0xCC, 0xCD, 0x19, 0x04,
      0x1B, 0x1C, 0x1B, 0x1D,
      0x1B, 0x00, 0x1E, 0x1F,
      0x1E, 0x20, 0x1E, 0x1F,
    }
  },
  {
    {
      0xBB, 0xB9, 0xB6, 0xB7,
      0x25, 0x20, 0xB5, 0xB8,
      0x25, 0x20, 0x1E, 0x20,
      0x25, 0x20, 0x1E, 0x20,
    }
  },
  {
    {
      0x1E, 0x20, 0x1E, 0x1F,
      0xB6, 0xB7, 0x1E, 0x1F,
      0xB5, 0xB8, 0xB6, 0xB3,
      0x1E, 0x20, 0xB5, 0xB4,
    }
  },
  {
    {
      0x59, 0x5A, 0x58, 0x6D,
      0xC8, 0xC9, 0x59, 0x5A,
      0x13, 0x19, 0xCB, 0xC9,
      0x0D, 0x16, 0xCC, 0xCE,
    }
  },
  {
    {
      0x6D, 0x3F, 0x40, 0x5E,
      0x58, 0x5C, 0x41, 0x88,
      0x59, 0x5A, 0x58, 0x05,
      0xCB, 0xC9, 0x59, 0x5A,
    }
  },
  {
    {
      0x14, 0x19, 0xCC, 0xCC,
      0x15, 0x16, 0xCD, 0xD5,
      0x0F, 0x6D, 0xCC, 0xCE,
      0x0D, 0x6D, 0xCC, 0xCC,
    }
  },
  {
    {
      0xCC, 0xCE, 0xCB, 0xC9,
      0xCC, 0xCC, 0xCC, 0xCE,
      0xCC, 0xCC, 0xCC, 0xCC,
      0xCC, 0xCC, 0xCC, 0xCA,
    }
  },
  {
    {
      0x09, 0x0A, 0xD1, 0xCC,
      0x08, 0x0B, 0xD2, 0xD3,
      0x6D, 0xF4, 0xF7, 0xF8,
      0xF7, 0xF8, 0xF7, 0xDC,
    }
  },
  {
    {
      0xCC, 0xCA, 0xF5, 0xF6,
      0xD4, 0xF8, 0xF7, 0xF9,
      0xF7, 0xDC, 0xFA, 0xFB,
      0xFA, 0xFC, 0xFA, 0xFB,
    }
  },
  {
    {
      0x59, 0x5A, 0x58, 0x0E,
      0x6D, 0x5B, 0x59, 0x69,
      0x6D, 0x6D, 0x6D, 0x6B,
      0xF5, 0xE0, 0x6D, 0x10,
    }
  },
  {
    {
      0xF7, 0xF9, 0x6D, 0x0E,
      0xFA, 0xFB, 0x6D, 0x0C,
      0xFA, 0xFB, 0x6D, 0x12,
      0xFA, 0xFB, 0x6D, 0x10,
    }
  },
  {
    {
      0xFA, 0xFB, 0x6D, 0x0E,
      0xFA, 0xD7, 0x6D, 0x0C,
      0xFA, 0xD0, 0x04, 0x06,
      0xFE, 0xFF, 0x05, 0x07,
    }
  },
  {
    {
      0x0F, 0x53, 0x52, 0x51,
      0x6A, 0x51, 0x54, 0x6D,
      0x6C, 0x6D, 0x6D, 0x6D,
      0x11, 0x6D, 0xCF, 0xDD,
    }
  },
  {
    {
      0x0F, 0x6D, 0xDF, 0xE2,
      0x0D, 0x6D, 0xE4, 0xE8,
      0x13, 0x6D, 0xE4, 0xE8,
      0x11, 0x6D, 0xE4, 0xE8,
    }
  },
  {
    {
      0x0F, 0x6D, 0xE4, 0xE8,
      0x0D, 0x6D, 0xDA, 0xE8,
      0x09, 0x0A, 0xDB, 0xE8,
      0x08, 0x0B, 0xED, 0xEA,
    }
  },
  {
    {
      0xE3, 0xDD, 0xDE, 0xD6,
      0xDF, 0xE2, 0xE1, 0xD8,
      0xE4, 0xE5, 0xE6, 0xD8,
      0xE4, 0xE5, 0xE6, 0xD9,
    }
  },
  {
    {
      0xDA, 0xD9, 0xE7, 0xE5,
      0xE4, 0xE5, 0xE7, 0xE5,
      0xE4, 0xE5, 0xE7, 0xE5,
      0xE4, 0xE5, 0xE7, 0xE5,
    }
  },
};

// vim: ts=8 sts=2 sw=2 et
