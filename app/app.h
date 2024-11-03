#pragma once

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
        color(const color& other);
        color& operator=(const color& other);

        void set_red(double val);
        void set_green(double val);
        void set_blue(double val);

        double get_red() const;
        double get_green() const;
        double get_blue() const;

        uint32_t get_color_ref() const;
        double get_luminance() const;

    private:
        double red;
        double green;
        double blue;
    };
}


