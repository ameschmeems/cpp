/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:52:45 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 20:17:19 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <string>
#include <iostream>

class AAnimal
{
public:

	AAnimal(void);
	AAnimal(const AAnimal &copy);
	virtual ~AAnimal(void);

	AAnimal &operator=(const AAnimal &animal);

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;

protected:

	std::string _type;
};

#endif
