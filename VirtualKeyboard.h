
#include <CoreFoundation/CoreFoundation.h>
#include <Carbon/Carbon.h>
#include <iostream>


class VirtualKeyboard{
public:
	static void pressKey(int key);
private:
	static void applePressKey(int key);
	static CGKeyCode keyCodeForChar(char c);
};





