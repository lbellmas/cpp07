#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array {
    private:
        T   *arr;
        unsigned int _size;
    public:
        ~Array();
        Array();
        Array(unsigned int size);
        Array(const Array &copy);
        const Array &operator=(const Array &original);
        T &operator[](unsigned int p);
        class IndexOutOfBounds : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        int size() const;
};

#endif