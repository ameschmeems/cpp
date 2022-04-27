/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:08:01 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/27 14:30:18 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap(void);
	FragTrap(const FragTrap &copy);
	FragTrap(const std::string name);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &ft);

	void highFivesGuys(void);
};

#endif
