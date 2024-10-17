#include "lve_window.h"
#include "first_app.h"

#include <stdexcept>

namespace lve {
	lve::LveWindow::LveWindow(int Width, int Height, std::string Name) : width{Width}, height{Height}, windowName{Name}
	{
		initWindow();
	}

	void lve::LveWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
		glfwSetKeyCallback(window, lve::first_app::key_callback);
	}

	void LveWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR* surface)
	{
		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS) {
			throw std::runtime_error("Failed to create window surface");
		}
	}


	lve::LveWindow::~LveWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}
}
