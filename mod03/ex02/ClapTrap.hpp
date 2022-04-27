/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:14:25 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 12:05:43 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:

	ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap(const std::string name);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &ct);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:

	std::string _name;
	int _hp;
	int _energy;
	int _damage;
};

#endif
