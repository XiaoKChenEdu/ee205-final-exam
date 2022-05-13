///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-final-exam - EE 205 - Spr 2022
///
/// @file classRectangle.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////


#include "classRectangle.h"
#include "config.h"


classRectangle::classRectangle( const double newLength, const double newWidth ) {

    if ( ( newLength <= 0 ) || ( newWidth <= 0 ) ) {

        throw invalid_argument( "length and width both must be > 0" ) ;

    }

    classRectangle::length = newLength ;
    classRectangle::width  = newWidth  ;

}

double classRectangle::getLength() {

    return classRectangle::length ;

}

double classRectangle::getWidth() {

    return classRectangle::width ;

}

double classRectangle::compute_area() noexcept {

    return classRectangle::length * classRectangle::width ;

}
