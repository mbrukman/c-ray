//
//  textureloader.h
//  C-ray
//
//  Created by Valtteri Koskivuori on 02/04/2019.
//  Copyright © 2015-2020 Valtteri Koskivuori. All rights reserved.
//

#pragma once

//C-ray texture parser

/// Load a radiance HDRI file.
/// @param filePath Path to image file on disk.
struct hdr *loadHDRI(char *filePath);

/// Load a generic texture. Currently supports: JPEG, PNG, BMP, TGA, PIC, PNM
/// @param filePath Path to image file on disk
struct texture *loadTexture(char *filePath);

struct texture *loadTextureFromBuffer(unsigned char *buffer, unsigned int buflen);
