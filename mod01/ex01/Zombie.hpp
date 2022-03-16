/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:44:29 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 16:45:12 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

# define ZOMBIE_H
# include <string>
#include <iostream>

class Zombie
{
public:

	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void set_name(std::string name);

	void announce(void);
	std::string _name;

private:

	
};

Zombie *zombieHorde(int N, std::string name);

#endif