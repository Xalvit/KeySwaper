#include "includer.h"
// ALL CODE BY XALVI
// XALVI BEST [;




int main()
{
	setlocale(LC_ALL,"RU");
	Swaper obj_main;
	std::string main_text = "testing";
	try
	{
		while (true)
		{
			obj_main.Swap_Text(main_text);
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


	//char a;
	//std::cin >> a;
	//std::cout << (int)a;

	return 0;
}
