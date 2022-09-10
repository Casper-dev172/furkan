#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>


namespace cge {

	class cgewindow {

	public:
		cgewindow(int w, int h, std::string name);
		~cgewindow();

		cgewindow(const cgewindow&) = delete;
		cgewindow& operator=(const cgewindow&) = delete;

		bool shouldClose() { return  glfwWindowShouldClose(window); }
		void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);

	private:
		void initWindow();

		const int width;
		const int height;


		std::string windowname;
		GLFWwindow* window;

	};


}

