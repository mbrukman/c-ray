//
//  color.h
//  C-Ray
//
//  Created by Valtteri Koskivuori on 28/02/15.
//  Copyright (c) 2015 Valtteri Koskivuori. All rights reserved.
//

#pragma once

#include "includes.h"

//Color
typedef struct {
	double red, green, blue, alpha;
}color;

//material
typedef struct {
	char name[MATERIAL_NAME_SIZE];
	char textureFilename[OBJ_FILENAME_LENGTH];
	color ambient;
	color diffuse;
	color specular;
	double reflectivity;
	double refractivity;
	double transparency;
	double sharpness;
	double glossiness;
	double refractionIndex;
}material;

//Some standard colours
extern color redColor;
extern color greenColor;
extern color blueColor;
extern color blackColor;
extern color whiteColor;
extern color frameColor;

//Return a color with given values
color colorWithValues(double red, double green, double blue, double alpha);

//Multiply two colors and return the resulting color
color multiplyColors(color *c1, color *c2);

//Add two colors and return the resulting color
color addColors(color *c1, color *c2);

//Multiply a color by a coefficient and return the resulting color
color colorCoef(double coef, color *c);

//temporary newMaterial func
material newMaterial(color diffuse, double reflectivity);
