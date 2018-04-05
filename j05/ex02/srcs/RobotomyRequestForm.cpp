/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:30:21 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 23:19:47 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( void ) : AForm() {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target) : AForm("RobotomyRequestForm", 72, 45, target) {
	std::cout << "RobotomyRequestForm parametric constructor called with " << target << " target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : AForm(src) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &			RobotomyRequestForm::operator=( RobotomyRequestForm const & src ) {
	AForm 	* cast = this;

	*cast = src;
	return *this;
}

void							RobotomyRequestForm::action( void ) const {
	srand(time(NULL));
	AForm const	&	cast = *this;
	
	if (rand() % 2 == 0)
		std::cout << "BRROIUROUORR " << cast.getName() << "has been robotomized successfully " << std::endl;
	else
		std::cout << "failure in the robotomization of " << cast.getName() << std::endl;


}

void    						RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	this->testExec(executor);

}

std::ostream &		operator<<(std::ostream & o, RobotomyRequestForm const & rhs) {
	AForm const	&	cast = rhs;

	o << cast << std::endl;
	return o;
};
