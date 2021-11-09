/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:09:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/10/28 12:56:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
		void	set_first_name(std::string name, Contact *contact);
		void	set_last_name(std::string name, Contact *contact);
		void	set_nickname(std::string nickname, Contact *contact);
		void	set_phone_number(std::string number, Contact *contact);
		void	set_darkest_secret(std::string secret, Contact *contact);

		Contact(void);	
		~Contact(void);
};

#endif
