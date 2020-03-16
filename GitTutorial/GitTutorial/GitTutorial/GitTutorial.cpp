#include "stdafx.h"
#include <string>
#include <iostream>
#include"pch.h"
using namespace System;
bool Guess(int number)
{
    static int target = -1;

    if (number == target)
    {
        std::cout << "Correct !!";
        target = -1;
        return true;
    }
    else std::cout << "Wrong" << std::endl;

    return false;
}
int main(array<System::String^>^ args)
{
    return 0;
}