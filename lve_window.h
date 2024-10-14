#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace lve {
	class LveWindow {

	public:
		LveWindow(int Width, int Height, std::string Name);
		~LveWindow();

		void initWindow();

		const int width;
		const int height;

		std::string windowName;

	private:
		GLFWwindow* window;
	};
}

