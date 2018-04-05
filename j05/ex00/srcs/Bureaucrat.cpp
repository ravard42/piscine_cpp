/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:39:25 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 18:22:02 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( void ) : _name("undefined"), _grade(1) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Bureaucrat parametric constructor called -> (" << name << ", " << grade << ")" << std::endl;
	this->test(grade);

}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName()), _grade(src.getGrade()) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &			Bureaucrat::operator=( Bureaucrat const & src ) {
	this->_grade = src.getGrade();
	return *this;
}

std::string			Bureaucrat::getName( void ) const {
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void		Bureaucrat::test(int grade) {
	try {
		if (grade <= 0 && (this->_grade = 1))
			throw(Bureaucrat::GradeTooHighException());
		else if (grade > 150 && (this->_grade = 150))
			throw(Bureaucrat::GradeTooLowException());
		else
			this->_grade = grade;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;;
	}
}

void		Bureaucrat::increm( void ) {
	std::cout << "Appelle de la fonction membre increm sur " << *this << std::endl; 
	this->test(--(this->_grade));
}

void		Bureaucrat::decrem( void ) {
	std::cout << "Appelle de la fonction membre decrem sur " << *this << std::endl; 
	this->test(++(this->_grade));
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrate grade " << rhs.getGrade();
	return o;
};

//GradTooHighException


Bureaucrat::GradeTooHighException::GradeTooHighException( void ) {
	//std::cout << "GradeTooHighException default constructor called" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src ) {
	(void)src;
	//std::cout << "GradeTooHighException copy constructor called" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw() {
	//std::cout << "GradeTooHighException destructor called" << std::endl;
}

Bureaucrat::GradeTooHighException &		Bureaucrat::GradeTooHighException::operator=( Bureaucrat::GradeTooHighException const & src ) {
	(void)src;
	return *this;
}

const char* 				Bureaucrat::GradeTooHighException::what() const throw() {	
	return "GradeTooHighException says : 'Grade invalid set to max = 1'";
};

//GradTooLowException

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) {
	//std::cout << "GradeTooLowException default constructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {
	(void)src;
	//std::cout << "GradeTooLowException copy constructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw() {
	//std::cout << "GradeTooLowException destructor called" << std::endl;
}

Bureaucrat::GradeTooLowException &		Bureaucrat::GradeTooLowException::operator=( Bureaucrat::GradeTooLowException const & src ) {
	(void)src;
	return *this;
}

const char* 				Bureaucrat::GradeTooLowException::what() const throw() {
		return "GradTooLowException says : 'Grade invalid, set to min = 150'";
};
