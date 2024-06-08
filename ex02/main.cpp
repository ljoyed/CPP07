/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:47:52 by loandrad          #+#    #+#             */
/*   Updated: 2024/06/06 15:58:50 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "array.hpp"

void printTwoLines(void)
{
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    try
    {
        printTwoLines();
        std::cout << "Test 1 : Default constructor" << std::endl;
        std::cout << "----------------------------" << std::endl;
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        printTwoLines();
        std::cout << "Test 2 : Parameterized constructor" << std::endl;
        std::cout << "----------------------------------" << std::endl;
        unsigned int size = 5;
        Array<int> arr2(size);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        printTwoLines();
        std::cout << "Test 3 : Element initialization(default)" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;
        }

        printTwoLines();
        std::cout << "Test 4 : Copy constructor" << std::endl;
        std::cout << "-------------------------" << std::endl;
        Array<int> arr3(arr2);
        std::cout << "arr3 size: " << arr3.size() << std::endl;
        std::cout << "arr3[0]: " << arr3[0] << std::endl;
        std::cout << "arr2[0]: " << arr2[0] << std::endl;
        arr3[0] = 42;
        std::cout << "arr3[0]: " << arr3[0] << std::endl;
        std::cout << "arr2[0]: " << arr2[0] << std::endl;

        printTwoLines();
        std::cout << "Test 5 : Assignment Operator" << std::endl;
        std::cout << "----------------------------" << std::endl;
        Array<int> arr4;
        arr4 = arr3;
        std::cout << "arr4 size: " << arr4.size() << std::endl;
        std::cout << "arr4[1]: " << arr4[1] << std::endl;
        std::cout << "arr3[1]: " << arr3[1] << std::endl;
        arr4[1] = 84;
        std::cout << "arr4[1]: " << arr4[1] << std::endl;
        std::cout << "arr3[1]: " << arr3[1] << std::endl;


        printTwoLines();
        std::cout << "Test 6 : Index out of bounds" << std::endl;
        std::cout << "----------------------------" << std::endl;
        std::cout << arr4[arr4.size()] << std::endl;
        printTwoLines();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
        printTwoLines();
    }

    return 0;
}
