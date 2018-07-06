#include"MyLib.h"

namespace myLib {
	bool WriteToFile(const std::string& string_to_write, const std::string& file_name)
	{
		std::ofstream my_file;
		my_file.open(file_name + ".txt", std::ios::out | std::ios::app);
		if (my_file.is_open())
		{
			my_file << string_to_write + "\n";
			my_file.close();
			return true;
		}
		return false;
	}
}

