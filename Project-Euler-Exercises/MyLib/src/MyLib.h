#pragma once
#include <string>
#include <fstream>
#include <iostream>

namespace myLib {
	bool WriteToFile(const std::string& string_to_write, const std::string& file_name);
}