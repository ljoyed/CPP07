/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:14:10 by loandrad          #+#    #+#             */
/*   Updated: 2024/06/05 21:28:04 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

void subjectTests(void)
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void myTests(void)
{
    std::cout << std::endl;
    std::cout << "Test 1: Using INTs in template" << std::endl;
    std::cout << "------------------------------" << std::endl;
    int a = 10;
    int b = 5;
    std::cout << "a         = " << a << std::endl;
    std::cout << "b         = " << b << std::endl;
    std::cout << "max(a, b) = " << max(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "Test 2: Using FLOATs in template" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    float c = 10.042f;
    float d = 5.04223f;
    std::cout << "c         = " << c << std::endl;
    std::cout << "d         = " << d << std::endl;
    std::cout << "min(c, d) = " << min(c, d) << std::endl;

    std::cout << std::endl;
    std::cout << "Test 3: Using STRINGs in template" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::string first = "Hello";
    std::string second = "World";
    std::cout << "Before the swap : ";
    std::cout << first << ", " << second << std::endl;
    swap(first, second);
    std::cout << "After the swap  : ";
    std::cout << first << ", " << second << std::endl;
    std::cout << std::endl;
}
int main(void)
{
    // subjectTests();
    myTests();
    return 0;
}