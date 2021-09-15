/*
   Rect figure class.
*/

#ifndef RECT_H
#define RECT_H

#include "figure.h"

class RECT: public FIGURE
{
public:

    RECT(){}
    ~RECT(){}

    double sideA;
    double sideB;

    double Solve(const std::string& parametr) override
    {
        Read_Parametr(parametr);
        area = sideA * sideB;
        return area;
    }

protected:

    void Read_Parametr(const std::string& parametr) override
    {
        unsigned int position = parametr.find(' ');
        sideA = std::stod(parametr.substr(0, position), nullptr);
        sideB = std::stod(parametr.substr(position + 1), nullptr);
    }

};

#endif // RECT_H
