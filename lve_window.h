#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <vulkan/vulkan.h>

#include <string>

namespace lve {
	class LveWindow {

	public:
		LveWindow(int Width, int Height, std::string Name);
		~LveWindow();

		LveWindow(const LveWindow &) = delete;
		LveWindow& operator=(const LveWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }

		void initWindow();
		void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

		const int width;
		const int height;

		std::string windowName;

	private:
		GLFWwindow* window;
	};
}

