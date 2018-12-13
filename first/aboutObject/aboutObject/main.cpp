//
//  main.cpp
//  aboutObject
//
//  Created by 陈勇 on 2018/12/14.
//  Copyright © 2018 陈勇. All rights reserved.
//

#include <iostream>
#define Point3d_print(pd) \
printf("(%g,%g,%g)",pd->x,pd->y,pd->z);

typedef struct Point3d
{
    float x;
    float y;
    float z;
}point3d;

int main(int argc, const char * argv[]) {
    // insert code here...
    point3d* pd = new point3d();
    pd->x = 3.1;
    pd->y = 4.2;
    pd->z = 2.2;
    
    Point3d_print(pd);
    delete pd;
    return 0;
}
