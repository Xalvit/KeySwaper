#include "Swaper.h"

int Swaper::Get_Key_Code(const char& symb)
{   
	switch (symb)
	{

	// rus keyboard

	case 'æ':
	{
		return 0xBA;
		break;
	}
	case 'ı':
	{
		return 0xDE;
		break;
	}
	case 'õ':
	{
		return 0xDB;
		break;
	}
	case 'ú':
	{
		return 0xDD;
		break;
	}
	case '¸':
	{
		return 0xC0;
		break;
	}
	case 'á':
	{
		return 0xBC;
		break;
	}
	case 'ş':
	{
		return 0xBE;
		break;
	}
	case 'ô':
	{
		return 0x41;
		break;
	}
	case 'è':
	{
		return 0x42;
		break;
	}
	case 'ñ':
	{
		return 0x43;
		break;
	}
	case 'â':
	{
		return 0x44;
		break;
	}
	case 'ó':
	{
		return 0x45;
		break;
	}
	case 'à':
	{
		return 0x46;
		break;
	}
	case 'ï':
	{
		return 0x47;
		break;
	}
	case 'ğ':
	{
		return 0x48;
		break;
	}
	case 'ø':
	{
		return 0x49;
		break;
	}
	case 'î':
	{
		return 0x4A;
		break;
	}
	case 'ë':
	{
		return 0x4B;
		break;
	}
	case 'ä':
	{
		return 0x4C;
		break;
	}
	case 'ü':
	{
		return 0x4D;
		break;
	}
	case 'ò':
	{
		return 0x4E;
		break;
	}
	case 'ù':
	{
		return 0x4F;
		break;
	}
	case 'ç':
	{
		return 0x50;
		break;
	}
	case 'é':
	{
		return 0x51;
		break;
	}
	case 'ê':
	{
		return 0x52;
		break;
	}
	case 'û':
	{
		return 0x53;
		break;
	}
	case 'å':
	{
		return 0x54;
		break;
	}
	case 'ã':
	{
		return 0x55;
		break;
	}
	case 'ì':
	{
		return 0x56;
		break;
	}
	case 'ö':
	{
		return 0x57;
		break;
	}
	case '÷':
	{
		return 0x58;
		break;
	}
	case 'í':
	{
		return 0x59;
		break;
	}
	case 'ÿ':
	{
		return 0x5A;
		break;
	}

	// eng keyboard

	case ';':
	{
		return 0xBA;
		break;
	}
	case '\'':
	{
		return 0xDE;
		break;
	}
	case'[':
	{
		return 0xDB;
		break;
	}
	case ']':
	{
		return 0xDD;
		break;
	}
	case '`':
	{
		return 0xC0;
		break;
	}
	case ',':
	{
		return 0xBC;
		break;
	}
	case '.':
	{
		return 0xBE;
		break;
	}
	case ' ':
	{
		return 0x20;
		break;
	}
	case 'a':
	{
		return 0x41;
		break;
	}
	case 'b':
	{
		return 0x42;
		break;
	}
	case 'c':
	{
		return 0x43;
		break;
	}
	case 'd':
	{
		return 0x44;
		break;
	}
	case 'e':
	{
		return 0x45;
		break;
	}
	case 'f':
	{
		return 0x46;
		break;
	}
	case 'g':
	{
		return 0x47;
		break;
	}
	case 'h':
	{
		return 0x48;
		break;
	}
	case 'i':
	{
		return 0x49;
		break;
	}
	case 'j':
	{
		return 0x4A;
		break;
	}
	case 'k':
	{
		return 0x4B;
		break;
	}
	case 'l':
	{
		return 0x4C;
		break;
	}
	case 'm':
	{
		return 0x4D;
		break;
	}
	case 'n':
	{
		return 0x4E;
		break;
	}
	case 'o':
	{
		return 0x4F;
		break;
	}
	case 'p':
	{
		return 0x50;
		break;
	}
	case 'q':
	{
		return 0x51;
		break;
	}
	case 'r':
	{
		return 0x52;
		break;
	}
	case 's':
	{
		return 0x53;
		break;
	}
	case 't':
	{
		return 0x54;
		break;
	}
	case 'u':
	{
		return 0x55;
		break;
	}
	case 'v':
	{
		return 0x56;
		break;
	}
	case 'w':
	{
		return 0x57;
		break;
	}
	case 'x':
	{
		return 0x58;
		break;
	}
	case 'y':
	{
		return 0x59;
		break;
	}
	case 'z':
	{
		return 0x5A;
		break;
	}
	case '0':
	{
		return 0x30;
		break;
	}
	case '1':
	{
		return 0x31;
		break;
	}
	case '2':
	{
		return 0x32;
		break;
	}
	case '3':
	{
		return 0x33;
		break;
	}
	case '4':
	{
		return 0x34;
		break;
	}
	case '5':
	{
		return 0x35;
		break;
	}
	case '6':
	{
		return 0x36;
		break;
	}
	case '7':
	{
		return 0x37;
		break;
	}
	case '8':
	{
		return 0x38;
		break;
	}
	case '9':
	{
		return 0x39;
		break;
	}
	default:
	{
		return -1;
		break;
	}
	}
}

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
	// LCTRL_RALT
	case 2:
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
	// LALT_RALT
	case 3:
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
	case 4:
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
	case 5:
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
	case 6:
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
	// LSHIFT_LCTRL
	case 7:
	{
		if (GetAsyncKeyState(LSHIFT) & 0x8000)
			this->LSHIFT_b = true;
		else
			this->LSHIFT_b = false;

		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (this->LSHIFT_b && this->LCTRL_b)
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
	// LSHIFT_RCTRL
	case 8:
	{
		if (GetAsyncKeyState(LSHIFT) & 0x8000)
			this->LSHIFT_b = true;
		else
			this->LSHIFT_b = false;

		if (GetAsyncKeyState(RCTRL) & 0x8000)
			this->RCTRL_b = true;
		else
			this->RCTRL_b = false;

		if (this->LSHIFT_b && this->RCTRL_b)
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
	// RSHIFT_LCTRL
	case 9:
	{
		if (GetAsyncKeyState(RSHIFT) & 0x8000)
			this->RSHIFT_b = true;
		else
			this->RSHIFT_b = false;

		if (GetAsyncKeyState(LCTRL) & 0x8000)
			this->LCTRL_b = true;
		else
			this->LCTRL_b = false;

		if (this->RSHIFT_b && this->LCTRL_b)
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
	// RSHIFT_RCTRL
	case 10:
	{
		if (GetAsyncKeyState(RSHIFT) & 0x8000)
			this->RSHIFT_b = true;
		else
			this->RSHIFT_b = false;

		if (GetAsyncKeyState(RCTRL) & 0x8000)
			this->RCTRL_b = true;
		else
			this->RCTRL_b = false;

		if (this->RSHIFT_b && this->RCTRL_b)
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
	// RSHIFT_RALT
	case 11:
	{
		if (GetAsyncKeyState(RSHIFT) & 0x8000)
			this->RSHIFT_b = true;
		else
			this->RSHIFT_b = false;

		if (GetAsyncKeyState(RALT) & 0x8000)
			this->RALT_b = true;
		else
			this->RALT_b = false;

		if (this->RSHIFT_b && this->RALT_b)
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
	if (name == "LCTRL_LALT")
		return LALT_LCTRL;

	if (name == "LCTRL_RALT")
		return LCTRL_RALT;

	if (name == "LALT_RALT")
		return LALT_RALT;

	if (name == "LCTRL_RCTRL")
		return LCTRL_RCTRL;

	if (name == "RCTRL_LALT")
		return RCTRL_LALT;

	if (name == "RCTRL_RALT")
		return RCTRL_RALT;

	if (name == "LSHIFT_LCTRL")
		return LSHIFT_LCTRL;

	if (name == "LSHIFT_RCTRL")
		return LSHIFT_RCTRL;

	if (name == "RSHIFT_LCTRL")
		return RSHIFT_LCTRL;

	if (name == "RSHIFT_RCTRL")
		return RSHIFT_RCTRL;

	if (name == "RSHIFT_RALT")
		return RSHIFT_RALT;
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
	std::string bufferText = this->GetText();
	int keyCode = 0;
	int wait_time = 100;

	for (int i = 0; i < bufferText.size(); ++i)
	{
		keyCode = this->Get_Key_Code(bufferText[i]);

		if (keyCode != -1)
		{
			Sleep(wait_time);
			wait_time = 0;

			// Simulate a button press
			keybd_event(keyCode,
				keyCode,
				KEYEVENTF_EXTENDEDKEY | 0,
				0);

			// Simulate a button release
			keybd_event(keyCode,
				keyCode,
				KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
				0);
		}

	}
	wait_time = 100;
}

void Swaper::Switch_Language()
{
	if (this->lang == RUS)
	{
		PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
			INPUTLANGCHANGE_SYSCHARSET, ENG);
		this->lang = ENG;
	}
	else if (this->lang == ENG)
	{
		PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
			INPUTLANGCHANGE_SYSCHARSET, RUS);
		this->lang = RUS;
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
	return text;
}

void Swaper::Swap_Text()
{
	//this->GetBind();
	if (this->HotKeyPressed())
	{
		this->Copy_Back();
		this->Switch_Language();
		this->Type_Changed_Text();
	 }	
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
