#include "includer.h"
// ALL CODE BY XALVI
// XALVI BEST [;




int main()
{
	setlocale(LC_ALL,"RU");
	Swaper obj_main;
	try
	{
		while (true)
		{
			obj_main.Swap_Text();
			if (obj_main.Text_Swaped())
				Sleep(500);
			else
				Sleep(100);
		}
	}
	catch (...)
	{
		std::cout << "Something went wrong!";
	}

	return 0;
}
