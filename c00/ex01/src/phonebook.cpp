/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:07:57 by maraurel          #+#    #+#             */
/*   Updated: 2021/10/28 13:08:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

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

void	get_index_and_search(Contact contact[8])
{
	std::string	info;
	int		index;
	int		i;

	std::cout << "Enter contact index: ";
	std::getline(std::cin >> std::ws, info);
	i = 0;
	while (info[i])
	{
		if (isdigit(info[i]) == 0)
		{
			std::cout << "Incorrect index" << std::endl;
			return ;
		}
		i++;
	}
	index = stoi(info);
	if (index < 1 || index > 8)
	{
		std::cout << "Incorrect index" << std::endl;
		return ;
	}
	index--;
	std::cout << "First name: " << contact[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contact[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contact[index].get_nickname() << std::endl;
	std::cout << "Phone number " << contact[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact[index].get_darkest_secret() << std::endl;
}

void	search_contact(Contact contact[8])
{
	std::string	info;
	int		i;

	i = 0;

	while (1)
	{
		info = contact[i].get_first_name();
		if (info.length() == 0)
			break ;

		// INDEX
		std::cout << std::setw(10);
		std::cout << (i + 1) << "|";
		
		// FIRST NAME
		info = contact[i].get_first_name();
		if (info.length() > 10)
		{
			info.insert (9, ".");
			info.resize (10);
		}
		std::cout << std::setw(10);
		std::cout << info << "|";
		
		// LAST NAME
		info = contact[i].get_last_name();
		if (info.length() > 10)
		{
			info.insert (9, ".");
			info.resize (10);
		}
		std::cout << std::setw(10);
		std::cout << info << "|";
		
		//NICKNAME
		info = contact[i].get_nickname();
		if (info.length() > 10)
		{
			info.insert (9, ".");
			info.resize (10);
		}
		std::cout << std::setw(10);
		std::cout << info << "|";
		std::cout << std::endl;

		i++;
	}
	get_index_and_search(contact);
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
		std::getline(std::cin >> std::ws, command);
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
