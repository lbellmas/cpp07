#include "iter.hpp"
#include <iostream>

void multiplyByTwo(int &x)
{
    x *= 2;
}

void printInt(const int &x)
{
    std::cout << x << " ";
}

void appendExclamation(std::string &s)
{
    s += "!!!";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, multiplyByTwo);
    iter(arr, 5, printInt);
    std::cout << std::endl;
    

    std::string strArr[] = {"Hello", "World", "!"};
    iter(strArr, 3, appendExclamation);
    for (size_t i = 0; i < 3; i++)
        std::cout << strArr[i] << " ";
    std::cout << std::endl;

    return 0;
}