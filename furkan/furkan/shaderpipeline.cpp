#include "shaderpipeline.hpp"


#include <fstream>
#include <stdexcept>
#include <iostream>

namespace cge {

	cgepipeline::cgepipeline(const std::string& vertfilepath, const std::string& fragmentfilepath) {

		creategraphicspipeline(vertfilepath, fragmentfilepath);
	}

	std::vector<char> cgepipeline::readFile(const std::string& filepath) {
		std::ifstream file(filepath, std::ios::ate | std::ios::binary);


		if (!file.is_open()) {
			std::cout << "acamadým abe" << std::endl;
		}

		size_t filesize = static_cast<size_t>(file.tellg());
		std::vector<char> buffer(filesize);

		file.seekg(0);
		file.read(buffer.data(), filesize);


		file.close();
		return buffer;

	}

	void cgepipeline::creategraphicspipeline(const std::string& vertfilepath, const std::string& fragmentfilepath){
		auto vertcode = readFile(vertfilepath);
		auto fragmentcode = readFile(fragmentfilepath);
		std::cout << "vertex shader boyutu" << vertcode.size()  <<std::endl;
		std::cout << "fragment shader boyutu" << fragmentcode.size() <<std::endl;

		
	}



}