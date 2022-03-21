/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:23:39 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/21 14:59:04 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H

# define HARL_H
# include <iostream>
# include <string>

class Harl
{
public:

	typedef void(Harl::*pointer)(void);
	void complain(std::string level);

private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif