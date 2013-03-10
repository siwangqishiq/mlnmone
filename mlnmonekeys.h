//MLNM-ONE video game engine Copyright 2013 Unincorporated Media

//    This file is part of MLNM-ONE.

//  MLNM-ONE is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.

//  MLNM-ONE is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with MLNM-ONE.  If not, see <http://www.gnu.org/licenses/>.

//Purpose of this file: provide variables for keyboard input in the MLNM-ONE video game engine.

#include //NecesaryMLNM-ONEHeaders

//Follows are the variables representing keyboard keys

char keystrings[

//Numbers

 "0key",
 "1key",
 "2key",
 "3key",
 "4key",
 "5key",
 "6key",
 "7key",
 "8key",
 "9key",

//Latin letters

 "akey",
 "bkey",
 "ckey",
 "dkey",
 "ekey",
 "fkey",
 "gkey",
 "hkey",
 "ikey",
 "jkey",
 "kkey",
 "lkey",
 "mkey",
 "nkey",
 "okey", //Should've been "okay;"
 "pkey",
 "qkey",
 "rkey",
 "skey",
 "tkey",
 "ukey",
 "vkey",
 "wkey",
 "xkey",
 "ykey",
 "zkey",

//Control Keys

 "control",
 "shift",
 "alternate",
 "commodorekey" //C=

//"On/Off" keys

 "capslock",
 "numlock",
 "scrolllock",

//Function keys

 "f1",
 "f2",
 "f3",
 "f4",
 "f5",
 "f6",
 "f7",
 "f8",
 "f9",
 "f10",
 "f11",
 "f12",
 "f13", //-+
 "f14", // |-Yes, these exist.
 "f15", //-+

//Punctuation

 "comma",
 "period",
 "slash",
 "quote",
 "semicolon",
 "leftbrac",
 "rightbrac",
 "backslash",

//Whitespace

 "space",
 "tabkey",
 "backspace",
 "deletekey",
 "enter",

//Num keys

 "num0",
 "num1",
 "num2",
 "num3",
 "num4",
 "num5",
 "num6",
 "num7",
 "num8",
 "num9",
 "divide",
 "multiply",
 "add",
 "subtract",
 "decimal",
 "numenter",

//Misc.

 "insertkey",
 "homekey",
 "endkey",
 "pageup",
 "pagedown",
 "prntscrn",
 "pausekey",
 "tilde", //Or accent

];

int SDLcodes //Or char or whatever; this contains the SDL equivilents for my codes
[
//SDL equivilent codes in the same order as keystrings
];

bool keydown(char askkey)
{
 //This function returns true if askkey is down. It's used by keypress, keyhold and keyreleasr.

 for(int n = 0; askkey != keystrings[n-1]; n + 1) //Go throught keysrings to see if askkey is a valid MRNDA-ONE keycode
 {

  if(askkey == keystrings[n]) //If askkey is a valid MRNDA-ONE keycode
  {

   while(SDLkeydown(SDLcodes[n]) //While a key is down that is the equivilent of askkey for SDLcodes
   {
    return true;
   }

  }

 }


}

