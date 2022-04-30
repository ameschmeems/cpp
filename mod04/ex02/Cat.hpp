/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:24:58 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 20:17:54 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:

	Cat(void);
	Cat(const Cat &copy);
	~Cat(void);

	Cat &operator=(const Cat &cat);

	void makeSound(void) const;
	std::string getIdea(int id);
	void setIdea(int id, std::string idea);

private:

	Brain *_brain;
};

#endif
