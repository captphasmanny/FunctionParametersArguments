//
//  main.cpp
//  FunctionParametersArguments
//
//  Created by Emanuel Alfaro on 11/7/23.
//

#include <iostream>

/*void doPrint()
{
    std::cout << "In doPrint()\n";
}

void printValue(int x)
{
    std::cout << x <<'\n';
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int num{std::cout << printValue(7)};
    std::cout <<  << '\n';
}

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;
}
void printDouble(int value)
{
    std::cout << value << " doubled is: " << value*2 << '\n';
}

int main ()
{
    printDouble(getValueFromUser());
    return 0;
}

int getNum()
{
    std::cout << "Please provide a number: ";
    int a{};
    std::cin >> a;
    return a;
}

void doubleNum(int x)
{
    std::cout << x << " doubled is: " << x*2 << '\n';
    
}

int main()
{
    doubleNum(getNum());
    return 0;
}

int getInteger()
{
    std::cout << "Please Enter a Number: ";
    int a{};
    std::cin >> a;
    
    return a;
}

void printInteger(int b)
{
    std::cout << b << " doubled is: " << b*2 << '\n';
}

int main()
{
    printInteger(getInteger());
    return 0;
}

int addNums(int x, int y)
{
    return x+y;
}

int main()
{
    std::cout << addNums(9, 8) << '\n';
}*/

int getNumber()
{
    std::cout << "Give a number: ";
    int b{};
    std::cin >> b;
    return b;
}

int doubleNumber(int x)
{
    std::cout << x << " * 2 = ";
    return x*2;
}

int main()
{
    std::cout << doubleNumber(getNumber());
    
    return 0;
}
