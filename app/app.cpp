#include "app.h"
#include <algorithm>


namespace vsite::oop::v2
{
/*
* class member function implementations
*/
    color::color() : red(0.0), green(0.0), blue(0.0) {}
    color::color(const color& other) = default;
    color& color::operator=(const color& other) = default;

    void color::set_red(double val)
    {
        red = std::clamp(val, 0.0, 1.0);
    }


    void color::set_green(double val)
    {
        green = std::clamp(val, 0.0, 1.0);
    }


    void color::set_blue(double val)
    {
        blue = std::clamp(val, 0.0, 1.0);
    }


    double color::get_red() const
    {
        return red;
    }


    double color::get_green() const
    {
        return green;
    }


    double color::get_blue() const
    {
        return blue;
    }


    uint32_t color::get_color_ref() const
    {
        return RGB(static_cast<uint8_t>(red * 255), static_cast<uint8_t>(green * 255), static_cast<uint8_t>(blue * 255));
    }


    double color::get_luminance() const
    {
        return 0.2126 * red + 0.7152 * green + 0.0722 * blue;
    }


} // namespace
