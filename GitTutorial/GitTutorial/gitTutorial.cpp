
#include "pch.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number)
{
    if (number == target)
    {
        std::cout << "Correct !!";
        target = -1;
        return true;
    }
    else if (number > target) std::cout << "Smaller" << std::endl;
    else if (number < target) std::cout << "Bigger" << std::endl;

    return false;
}
int main(array<System::String^>^ args)
{
    int guess;

    do
    {
        std::cout << "Choose a number between 1 - 100 :";
    }
    while (!Guess(guess));

    return 0;
}