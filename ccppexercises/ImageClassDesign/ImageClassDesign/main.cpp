//
//  main.cpp
//  ImageClassDesign
//
//  Created by Tim on 11/15/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#include <iostream>
#include "image.h"

void apImage::cleanup();

void apImage::init();


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void apImage::cleanup ()
{
    // Put the object back into its original, null state.
    delete [] pixels_;
    width_ = 0;
    ￼
    height_ = 0;
    pixels_ = 0; }

void apImage::init ()
{
    // All memory allocation passes through this function.
    if (width_ > 0 && height_ > 0)
        pixels_ = new unsigned char [width_ * height_];
}
