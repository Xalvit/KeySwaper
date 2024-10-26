#pragma once

#include "includer.h"



class Swaper
{
private:

	enum languages
	{
		RUS = 0x419,
		ENG = 0x409
	};

	HKL layout;

	void Type_Backspace();
	void Ctrl_C();
	void Copy_Back();
	void Type_Changed_Text();
	void Switch_Language();

public:
	// Function
	void Swap_Text(std::string& text);
	// Accessors
	std::string GetText();

	Swaper();
	~Swaper();
};

