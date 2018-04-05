/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:43:01 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 23:18:58 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm( void ) : AForm() {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target) : AForm("PresidentialPardonForm", 25, 5, target) {
	std::cout << "PresidentialPardonForm parametric constructor called with " << target << " target" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : AForm(src) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &			PresidentialPardonForm::operator=( PresidentialPardonForm const & src ) {
	AForm 	* cast = this;

	*cast = src;
	return *this;
}

void							PresidentialPardonForm::action( void ) const {
	AForm const	&	cast = *this;
	
	std::cout << cast.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void    						PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	this->testExec(executor);

}

std::ostream &		operator<<(std::ostream & o, PresidentialPardonForm const & rhs) {
	AForm const	&	cast = rhs;

	o << cast << std::endl;
	return o;
};
