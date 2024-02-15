#include <iostream>
#include "pointManipFuncs.h"

using namespace std;

int main()
{
    int userInp;
    float angleValue = 0;
    float xCoordinate = 0;
    float yCoordinate = 0;
    float vecXCoordinate = 0;
    float vecYCoordinate = 0;
    float xValRotated = 0;
    float yValRotated = 0;

    float* pValX = &xCoordinate;
    float* pValY = &yCoordinate;
    float* pAngle = &angleValue;
    float* pVecX = &vecXCoordinate;
    float* pVecY = &vecYCoordinate;
    float* pRotatedX = &xValRotated;
    float* pRotatedY = &yValRotated;

    do
    {
        cout << "Menu:" << endl;
        cout << "\t" << "1) Enter point (x, y) coordiante" << endl;
        cout << "\t" << "2) Rotate point by angle" << endl;
        cout << "\t" << "3) Rotate point by vector" << endl;
        cout << "\t" << "0) Quit" << endl;

        cout << "Choice: ";
        cin >> userInp;
        cout << endl;

        
        
        if (userInp == 1)
        {
            // Prompt user to enter an (x, y) coordinate
            point_input(pValX, pValY);

            

        } else if (userInp == 2)
        {
            // Rotate the current point by an angle
                // Prompt the user to enter an angle
                angle_input(pAngle);

                // Convert the angle into its corresponding vector
                angle_to_vector(angleValue, pVecX, pVecY);

                // Normalize the vector
                vector_normalize(vecXCoordinate, vecYCoordinate, pVecX, pVecY);

                // Rotate the point by the vector 
                rotate_point_by_vector(xCoordinate, yCoordinate, vecXCoordinate, vecYCoordinate, pRotatedX, pRotatedY);

                // Update the stored point and print the new point location
                cout << "The point (" << xCoordinate << ", " << yCoordinate << ") "
                << "is now at (" << xValRotated <<  ", " << yValRotated << ")" << endl;



        } else if (userInp == 3)
        {
            // Rotate the current point by a vector
                // Prompt the user to enter a vector <x, y>
                vector_input(pVecX, pVecY);

                cout << "The point (" << xValRotated << ", " << yValRotated << ") " 
                << "rotated by the vector " << "<" << vecXCoordinate << ", " << vecYCoordinate << ">" << " (" << vector_to_angle(vecXCoordinate, vecYCoordinate) 
                << " degrees)"; 

                // Normalizes the vector
                vector_normalize(vecXCoordinate, vecYCoordinate, pVecX, pVecY);

                // Rotates the point by the vector
                rotate_point_by_vector(xValRotated, yValRotated, vecXCoordinate, vecYCoordinate, pRotatedX, pRotatedY);

                // Updates the stored point and prints the new point location
 
                cout << " is now at (" << xValRotated << ", " <<  yValRotated << ")" << endl;    

                xCoordinate= xValRotated;
                yCoordinate = yValRotated;           


        } else if (userInp != 0)
        {
            cout << "Invalid Input. Please enter a valid input" << endl;
        }
        


        
    } while (userInp != 0);
    
    cout << "Goodbye!" << endl;

    return 0;

}


