//
//  png.h
//  C-ray
//
//  Created by Valtteri on 8.4.2020.
//  Copyright © 2020 Valtteri Koskivuori. All rights reserved.
//

#pragma once

void encodePNGFromArray(const char *filename, unsigned char *imgData, unsigned width, unsigned height, struct renderInfo imginfo);
