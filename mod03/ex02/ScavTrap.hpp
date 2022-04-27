/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:56:03 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 14:30:26 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap(void);
	ScavTrap(const ScavTrap &copy);
	ScavTrap(const std::string name);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &st);

	void guardGate(void);
};

#endif
