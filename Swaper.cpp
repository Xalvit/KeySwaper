#include "Swaper.h"

int Swaper::GetBind()
{

	std::string bind_name;
	std::string bind_str;

	short start_of_bind_name = 13;
	short end_of_bind_name = start_of_bind_name;

	std::ifstream binds_file("ALL_BUTTONS_BINDS.txt");

	std::ostringstream ss;

	if (!binds_file.is_open())
		throw -1;

	ss << binds_file.rdbuf();
	binds_file.close();

	bind_str = ss.str();

	for (short i = 13;;++i)
	{
		if (bind_str[i] != '\n')
		{
			end_of_bind_name += 1;
		}
		else
			break;
	}

	for (int i = 13; i < end_of_bind_name; i++)
	{
		bind_name += bind_str[i];
	}

	return this->Bind_Checker(bind_name);
}

bool Swaper::HotKeyPressed()
{
	switch (this->GetBind())
	{
	// LALT_LCTRL
	case 1:
	{
		if (GetAsyncKeyState(LALT) & 0x8000)
			this->LALT_b = true;
		else
			this->LALT_b = false;

		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (this->LALT_b && this->LCTRL_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// LCTRL_LALT
	case 2:
	{
		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (GetAsyncKeyState(LALT) & 0x8000)
			this->LALT_b = true;
		else
			this->LALT_b = false;

		if (this->LCTRL_b && this->LALT_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// LCTRL_RALT
	case 3:
	{
		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (GetAsyncKeyState(RALT) & 0x8000)
			this->RALT_b = true;
		else
			this->RALT_b = false;

		if (this->LCTRL_b && this->RALT_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// RALT_LCTRL
	case 4:
	{
		if (GetAsyncKeyState(RALT) & 0x8000)
			this->RALT_b = true;
		else
			this->RALT_b = false;

		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (this->RALT_b && this->LCTRL_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// LALT_RALT
	case 5:
	{
		if (GetAsyncKeyState(LALT) & 0x8000)
			this->LALT_b = true;
		else
			this->LALT_b = false;

		if (GetAsyncKeyState(RALT) & 0x8000)
			this->RALT_b = true;
		else
			this->RALT_b = false;

		if (this->LALT_b && this->RALT_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// LCTRL_RCTRL
	case 6:
	{
		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (GetAsyncKeyState(RCTRL) & 0x8000)
			this->RCTRL_b = true;
		else
			this->RCTRL_b = false;

		if (this->LCTRL_b && this->RCTRL_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// RCTRL_LALT
	case 7:
	{
		if (GetAsyncKeyState(RCTRL) & 0x8000)
			this->RCTRL_b = true;
		else
			this->RCTRL_b = false;

		if (GetAsyncKeyState(LALT) & 0x8000)
			this->LALT_b = true;
		else
			this->LALT_b = false;

		if (this->RCTRL_b && this->LALT_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	// RCTRL_RALT
	case 8:
	{
		if (GetAsyncKeyState(RCTRL) & 0x8000)
			this->RCTRL_b = true;
		else
			this->RCTRL_b = false;

		if (GetAsyncKeyState(RALT) & 0x8000)
			this->RALT_b = true;
		else
			this->RALT_b = false;

		if (this->RCTRL_b && this->RALT_b)
		{
			return true;
			break;
		}
		else
		{
			return false;
			break;
		}
	}
	default:
		{
			return false;
			break;
		}
	}
}

int Swaper::Bind_Checker(std::string& name)
{
	if (name == "LALT_LCTRL")
		return LALT_LCTRL;

	if (name == "LCTRL_LALT")
		return LCTRL_LALT;

	if (name == "LCTRL_RALT")
		return LCTRL_RALT;

	if (name == "RALT_LCTRL")
		return RALT_LCTRL;

	if (name == "LALT_RALT")
		return LALT_RALT;

	if (name == "LCTRL_RCTRL")
		return LCTRL_RCTRL;

	if (name == "RCTRL_LALT")
		return RCTRL_LALT;

	if (name == "RCTRL_RALT")
		return RCTRL_RALT;
}

void Swaper::Type_Backspace()
{

	// Simulate a backspace press

	keybd_event(0x08,
		0x08,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	Sleep(1);

	// Simulate a backspace release
	keybd_event(0x08,
		0x08,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

void Swaper::Ctrl_C()
{ // C = 0x43; LCtrl = 0xA2
	// Simulate a LCtrl press

	keybd_event(0xA2,
		0xA2,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);
	// Simulate a C press
	keybd_event(0x43,
		0xA2,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);
	// Simulate a C release
	keybd_event(0x43,
		0xA2,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);

	Sleep(1);

	// Simulate a LCtrl release
	keybd_event(0xA2,
		0xA2,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

void Swaper::Copy_Back()
{
	this->Ctrl_C();
	this->Type_Backspace();
}

void Swaper::Type_Changed_Text()
{

}

void Swaper::Switch_Language()
{

	if (this->lang == RUS)
	{
		PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
			INPUTLANGCHANGE_SYSCHARSET, ENG);
		this->lang = ENG;
	}
	else
	{
		PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
			INPUTLANGCHANGE_SYSCHARSET, RUS);
		this->lang = RUS;
	}
	
}

void Swaper::Swap_Text(std::string& text)
{
	const int &length = text.size();

	this->GetBind();
	if (this->HotKeyPressed())
	{
		//this->Copy_Back();
		this->Switch_Language();
		this->Type_Changed_Text();
	}
}



std::string Swaper::GetText()
{
	if (!OpenClipboard(nullptr))
	{
		return ""; // Return if buffer can't be opened
	}

	if (!IsClipboardFormatAvailable(CF_TEXT)) 
	{
		CloseClipboard();  // Close buffer
		return "";  // If text can't be got
	}

	HANDLE hData = GetClipboardData(CF_TEXT);

	if (hData == nullptr)
	{
		CloseClipboard();  // Close buffer
		return "";  // If cant get data
	}

	char* pszText = static_cast<char*>(GlobalLock(hData));

	if (pszText == nullptr) 
	{
		CloseClipboard();  // Close buffer
		return "";  // If can't block global memory
	}
	
	std::string text(pszText); // copy text to string C++

	// Unlock data
	GlobalUnlock(hData);

	// Close buffer
	CloseClipboard();

	delete pszText;
	delete hData;

	return text;
}

bool Swaper::Text_Swaped()
{
	if (this->HotKeyPressed())
		return true;
	else
		return false;
}

Swaper::Swaper()
{

}

Swaper::~Swaper()
{
	
}
