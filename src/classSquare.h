///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-final-exam - EE 205 - Spr 2022
///
/// @file classSquare.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "classRectangle.h"


class classSquare : public classRectangle {

    public:
    ///// Constructor /////
        classSquare( const double newSide ) : classRectangle( newSide, newSide ) {} ;
    ///// Constructor /////

    public:
    ///// Getters /////
        double getSide() ;
    ///// Getters /////

} ;