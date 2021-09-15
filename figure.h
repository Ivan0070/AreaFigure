/*
    Class containing the interface all figure.
*/

#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <string>

class FIGURE
{
public:

    FIGURE(){}
    virtual ~FIGURE(){}

    const double PI = 3.1415;
    double area = 0;

    // Function for calculating the area of a figure.
    virtual double Solve(const std::string& parametr){return area;}

protected:

    // Function for converting parameters for calculation.
    virtual void Read_Parametr(const std::string& parametr){}

};

#endif // FIGURE_H
