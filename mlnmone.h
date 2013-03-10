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

//Purpose of this file: runscript function

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

