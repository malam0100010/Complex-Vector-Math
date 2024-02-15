#ifndef POINTMANIPFUNCS_H
#define POINTMANIPFUNCS_H

void point_input(float* pValX, float* pValY);

void angle_input(float* pAngle);

void angle_to_vector(float angleVal, float* resultantXVal, float* resultantYVal);

void vector_normalize(float vecXCoord, float vecYCoord, float* normalXVecComp, float* normalYVecComp);

void rotate_point_by_vector(float inpXVal, float inpYVal, float vecXCoord, float vecYCoord, float* xRotatedVal, float* yRotatedVal);

void vector_input(float* xCoordVec, float* yCoordVec);

float vector_to_angle(float vecXComponent, float vecYComponent);

#endif