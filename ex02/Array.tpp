#include "Array.hpp"

template <class T>
Array<T>::~Array()
{
    delete[] arr;
}

template <class T>
Array<T>::Array()
{
    arr = new T;
    _size = 0;
};
template <class T>
Array<T>::Array(unsigned int size)
{
    arr = new T[size];
    _size = size;
};
template <class T>
Array<T>::Array(const Array &copy)
{
    unsigned int p = 0;
    _size = copy.size();
    arr = new T[_size];
    while (p < _size)
    {
        arr[p] = copy.arr[p];
        p++;
    }
};
template <class T>
const Array<T> &Array<T>::operator=(const Array &original)
{
    if (&original != this)
    {
        delete[] arr;
        _size = original.size();
        arr = new T[_size];
        for(unsigned int i = 0; i < _size; i++)
            arr[i] = original.arr[i];
    }
    return (*this);
};

template <class T>
T &Array<T>::operator[](unsigned int p)
{
    if (p >= _size)
        throw (IndexOutOfBounds());
    return (arr[p]);
};

template <class T>
const char* Array<T>::IndexOutOfBounds::what() const throw()
{
    return ("Index out of bounds");
};
template <class T>
int Array<T>::size() const
{
    return (_size);
};