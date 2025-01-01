#include "lve_window.hpp"

namespace lve {
    LveWindow::LveWindow(int w, int h, std::string wn) : width(w), height(h), windowName{wn} {
        initWindow();
    }

    LveWindow::~LveWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void LveWindow::initWindow() {
        // GLFW initialization with simple attribute (no api used and disable resizable)
        // Will create openGL windows with desired width, height, and name as parameters
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}