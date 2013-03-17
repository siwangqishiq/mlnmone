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

//Purpose of this file: runscript function, object functions

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

class class_loc_rot
{

 float x, y, z;

}

class mlnmobject //This is the class for in game objects
{

 void init(void)
 {
  //This function is run when the object is created
 }

 /*graphis data*/ draw(/*whatever*/)
 {
  //This function carries the data necesary to draw the object
 }

 class_loc_rot loc, rot; //object's location and rotation

}

mlnmobject create_instance(mlnmobject objecttype, /*attributes*/) //creates an instance of a mlnmobject
{
/* objecttype holds the generic object. The attribute parts is variable and expresses the values
for the different attributes.*/

 mlnmobject *objecttype = new mlnmobject;

 //objecttype.attributes = attributes; //assign all the attributes listed

 *objecttype.init();

 return *objecttype;

}
