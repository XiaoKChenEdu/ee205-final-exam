///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-final-exam - EE 205 - Spr 2022
///
/// @file debugMain.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////


#include "../src/config.h"
#include "../src/classSquare.h"


int main() {


    try {

        classRectangle errorRectangle0( -1, 10 ) ;
        cout << " @classRectangle errorRectangle0( -1, 10 ) ;" << endl ;
        cout << "    SUCCEED"                                  << endl ;

    } catch ( const exception &Error ) {

        cout << " @classRectangle errorRectangle0( -1, 10 ) ;" << endl ;
        cout << "    " << Error.what() << endl ;

    }

    try {

        classRectangle errorRectangle1( 10, -1 ) ;
        cout << " @classRectangle errorRectangle1( 10, -1 ) ;" << endl ;
        cout << "    SUCCEED"                                  << endl ;

    } catch ( const exception &Error ) {

        cout << " @classRectangle errorRectangle0( 10, -1 ) ;" << endl ;
        cout << "    " << Error.what()                         << endl ;

    }

    NL

    try {

        classSquare errorSquare( -1 ) ;
        cout << " @classSquare errorSquare( -1 ) ;" << endl ;
        cout << "    SUCCEED"                       << endl ;

    } catch ( const exception &Error ) {

        cout << " @classSquare errorSquare( -1 ) ;" << endl ;
        cout << "    " << Error.what()              << endl ;

    }

    NL

    try {

        classRectangle Rectangle( 10, 20 ) ;
        cout << " @classRectangle Rectangle( 10, 20 ) ;" << endl ;
        cout << "    SUCCEED"                            << endl ;

    } catch ( const exception &Error ) {

        cout << " @classRectangle Rectangle( 10, 20 ) ;" << endl ;
        cout << "    " << Error.what()                   << endl ;

    }

    try {

        classSquare Square( 10 ) ;
        cout << " @classSquare Square( 10 ) ;" << endl ;
        cout << "    SUCCEED"                  << endl ;

    } catch ( const exception &Error ) {

        cout << " @classSquare Square( 10 ) ;" << endl ;
        cout << "    " << Error.what()         << endl ;

    }

    NL

    classRectangle Rectangle ( 10, 20 ) ;
    classSquare    Square    ( 10       ) ;

    cout << " @Test for getters"            << endl ;
    cout << "    " << Rectangle.getLength() << endl ;
    cout << "    " << Rectangle.getWidth()  << endl ;
    cout << "    " << Square.getSide()      << endl ;

    cout << " @Test for compute_area()"        << endl ;
    cout << "    " << Rectangle.compute_area() << endl ;
    cout << "    " << Square.compute_area()    << endl ;


    return ( EXIT_SUCCESS ) ;

}