#pragma once

#include <string>
#include <vector>


namespace cge {
	class cgepipeline {
	public:
		cgepipeline(const std::string& vertfilepath, const std::string& fragmentfilepath);

	private:
		static std::vector<char> readFile(const std::string& filepath);

		void creategraphicspipeline(const std::string& vertfilepath, const std::string& fragmentfilepath);
	};
};