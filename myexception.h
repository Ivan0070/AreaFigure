/*
    Custom exception class for a non-existen figure.
*/

#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <iostream>
#include <string>
#include <exception>

class MyException: public std::exception
{
private:

    std::string reason;

public:

    MyException(const char* why)
        :reason(why) {}

    ~MyException(){}

    virtual const char* what() const throw()
    {
        return reason.c_str();
    }

};

#endif // MYEXCEPTION_H
