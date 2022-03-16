/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:16:09 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/16 19:19:18 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

# define WEAPON_H
# include <string>

class Weapon
{
public:

	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);

	const	std::string &getType(void);
	void setType(std::string type);

private:
	
	std::string _type;
};

#endif
