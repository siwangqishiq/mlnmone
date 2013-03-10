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

//Purpose of this file: provide functions for handling input and to allow the use of them in scripting.        

#include //AnyMLNM-ONEHeaderFiles.h
#include "mlnmonekeys.h"

bool keypress(char, /*Whatever is needed to have an indefinate number of arguments*/)

//This function returns true if the character arguments' cooresponding keys are pressed
{

  if(keydown(char)) //If the keys you ask for are pressed return True
 {

  return true;

 }

 else //Else return false
 {
  return false;
 }

}

bool keyhold(char, int, /*Like above, indefinate number of char arguments and int be optional*/)
//This function returns true while the keys in the char arguments are held, or for the time in miliseconds under int
{
 if(/*int is defined*/) //If the scripter specifies a time
 {
  //Create a timer for int milliseconds

  while(keypress(char) and /*Timer not stoped*/) //While the player holds the key during the time return true
  {

   return true;
  }
 }

 if(/*int not defined*/) //If the scripter doesn't define a time
 {
  while(keypress(char)) //While the player holds the key return true
  {

   return true;
  }
 }

 else //If the player isn't holding a key return false
 {
  return false;
 }
}
