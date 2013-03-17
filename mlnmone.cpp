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

//Purpose of this file: Starup and shutdown functons

#include <Python.h>
#include <SDL/SDL.h>
#include <physfs.h>

int main(int argc, char *argv[])
{
//Initialization

 PHYSFS_init(argv[0]); //Initialize PhysicsFS

 Py_Initialize(); //Initialize Python

 SDL_Init(); //Initialize SDL

 PHYSFS_AddToSearchPath(argv[1], 1); //Load the datafile

 PyRun_SimpleString("import mlnmone"); //Load MLNM-ONE API so user doesn't need to

 runscript("main.py");

 return 0;

}

void end_program(void)
{
//End Game

 Py_Finalize(); //Quit Python

 SDL_Quit(); //Quit SDL

 exit(0); //Quit the program

}
