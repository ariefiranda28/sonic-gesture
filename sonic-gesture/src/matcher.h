
#ifndef _MATCHER_H
#define	_MATCHER_H

#include "common.h"

class Matcher {
    KNearest knn_matcher;
    Size winStride, padding;
    HOGDescriptor hog;
    vector<Point> locations;
    vector<float> descriptors;
    Mat handimg;
    Mat train;
    Mat labels_mat;
    vector<float> labels;

public:
    Matcher();
    Matcher(bool mirror);
    int match(vector<float> descriptors);
};

#endif
