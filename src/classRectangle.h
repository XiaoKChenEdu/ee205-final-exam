///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-final-exam - EE 205 - Spr 2022
///
/// @file classShape.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "classShape.h"


class classRectangle : public classShape {

    protected:
    ///// Protected Attribute /////
        double length, width ;
    ///// Protected Attribute /////

    public:
    ///// Constructor /////
        classRectangle( const double newLength, const double newWidth ) ;
    ///// Constructor /////

    public:
    ///// Getters /////
        double getLength () ;
        double getWidth  () ;
    ///// Getters /////

    public:
    ///// Virtual Abstract Method /////
        double compute_area() noexcept override ;
    ///// Virtual Abstract Method /////

} ;


