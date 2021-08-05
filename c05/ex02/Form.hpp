/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:40:37 by maraurel          #+#    #+#             */
/*   Updated: 2021/08/05 10:47:01 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool			isSigned;
		const int		signGrade;
		const int		execGrade;
		std::string		target;
		Form();
	public:
		Form(std::string name, int signGrade, int execGrade);
		virtual ~Form();
		Form(const Form &p);
		Form& operator=(const Form &p);

		std::string	const & getName(void)const;
		bool		const & getSigned(void)const;
		int		const & getSignGrade(void)const;
		int		const & getExecGrade(void)const;

		void		beSigned(Bureaucrat *bureaucrat);
		void		execute(Bureaucrat const & executor);

		void		setTarget(std::string target);
		std::string	const & getTarget(void)const;
		
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

std::ostream& operator<<(std::ostream& stream, const Form& p);

#endif
