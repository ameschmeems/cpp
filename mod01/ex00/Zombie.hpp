/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:44:29 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 16:09:15 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

# define ZOMBIE_H
# include <string>

class Zombie
{
public:

	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void announce(void);

private:

	std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif