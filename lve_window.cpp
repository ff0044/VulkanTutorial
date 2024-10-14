#include "lve_window.h"

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
	}

	lve::LveWindow::~LveWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}
}
