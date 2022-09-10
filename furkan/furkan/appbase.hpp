#pragma once

#include "cwindow.hpp"

#include "shaderpipeline.hpp"

namespace cge {
	class appbase {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;



		void run();

	private:
		cgewindow cgewindow{ WIDTH, HEIGHT, "CASMO GAME ENGINE VULKAN" };
		cgepipeline cgepipeline{ "shader.vert.spv","fragment.frag.spv" };
	};
}