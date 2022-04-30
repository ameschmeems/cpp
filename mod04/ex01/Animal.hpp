/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:52:45 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 18:25:59 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
public:

	Animal(void);
	Animal(const Animal &copy);
	virtual ~Animal(void);

	Animal &operator=(const Animal &animal);

	virtual void makeSound(void) const;
	std::string getType(void) const;

protected:

	std::string _type;
};

#endif
