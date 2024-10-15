#pragma once

#include "lve_window.h"
#include "lve_pipeline.h"
#include "lve_device.hpp"

namespace lve {
class first_app
{

public:
	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();
	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
private:
	LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
	LveDevice lveDevice = lveWindow;
	LvePipeline lvePipeline{
		lveDevice,
		"Shaders/simpleVertexShader.vert.spv", 
		"Shaders/simpleFragmentShader.frag.spv", 
		LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)
	};


};
}

