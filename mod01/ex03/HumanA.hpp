/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:16:07 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 19:18:52 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H

# define HUMAN_A_H
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void);

private:

	Weapon &_weapon;
	std::string _name;
};

#endif