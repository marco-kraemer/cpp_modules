/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:44:01 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:44:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm() : Form("Generic name", 1, 1) {};

	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &p);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &p);

		virtual void	execute(Bureaucrat const & executor) const;
};
