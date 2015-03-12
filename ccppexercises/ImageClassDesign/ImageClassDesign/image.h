//
//  image.h
//  ImageClassDesign
//
//  Created by Tim on 11/15/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#ifndef ImageClassDesign_image_h
#define ImageClassDesign_image_h

class apImage{
public:
    apImage();
    apImage(int width, int height);
    -apImage();
    
    apImage(const apImage& src);
    apImage& operator= (const apImage& src);
    
    void swap (apImage& src);
    
    void          setPixel (int x, int y, unsigned char pixel);
    unsigned char getPixel (int x, int y) const;
    
    bool isValid () const { return pixels_ != 0;}
    // Tests if the image data exists, and presumably valid.
    
    ￼￼￼int width ()  const { return width_;}
    int height () const { return height_;}
    
    class rangeError {};   // Exception class
  
private:
    void init    ();
    void cleanup ();
    // Initialize or cleanup the allocated image data
    
    int width_;              // Image width
    int height_;             // Image height
};

#endif
