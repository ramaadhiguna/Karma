#include "lve_test_app.hpp"

//std lib
#include <cstdlib>
#include <iostream>
#include <stdexcept>

//Trigger lve windows class inside test app to deploy window
int main() {
    lve::FirstApp app{};

    try {
        app.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}