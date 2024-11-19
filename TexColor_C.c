// TextColor in C

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h> // C header srand, rand
#include <time.h> // C header time
//#include <string> // std::string
//#include <sstream> // std::stringstream

int main()
{
	//srand((unsigned int)time(nullptr));
	srand((unsigned int)time(NULL)); // use NULL for nullptr in C, 0 for a pointer

	unsigned fore = rand() % 0x10; // decimal 16
	unsigned back = rand() % 16; // hex 10

	//stringstream ss;
	//ss << hex << (back << 4) + fore;
	//string back_fore(ss.str());
	char command[9]; // 8 + 1 for \0 at end
	sprintf_s(command, 9, "color %02x", (back << 4) + fore); // sprintf_s(dest)ptr, dest_size, format, values)

	//string command = "color " + back_fore;
	//cout << command;

	//string system(command.c_str());
	system(command);
}