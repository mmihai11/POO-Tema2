#include "CImg.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace cimg_library;
using namespace std;
double colorPixel(CImg <unsigned char> image, int i, int j)
{
    return image(i,j,0);
}
CImg<unsigned char> convertToGrayscale(CImg<unsigned char> image)
{
    double w = image.width(), h = image.height();

    for(int i = 0; i < w; i++)
        for(int j = 0; j < h; j++)
        {
            double valR = image(i,j,0,0), valG = image(i,j,0,1), valB = image(i,j,2);
            double avg = (valR + valG + valB)/3;
            image(i,j,0,0) = avg;
            image(i,j,0,1) = avg;
            image(i,j,0,2) = avg;
        }

    return image;
}
