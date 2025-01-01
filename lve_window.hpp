#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve {
    class LveWindow {
        public:
        LveWindow(int weight, int height, std::string windowName);
        ~LveWindow();

        bool shouldClose () { return glfwWindowShouldClose(window); }
        private:
            void initWindow();
            const int width;
            const int height;

            std::string windowName;
            GLFWwindow *window;
    };
}