/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:32:05 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 16:10:17 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:

	DiamondTrap(void);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap(const std::string name);
	~DiamondTrap(void);

	DiamondTrap &operator=(const DiamondTrap &dt);

	using ScavTrap::attack;
	void whoAmI(void) const;
	int getHitPoints(void) const;
	int getEnergy(void) const;

private:

	std::string _name;
};

#endif
