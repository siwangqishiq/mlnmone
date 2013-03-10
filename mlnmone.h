#include <PHYSFS.h>
#include <Python.h>

bool runscript(char pyname[])
{
 //Loads and runs a specified script

 if(PHYSFS_exists(pyname)) //if the script exists
 {
  PHYSFS_openRead(pyname); //open the requested script

  //Run script

  return true;
 }

 else //if unable to open script
 {
  return false;
 }

}

