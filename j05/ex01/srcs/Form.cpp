/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:52:51 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 20:03:21 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form( void ) : _name("undefined"), _signed(false), _gToSign(1), _gToExec(1) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form( std::string name, int toSign, int toExec ) : _name(name), _signed(false), _gToSign(toSign), _gToExec(toExec) {
	std::cout << "Form parametric constructor called -> (" << name << ", " << toSign << ", " << toExec << ")" << std::endl;
	this->test(toSign);
	this->test(toExec);
}

Form::Form( Form const & src ) : _name(src.getName()), _signed(src.getSigned()), _gToSign(src.getGToSign()), _gToExec(src.getGToExec()) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form( void ) {
	std::cout << "Form destructor called" << std::endl;
}

Form &			Form::operator=( Form const & src ) {
	this->_signed = src.getSigned();
	return *this;
}

std::string			Form::getName( void ) const {
	return this->_name;
}

bool				Form::getSigned( void ) const {
	return this->_signed;
}

int					Form::getGToSign( void ) const {
	return this->_gToSign;
}

int					Form::getGToExec( void ) const {
	return this->_gToExec;
}

void		Form::test(int grade) {
	try {
		if (grade <= 0)
			throw(Form::GradeTooHighException());
		else if (grade > 150)
			throw(Form::GradeTooLowException());
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;;
	}
}

void				Form::beSigned( Bureaucrat const & b) {
	try {
		if (b.getGrade() > this->_gToSign)
			throw(Form::GradeTooLowException());
		else
			this->_signed = true;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;;
	}
	b.signForm(*this);
}

std::ostream &		operator<<(std::ostream & o, Form const & rhs) {
	std::string		str;

	str = (rhs.getSigned()) ? "signed" : "not signed";
	o << "Formulaire : " << rhs.getName() << std::endl
		<< "	Etat : " << str << std::endl
		<< "	Grade to sign : " << rhs.getGToSign() << std::endl
		<< "	Grade to exec : " << rhs.getGToExec();
	return o;
};

//GradTooHighException


Form::GradeTooHighException::GradeTooHighException( void ) {
	//std::cout << "GradeTooHighException default constructor called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src ) {
	(void)src;
	//std::cout << "GradeTooHighException copy constructor called" << std::endl;
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw() {
	//std::cout << "GradeTooHighException destructor called" << std::endl;
}

Form::GradeTooHighException &		Form::GradeTooHighException::operator=( Form::GradeTooHighException const & src ) {
	(void)src;
	return *this;
}

const char* 				Form::GradeTooHighException::what() const throw() {	
	return "GradeTooHighException says : Grade invalid";
};

//GradTooLowException

Form::GradeTooLowException::GradeTooLowException( void ) {
	//std::cout << "GradeTooLowException default constructor called" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {
	(void)src;
	//std::cout << "GradeTooLowException copy constructor called" << std::endl;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw() {
	//std::cout << "GradeTooLowException destructor called" << std::endl;
}

Form::GradeTooLowException &		Form::GradeTooLowException::operator=( Form::GradeTooLowException const & src ) {
	(void)src;
	return *this;
}

const char* 				Form::GradeTooLowException::what() const throw() {
		return "GradTooLowException says : Grade invalid";
};
