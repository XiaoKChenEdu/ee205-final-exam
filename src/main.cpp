///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-final-exam - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   11_May_2022
///////////////////////////////////////////////////////////////////////////////


#include "config.h"
#include "classSquare.h"

using namespace std;


int main() {

    cout << "Hello, World!" << endl;
    classSquare mySquare(2);
    cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << endl;
    classRectangle myRectangle( 2, 4 );
    cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << endl;
    return 0;

}
