/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:52:51 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 23:18:26 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm( void ) : _name("undefined"), _signed(false), _gToSign(1), _gToExec(1), _target("vide") {
//	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm( std::string name, int toSign, int toExec, std::string target) : _name(name), _signed(false), _gToSign(toSign), _gToExec(toExec), _target(target){
//	std::cout << "AForm parametric constructor called -> (" << name << ", " << toSign << ", " << toExec << ", " << target << ")" << std::endl;
	this->test(toSign);
	this->test(toExec);
}

AForm::AForm( AForm const & src ) : _name(src.getName()), _gToSign(src.getGToSign()), _gToExec(src.getGToExec()) {
	this->_signed = src.getSigned();
	this->_target = src.getTarget();
//	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm( void ) {
//	std::cout << "AForm destructor called" << std::endl;
}

AForm &			AForm::operator=( AForm const & src ) {
	this->_signed = src.getSigned();
	this->_target = src.getTarget();
	return *this;
}

std::string			AForm::getName( void ) const {
	return this->_name;
}

bool				AForm::getSigned( void ) const {
	return this->_signed;
}

int					AForm::getGToSign( void ) const {
	return this->_gToSign;
}

int					AForm::getGToExec( void ) const {
	return this->_gToExec;
}


std::string			AForm::getTarget( void ) const {
	return this->_target;
}

void		AForm::test(int grade) {
	try {
		if (grade <= 0)
			throw(AForm::GradeTooHighException());
		else if (grade > 150)
			throw(AForm::GradeTooLowException());
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;;
	}
}

void				AForm::beSigned( Bureaucrat const & b) {
	try {
		if (b.getGrade() > this->_gToSign)
			throw(AForm::GradeTooLowException());
		else
			this->_signed = true;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;;
	}
	b.signAForm(*this);
}

void				AForm::testExec( Bureaucrat const & b ) const {
	try {
		if (!this->_signed)
			throw(AForm::isNotSignedException());
		else if (b.getGrade() > this->_gToExec)
			throw(AForm::GradeTooLowException());
		else {
			b.executeForm(*this);
			this->action();
		}
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;;
	}
}


std::ostream &		operator<<(std::ostream & o, AForm const & rhs) {
	std::string		str;

	str = (rhs.getSigned()) ? "signed" : "not signed";
	o << "Formulaire : " << rhs.getName() << std::endl
		<< "	Etat : " << str << std::endl
		<< "	Grade to sign : " << rhs.getGToSign() << std::endl
		<< "	Grade to exec : " << rhs.getGToExec() << std::endl
		<< "	Target : " << rhs.getTarget();
	return o;
};

//GradTooHighException


AForm::GradeTooHighException::GradeTooHighException( void ) {
	//std::cout << "GradeTooHighException default constructor called" << std::endl;
}

AForm::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src ) {
	(void)src;
	//std::cout << "GradeTooHighException copy constructor called" << std::endl;
}

AForm::GradeTooHighException::~GradeTooHighException( void ) throw() {
	//std::cout << "GradeTooHighException destructor called" << std::endl;
}

AForm::GradeTooHighException &		AForm::GradeTooHighException::operator=( AForm::GradeTooHighException const & src ) {
	(void)src;
	return *this;
}

const char* 				AForm::GradeTooHighException::what() const throw() {	
	return "GradeTooHighException says : Grade invalid";
};

//GradTooLowException

AForm::GradeTooLowException::GradeTooLowException( void ) {
	//std::cout << "GradeTooLowException default constructor called" << std::endl;
}

AForm::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {
	(void)src;
	//std::cout << "GradeTooLowException copy constructor called" << std::endl;
}

AForm::GradeTooLowException::~GradeTooLowException( void ) throw() {
	//std::cout << "GradeTooLowException destructor called" << std::endl;
}

AForm::GradeTooLowException &		AForm::GradeTooLowException::operator=( AForm::GradeTooLowException const & src ) {
	(void)src;
	return *this;
}

const char* 				AForm::GradeTooLowException::what() const throw() {
		return "GradTooLowException says : Grade invalid";
};

//isNotSignedException

AForm::isNotSignedException::isNotSignedException( void ) {
	//std::cout << "isNotSignedException default constructor called" << std::endl;
}

AForm::isNotSignedException::isNotSignedException( isNotSignedException const & src ) {
	(void)src;
	//std::cout << "isNotSignedException copy constructor called" << std::endl;
}

AForm::isNotSignedException::~isNotSignedException( void ) throw() {
	//std::cout << "isNotSignedException destructor called" << std::endl;
}

AForm::isNotSignedException &		AForm::isNotSignedException::operator=( AForm::isNotSignedException const & src ) {
	(void)src;
	return *this;
}

const char* 				AForm::isNotSignedException::what() const throw() {
		return "isNotSignedException says : you cannot execute a non-signed form";
};
