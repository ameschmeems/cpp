/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:17:59 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/12 17:24:36 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook(void);

	const Contact *get_contact(int i) const;

	void set_contact(void);

private:

	int	_num;
	int _count;
	Contact _contacts[8];
};

#endif