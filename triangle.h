/*
    Triangle figure class.
*/


#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class TRIANGLE: public FIGURE
{
public:

    TRIANGLE(){}
    ~TRIANGLE(){}

    double base;
    double height;

    double Solve(const std::string& parametr) override
    {
        Read_Parametr(parametr);
        area = 0.5 * base * height;
        return area;
    }

protected:

    void Read_Parametr(const std::string& parametr) override
    {
        unsigned int position = parametr.find(' ');
        base = std::stod(parametr.substr(0, position), nullptr);
        height = std::stod(parametr.substr(position + 1), nullptr);
    }

};

#endif // TRIANGLE_H
