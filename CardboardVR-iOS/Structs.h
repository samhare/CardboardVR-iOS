//
//  Structs.h
//  CardboardVR-iOS
//
//  Created by Peter Tribe on 2014-08-25.
//  Copyright (c) 2014 Peter Tribe. All rights reserved.
//

#ifndef CardboardVR_iOS_Structs_h
#define CardboardVR_iOS_Structs_h

//struct MotionVector {
//    float x;
//    float y;
//    float z;
//};

struct DistortionCoeffients {
    float c[2];
};

struct ViewportRect {
    float r[4];
};

typedef enum
{
    MONOCULAR = 0,
    LEFT = 1,
    RIGHT = 2
} EyeParamsEyeType;

#endif
