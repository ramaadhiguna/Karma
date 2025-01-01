#include "lve_test_app.hpp"

namespace lve {
    // Random run implementation for the sake of building the window first
    // run all poll events
    void FirstApp::run() {
        while (!lveWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}