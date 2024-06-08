/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:14:10 by loandrad          #+#    #+#             */
/*   Updated: 2024/06/06 11:05:40 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void plusFive(int &x)
{
    x += 5;
}

void minusTen(int &x)
{
    x -= 10;
}

void nextChar(char &c)
{
    if (c == 'z' or c == 'Z')
        c -= 25;
    else
        c += 1;
}

void prevChar(char &c)
{
    if (c == 'a' or c == 'A')
        c += 25;
    else
        c -= 1;
}

void printTwoLines(void)
{
    std::cout << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    std::cout << std::endl;
    std::cout << "Test 1. Iter template on an INT array" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    int arr[] = {5, 10, 15, 20, 55};
    size_t len = sizeof(arr) / sizeof(int);
    std::cout << "Original Array" << std::endl;
    std::cout << "arr[] = { ";
    for (size_t i = 0; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}";
    printTwoLines();
    iter(arr, len, plusFive);
    std::cout << "Using iter template with plusFive" << std::endl;
    std::cout << "arr[] = { ";
    for (size_t i = 0; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}";
    printTwoLines();
    int arr1[] = {100, 200, 300, 400, 500};
    size_t len1 = sizeof(arr1) / sizeof(int);
    std::cout << "Original Array" << std::endl;
    std::cout << "arr1[] = { ";
    for (size_t i = 0; i < len1; ++i)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << "}";
    printTwoLines();
    iter(arr1, len1, minusTen);
    std::cout << "Using iter template with minusTen" << std::endl;
    std::cout << "arr1[] = { ";
    for (size_t i = 0; i < len1; ++i)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << "}" << std::endl;;
    std::cout << "-------------------------------------" << std::endl;
    printTwoLines();
    printTwoLines();
    std::cout << "Test 2. Iter template on a CHAR array" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    char chars[] = {'A', 'R', 't', 'z'};
    size_t length = sizeof(chars) / sizeof(char);
    std::cout << "Original Array" << std::endl;
    std::cout << "chars[] = { ";
    for (size_t i = 0; i < length; ++i)
    {
        std::cout << chars[i] << " ";
    }
    std::cout << "}";
    printTwoLines();
    iter(chars, length, nextChar);
    std::cout << "Using iter template with nextChar" << std::endl;
    std::cout << "chars[] = { ";
    for (size_t i = 0; i < length; ++i)
    {
        std::cout << chars[i] << " ";
    }
    std::cout << "}";
    printTwoLines();
    char chars1[] = {'b', 'm', 'X'};
    size_t length1 = sizeof(chars1) / sizeof(char);
    std::cout << "Original Array" << std::endl;
    std::cout << "chars1[] = { ";
    for (size_t i = 0; i < length1; ++i)
    {
        std::cout << chars1[i] << " ";
    }
    std::cout << "}";
    printTwoLines();
    iter(chars1, length1, prevChar);
    std::cout << "Using iter template with prevChar" << std::endl;
    std::cout << "chars1[] = { ";
    for (size_t i = 0; i < length1; ++i)
    {
        std::cout << chars1[i] << " ";
    }
    std::cout << "}" << std::endl;
    std::cout << "-------------------------------------";
    printTwoLines();
    return 0;
}