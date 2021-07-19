/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:30:58 by maraurel          #+#    #+#             */
/*   Updated: 2021/07/19 10:23:19 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	//	Contact(void);	
	//	~Contact(void);
};

std::string	Contact::get_first_name()
{return (first_name);}

std::string	Contact::get_last_name(void)
{return (last_name);}

std::string	Contact::get_nickname(void)
{return (nickname);}

std::string	Contact::get_phone_number(void)
{return (phone_number);}

std::string	Contact::get_darkest_secret(void)
{return (darkest_secret);}

void	Contact::set_darkest_secret(std::string secret, Contact *contact)
{
	contact->darkest_secret = secret;
	return ;
}

void	Contact::set_phone_number(std::string number, Contact *contact)
{
	contact->phone_number = number;
	return ;
}

void	Contact::set_nickname(std::string nickname, Contact *contact)
{
	contact->nickname = nickname;
	return ;
}

void	Contact::set_last_name(std::string name, Contact *contact)
{
	contact->last_name = name;
	return ;
}

void	Contact::set_first_name(std::string name, Contact *contact)
{
	contact->first_name = name;
	return ;
}

void	add_contact(Contact *contact)
{
	std::string	info;
	static int	i;

	if (i >= 8)
		i = 0;
	std::cout << "First name: ";
	std::getline(std::cin >> std::ws, info);
	contact->set_first_name(info, contact);
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, info);
	contact->set_last_name(info, contact);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, info);
	contact->set_nickname(info, contact);
	std::cout << "Phone number: ";
	std::getline(std::cin >> std::ws, info);
	contact->set_phone_number(info, contact);
	std::cout << "Darkest secret: ";
	std::getline(std::cin >> std::ws, info);
	contact->set_darkest_secret(info, contact);
	i++;
}

void	search_contact(Contact contact[8])
{
	std::string	info;
	int		i;

	i = 0;
	std::cout << std::setw(10);
	std::cout << i << "|";
	info = contact[i].get_first_name();
	if (info.length() >= 10)
	{
		info.insert (9, ".");
		info.resize (10);
	}
	std::cout << std::setw(10);
	std::cout << info << "|";
	info = contact[i].get_last_name();
	std::cout << std::setw(10);
	std::cout << info << "|";
	info = contact[i].get_nickname();
	std::cout << std::setw(10);
	std::cout << info << "|";
	std::cout << std::endl;
}

int	main(void)
{
	Contact		contact[8];
	std::string	command;
	int		i;

	i = 0;
	while (1)
	{
		std::cout << "Type a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (command == "EXIT")
			exit (0);
		else if (command == "ADD")
		{
			if (i >= 8)
				i = 0;
			add_contact(&contact[i]);
			i++;
		}
		if (command == "SEARCH")
			search_contact(contact);
	}
}
