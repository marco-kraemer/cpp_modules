/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:07:29 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:07:30 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		std::string	name;
		int		grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &p);
		Bureaucrat& operator=(const Bureaucrat &p);
	
		int		const & getGrade(void) const;
		std::string	const & getName(void)const;

		void	incrementGrade(int amount);
		void	decrementGrade(int amount);
	
		class	GradeTooHighException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Grade too high";
			}
		};
	
		class	GradeTooLowException : public std::exception
		{
			const char* what() const noexcept override
			{
				return "Grade too low";
			}
		};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& p);

#endif
