/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:47:30 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/13 18:47:30 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H
# include <string>

class Contact
{
public:

	Contact(void);
	~Contact(void);

	void set_fname(std::string str);
	void set_lname(std::string str);
	void set_nname(std::string str);
	void set_number(std::string str);
	void set_secret(std::string str);

	std::string get_fname(void) const;
	std::string get_lname(void) const;
	std::string get_nname(void) const;
	std::string get_number(void) const;
	std::string get_secret(void) const;

private:

	std::string _fname;
	std::string _lname;
	std::string _nname;
	std::string _number;
	std::string _secret;
};

#endif
