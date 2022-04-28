/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:24:58 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 12:26:55 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:

	Cat(void);
	Cat(const Cat &copy);
	~Cat(void);

	Cat &operator=(const Cat &cat);

	void makeSound(void) const;
};

#endif
