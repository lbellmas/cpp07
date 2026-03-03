#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename FT>
void iter(T *array, const int length, FT func)
{
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif