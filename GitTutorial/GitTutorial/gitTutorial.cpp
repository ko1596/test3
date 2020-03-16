#include "pch.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number)
{
	return false;
}
int main(array<System::String^>^ args)
{
	int guess;
	do {
		std::cout << "Choose a number between 1 - 100 :";
	} while (!Guess(guess));
	return 0;
}