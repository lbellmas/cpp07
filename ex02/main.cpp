#include "Array.hpp"
#include "Array.tpp"
#include <iostream>


int main()
{
    try
    {
        Array<int>   check(2);

        check[0] = 10;
        check[1] = 20;

        std::cout << check[0] << std::endl;
        std::cout << check[1] << std::endl;
        std::cout << check[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<double>   check(2);

        check[0] = 10.0234546;
        check[1] = 20.4837561;

        Array<double>   hola(check);
        Array<double>      hola2(2);
        hola2 = hola;

        std::cout << check[0] << std::endl;
        std::cout << check[1] << std::endl;
        std::cout << hola[0] << std::endl;
        std::cout << hola2[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<std::string>   check(3);

        check[0] = "hola";
        check[1] = "adeu";

        std::cout << check[0] << std::endl;
        std::cout << check[1] << std::endl;
        std::cout << check[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<int> empty;

        std::cout << empty.size() << std::endl;
        std::cout << empty[0] << std::endl; // debe lanzar excepción
    }
    catch(const std::exception& e)
    {
        std::cerr << "Empty test: " << e.what() << std::endl;
    }
    try
    {
        Array<int> a(2);
        a[0] = 42;

        Array<int> b(a);
        b[0] = 100;

        std::cout << "Original: " << a[0] << std::endl; // debe ser 42
        std::cout << "Copy: " << b[0] << std::endl;     // debe ser 100
    }
    catch(const std::exception& e)
    {
        std::cerr << "Deep copy: " << e.what() << std::endl;
    }
    try
    {
        Array<int> big(1000);
        for (int i = 0; i < big.size(); i++)
            big[i] = i;

        std::cout << "Big test OK" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Big test: " << e.what() << std::endl;
    }
}