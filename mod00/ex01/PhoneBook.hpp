/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:53:16 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/12 19:09:26 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H

# define PHONE_BOOK_H
# include <string>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	
private:
	Contact _contacts[8];
};

#endif