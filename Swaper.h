#pragma once

#include "includer.h"

class Swaper
{
private:

	void Type_Backspace();

public:
	// Function
	void Swap_Text(std::string& text);
	// Accessors
	std::string GetText();

	~Swaper();
};

