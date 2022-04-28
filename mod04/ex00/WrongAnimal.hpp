/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:38:11 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 12:40:35 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <iostream>

class WrongAnimal
{
public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &copy);
	~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &animal);

	void makeSound(void) const;
	std::string getType(void) const;

protected:

	std::string _type;
};

#endif