print("MLNM-ONE material calculator. Copyright 2013 Unincorpoated Media. Released under the GPL see GPL for details.")

red = raw_input("Red= ")
green = raw_input("Green= ")
blue = raw_input("Blue= ")
alpha = raw_input("Alpha= ")
re = raw_input("Reflectivity= ")
ior = raw_input("IOR= ")
e = raw_input("Emission= ")
trans = raw_input("Translucency= ")
rough = raw_input("Roughness= ")

print(long( red + green*pow(2, 8) + blue*pow(2, 16) + alpha*pow(2, 32) + re*pow(2, 64) + ior*pow(2, 64) + e*pow(2, 128) + trans*pow(2, 256) + rough*pow(2, 512)))