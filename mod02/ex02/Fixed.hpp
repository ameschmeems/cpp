/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:01 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/26 13:13:18 by kpucylo          ###   ########.fr       */
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

	Fixed &operator=(const Fixed &f);
	Fixed operator+(const Fixed &f) const;
	Fixed operator-(const Fixed &f) const;
	Fixed operator*(const Fixed &f) const;
	Fixed operator/(const Fixed &f) const;
	Fixed operator++(int);
	Fixed &operator++(void);
	Fixed operator--(int);
	Fixed &operator--(void);

	bool operator>(const Fixed &f) const;
	bool operator<(const Fixed &f) const;
	bool operator>=(const Fixed &f) const;
	bool operator<=(const Fixed &f) const;
	bool operator==(const Fixed &f) const;
	bool operator!=(const Fixed &f) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &f1, Fixed &f2);
	const static Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	const static Fixed &max(const Fixed &f1, const Fixed &f2);

private:

	int _fp_value;
	const static int _bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &num);

#endif
