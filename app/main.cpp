#include <iostream>
#include <format>
#include "app.h"

using namespace vsite::oop::v2;

int main()
{
    color c1;
    double crvena, zelena, plava;

    //input boje u R/G/B formatu
    std::cout << "Unesi crvenu komponentu boje: (0.0 - 1.0): ";
    std::cin >> crvena;
    std::cout << "Unesi zelenu komponentu boje: (0.0 - 1.0): ";
    std::cin >> zelena;
    std::cout << "Unesi plavu komponentu boje: (0.0 - 1.0): ";
    std::cin >> plava;

    c1.set_red(crvena);
    c1.set_green(zelena);
    c1.set_blue(plava);

    uint32_t color_ref = c1.get_color_ref();
    std::cout << std::format("Hexadecimalni zapis boje: #{:06X}\n", color_ref);

    return 0;

}
