/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:30:58 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/16 16:06:46 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string nickname);
		void	set_phone_number(std::string number);
		void	set_darkest_secret(std::string secret);

	//	Contact(void);	
	//	~Contact(void);
};

std::string	Contact::get_first_name(void)
{return (first_name);}

std::string	Contact::get_last_name(void)
{return (last_name);}

std::string	Contact::get_nickname(void)
{return (nickname);}

std::string	Contact::get_phone_number(void)
{return (phone_number);}

std::string	Contact::get_darkest_secret(void)
{return (darkest_secret);}

void	Contact::set_first_name(std::string name)
{
	if (name == "marco")
		std::cout << "FUNCIONOU";
	return ;
}

void	add_contact(Contact contact[8])
{
	std::string	info;

	std::cout << "First name: ";
	std::cin >> info;
	contact[0].set_first_name(info);
}

int	main(void)
{
	Contact		contact[8];
	std::string	command;

	while (1)
	{
		std::cout << "Type a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (command == "EXIT")
			exit (0);
		if (command == "ADD")
			add_contact(contact);
	}
}
