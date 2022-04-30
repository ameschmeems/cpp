/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:04:52 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 19:58:43 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:

	Dog(void);
	Dog(const Dog &copy);
	~Dog(void);

	Dog &operator=(const Dog &dog);

	void makeSound(void) const;
	std::string getIdea(int id);
	void setIdea(int id, std::string idea);

private:

	Brain *_brain;
};

#endif
