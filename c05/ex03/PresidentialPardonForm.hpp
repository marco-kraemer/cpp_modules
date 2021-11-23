/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:42:13 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:42:14 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm() : Form("Generic name", 1, 1) {};

	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &p);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &p);

		virtual void	execute(Bureaucrat const & executor) const;
};
