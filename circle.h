/*
    Circle figure class.
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class CIRCLE: public FIGURE
{
public:

    CIRCLE(){}
    ~CIRCLE(){}

    double radius;

    double Solve(const std::string& parametr) override
    {
        Read_Parametr(parametr);
        area = PI * radius * radius;
        return area;
    }

protected:

    void Read_Parametr(const std::string& parametr) override
    {
        std::string strBuff = parametr;
        radius = std::stod(strBuff, nullptr);
    }

};


#endif // CIRCLE_H
