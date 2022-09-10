#include "appbase.hpp"

namespace cge {
	void appbase::run() {
		while (!cgewindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}