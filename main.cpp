#include "includer.h"
// ALL CODE BY XALVI
// XALVI BEST [;

//int Foo(int x, int y)
//{
//	return (x + y) / 2 + x * y;
//}
//
//bool Foo2(int x, int y)
//{
//	if (x != y)
//	{
//		return true;
//	}
//	else if (x == y)
//	{
//		return false;
//	}
//}

int main()
{
	setlocale(LC_ALL, "ru");
	Swaper obj_main;
	while (true)
	{
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
		}
	}
	return 0;
}
