/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:28:25 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/03 16:43:51 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(void)
{
	int arr[4] = {1, 2, 3, 4};
	iter<int>(arr, 4, print);
	float arr2[4] = {1.1f, 2.2f, 3.3f, 4.4f};
	iter<float>(arr2, 4, print);
	return (0);
}
