/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:01 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/25 17:03:10 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
public:

	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed(const int i);
	Fixed(const float i);
	~Fixed(void);

	Fixed &operator=(const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:

	int _fp_value;
	const static int _bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &num);

#endif
