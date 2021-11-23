/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:43:48 by maraurel          #+#    #+#             */
/*   Updated: 2021/11/23 12:43:49 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <stdlib.h>     
#include <time.h>

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm() : Form("Generic name", 1, 1) {};

	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &p);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &p);

		virtual void	execute(Bureaucrat const & executor) const;
};
