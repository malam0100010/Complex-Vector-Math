#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>



using namespace std;

#ifndef POINTMANIPFUNCS_H
#define POINTMANIPFUNCS_H

void point_input(float* pValX, float* pValY)
{
    float xValInFunc;
    cout << "Please enter an x coordinate: ";
    cin >> xValInFunc;

    *pValX = xValInFunc;

    float yValInFunc;
    cout << "Please enter an y coordinate: ";
    cin >> yValInFunc;

    *pValY = yValInFunc;
}

void vector_input(float* xCoordVec, float* yCoordVec)
{
    float xValInFunc;
    cout << "Please enter vector x coordinate: ";
    cin >> xValInFunc;

    float yValInFunc;
    cout << "Please enter vector y coordinate: ";
    cin >> yValInFunc;

    *xCoordVec = xValInFunc;
    *yCoordVec = yValInFunc; 

}

void angle_input(float* pAngle)
{
    float angleValInFunc;
    cout << "Please enter an angle in degrees: ";
    cin >> angleValInFunc;

    if (angleValInFunc < 0)
    {
        angleValInFunc += 360;
    }

    *pAngle = angleValInFunc;

}

void angle_to_vector(float angleVal, float* resultantXVal, float* resultantYVal)
{
    // Convert angle to radians
    float radiansVal = (angleVal * (float)M_PI) / 180;
    
    *resultantXVal = cos(radiansVal);
    *resultantYVal = sin(radiansVal);

}

void vector_normalize(float vecXCoord, float vecYCoord, float* normalXVecComp, float* normalYVecComp)
{
    float vecMagnitude = sqrt(vecXCoord * vecXCoord + vecYCoord * vecYCoord);
    

    *normalXVecComp = vecXCoord / vecMagnitude;

    *normalYVecComp = vecYCoord / vecMagnitude;

}

void rotate_point_by_vector(float inpXVal, float inpYVal, float vecXCoord, float vecYCoord, float* xRotatedVal, float* yRotatedVal)
{
    *xRotatedVal = inpXVal * vecXCoord - inpYVal * vecYCoord; 

    *yRotatedVal = inpXVal * vecYCoord + inpYVal * vecXCoord;   

}

float vector_to_angle(float vecXComponent, float vecYComponent)
{
    float vecAngle;
    vecAngle = atan2(vecYComponent, vecXComponent);

    vecAngle = vecAngle * 180 / (float)M_PI;

    return vecAngle;


}

#endif