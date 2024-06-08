/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:14:07 by loandrad          #+#    #+#             */
/*   Updated: 2024/06/05 20:58:21 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

template<typename T1>
T1 const &max(T1 const &a, T1 const &b)
{
    return (a >= b ? a : b);
}

template<typename T2>
T2 const &min(T2 const &a, T2 const &b)
{
    return (a <= b ? a : b);
}

template<typename T3>
void swap(T3 &a, T3 &b)
{
    T3 temp;
    temp = a;
    a = b;
    b = temp;
}

#endif