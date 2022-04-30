/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:03:08 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/28 19:17:14 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
public:

	Brain(void);
	Brain(const Brain &copy);
	~Brain(void);

	Brain &operator=(const Brain &brain);
	std::string getIdea(int id);
	void setIdea(int id, std::string idea);

private:

	std::string _ideas[100];
};

#endif
