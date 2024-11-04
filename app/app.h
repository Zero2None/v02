#pragma once
#include <string>
#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
/*
* class declaration
*/
    class color
    {
    public:
        color();
        void set_red(double val);
        void set_green(double val);
        void set_blue(double val);

        double get_red() const;
        double get_green() const;
        double get_blue() const;

        unsigned get_color_ref() const;
        double get_luminance() const;

        std::string to_hex(int a);

    private:
        double red;
        double green;
        double blue;
    };
}


