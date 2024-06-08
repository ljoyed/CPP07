/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:30:40 by loandrad          #+#    #+#             */
/*   Updated: 2024/06/06 10:43:59 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, size_t len, void(*func)(T &xyz))
{
    if (len == 0 || func == 0)
        return;
    for (size_t i = 0; i < len; ++i)
        func(array[i]);
}

#endif