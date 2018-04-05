/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:52:51 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 23:19:30 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm() {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : AForm("ShrubberyCreationForm", 145, 137, target) {
	std::cout << "ShrubberyCreationForm parametric constructor called with " << target << " target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : AForm(src) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &			ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src ) {
	AForm 	* cast = this;

	*cast = src;
	return *this;
}

void							ShrubberyCreationForm::action( void ) const {
	AForm const &		x = *this;
	std::ofstream		ofs( x.getTarget() + "_ShrubberyCreationForm");

	ofs << "  *  " << std::endl;
	ofs << " *** " << std::endl;
	ofs << "*****" << std::endl;
	ofs << "  *  " << std::endl;
	ofs << " *** " << std::endl;
	ofs << "*****" << std::endl;
	ofs << "  *  " << std::endl;
	ofs << " *** " << std::endl;
	ofs << "*****" << std::endl;
	ofs.close();
}

void    						ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	this->testExec(executor);

}

std::ostream &		operator<<(std::ostream & o, ShrubberyCreationForm const & rhs) {
	AForm const	&	cast = rhs;

	o << cast << std::endl;
	return o;
};
