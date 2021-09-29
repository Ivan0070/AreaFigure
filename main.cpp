#include <memory>

#include "circle.h"
#include "rect.h"
#include "triangle.h"
#include "myexception.h"

auto Figure(const std::string &typeFigure) {
    if (typeFigure == "circle") {
        std::shared_ptr <FIGURE> figure(new CIRCLE());
        return figure;
    } else {
        if (typeFigure == "rect") {
            std::shared_ptr <FIGURE> figure(new RECT());
            return figure;
        } else {
            if (typeFigure == "triangle") {
                std::shared_ptr <FIGURE> figure(new TRIANGLE());
                return figure;
            } else {
                throw MyException("Figure not found!");
            }
        }
    }
}

int main() {
    {
        auto s = Figure("circle")->Solve("5");
        std::cout << s << std::endl;
    }

    {
        auto s = Figure("rect")->Solve("10 8");
        std::cout << s << std::endl;
    }

    {
        auto s = Figure("triangle")->Solve("6 5");
        std::cout << s << std::endl;
    }

    try {
        auto s = Figure("not_found")->Solve("50");
        std::cout << s << std::endl;

    } catch (std::exception &e) {

        std::cout << e.what() << std::endl;
    }

    std::cout << "Stop" << std::endl;

    return 0;
}
