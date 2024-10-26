#pragma once

#include "includer.h"

class Swaper
{
private:

	enum key_codes
	{
		LCTRL = 0xA2,
		RCTRL = 0XA3,
		LALT = 0xA4,
		RALT = 0xA5
	};

	enum binds
	{
		LALT_LCTRL = 1,
		LCTRL_LALT,
		LCTRL_RALT,
		RALT_LCTRL,
		LALT_RALT,
		LCTRL_RCTRL,
		RCTRL_LALT,
		RCTRL_RALT
	};

	enum languages
	{
		RUS = 0x419,
		ENG = 0x409
	};

	bool LCTRL_b = false;
	bool RCTRL_b = false;
	bool LALT_b = false;
	bool RALT_b = false;

	int lang = LOWORD(GetKeyboardLayout(GetCurrentThreadId()));


	int GetBind();
	bool HotKeyPressed();
	int Bind_Checker(std::string& name);
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
	bool Text_Swaped();

	Swaper();
	~Swaper();
};

