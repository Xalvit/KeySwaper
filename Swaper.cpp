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

void Swaper::Swap_Text(std::string& text)
{
	const int &length = text.size();
	this->Type_Backspace();
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

Swaper::~Swaper()
{
	
}
