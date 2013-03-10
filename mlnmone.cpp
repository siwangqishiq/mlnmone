//////////////////////////////////////
//The MRNDA-ONE engine prototype one//
//////////////////////////////////////

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
