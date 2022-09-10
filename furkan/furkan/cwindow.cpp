#include "cwindow.hpp"
#include <iostream>

namespace cge {
	cgewindow::cgewindow(int w, int h, std::string name) : width{ w }, height{ h }, windowname{ name }{
		initWindow();
	}

	cgewindow::~cgewindow() {
		glfwDestroyWindow(window);
		glfwTerminate();

	};

	void cgewindow :: initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);


		window = glfwCreateWindow(width, height, windowname.c_str(), nullptr, nullptr);



	}

	void cgewindow::createWindowSurface(VkInstance instance, VkSurfaceKHR *surface) {
		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS) {
			std::cout << "window acýlýrken sorun olustu" << std::endl;
 		}
	}



}

