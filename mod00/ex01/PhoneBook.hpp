/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:47:39 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/13 18:47:39 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H

# define PHONE_BOOK_H
# include "Contact.hpp"

class PhoneBook
{
public:

    PhoneBook(void);
    ~PhoneBook(void);

    void add(void);
    void search(void) const;

private:

    Contact _contacts[8];
    int _amount;
};

#endif
