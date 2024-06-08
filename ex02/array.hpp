/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:09:54 by loandrad          #+#    #+#             */
/*   Updated: 2024/06/06 23:05:44 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
    private:
        T* _arr;
        unsigned int _size;

    public:
        Array() : _arr(0), _size(0) {} //default constructor
        
        Array(unsigned int size) : _arr(new T[size]()), _size(size) {} //parameterized constructor
        
        Array(const Array& orig) : _arr(new T[orig._size]), _size(orig._size) //copy constructor
        {
            for (unsigned int i = 0; i < _size; ++i)
                _arr[i] = orig._arr[i];
        }
        
        Array& operator=(const Array& orig) //assignment operator
        {
            if (this != &orig)
            {
                delete[] _arr;
                _size = orig._size;
                _arr = new T[_size];
                for (unsigned int i = 0; i < _size; ++i)
                    _arr[i] = orig._arr[i];
            }
            return *this;
        }
        
        ~Array() //destructor
        {
            delete[] _arr;
        }

        T& operator[](unsigned int index) //subscript operator non-const version
        {
            if (index >= _size)
                throw std::out_of_range("Index out of bounds");
            return _arr[index];
        }
        
        const T& operator[](unsigned int index) const //subscript operator const version
        {
            if (index >= _size)
                throw std::out_of_range("Index out of bounds");
            return _arr[index];
        }
        
        unsigned int size() const
        {
            return _size;
        }
};

#endif