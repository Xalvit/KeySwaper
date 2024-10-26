#include "Swaper.h"

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
	int lang = LOWORD(GetKeyboardLayout(::GetCurrentThreadId()));

	if (lang == RUS)
	{
		PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
			INPUTLANGCHANGE_SYSCHARSET, ENG);
		lang = ENG;
	}
	else
	{
		PostMessage(GetForegroundWindow(), WM_INPUTLANGCHANGEREQUEST,
			INPUTLANGCHANGE_SYSCHARSET, RUS);
		lang = RUS;
	}
	
}

void Swaper::Swap_Text(std::string& text)
{
	const int &length = text.size();
	//this->Copy_Back();
	this->Switch_Language();
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

Swaper::Swaper()
{
	this->layout = GetKeyboardLayout(0);
	//std::cout << this->layout;
}

Swaper::~Swaper()
{
	
}
