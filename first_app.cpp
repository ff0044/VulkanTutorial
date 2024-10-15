#include "first_app.h"

namespace lve {

	void lve::first_app::run()
	{
		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
	void lve::first_app::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
			glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
}