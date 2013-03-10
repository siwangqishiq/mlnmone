///////////////////////////////////
//The MRNDA-ONE video game engine//
///////////////////////////////////
//This file is licensed under the//
//GNU GPL. See LICENSE for more  //
//information.                   //
///////////////////////////////////

//**************************************************************************************
//*The purpose of this file is to provide functions for handling input and to allow the*
//*use of them in scripting.                                                           *
//*                                                                                    *
//*                                                                                    *
//*Edits to this file:                                                                 *
//*                                                                                    *
//*Created by Sam Jackson on the 16th of September in 2012                             *
//*                                                                                    *
//*Edited by Sam Jackson on 9/24/2012                                                  *
//*                                                                                    *
//*keydown refrences added by Sam Jackson on 10/8/2012                                 *
//**************************************************************************************/

#include //AnyMRNDA-ONEHeaderFiles.h
#include "mrndaonekeys.h"

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
