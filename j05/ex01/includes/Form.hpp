/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:52:57 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 19:58:50 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	std::string	const			_name;
	bool						_signed;
	int	const					_gToSign;
	int	const					_gToExec;


	void	test( int grade );


	class GradeTooHighException : public std::exception {
		public:
			GradeTooHighException( void );
			GradeTooHighException( GradeTooHighException const & src );
			virtual ~GradeTooHighException( void ) throw();

			GradeTooHighException &		operator=( GradeTooHighException const & src);
			
			virtual const char* 	what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
		public:
			GradeTooLowException( void );
			GradeTooLowException( GradeTooLowException const & src );
			virtual ~GradeTooLowException( void ) throw();

			GradeTooLowException &		operator=( GradeTooLowException const & src);
			
			virtual const char* 	what() const throw();
	};
	

public:

	Form( void );
	Form( std::string name, int toSign, int toExec );
	Form( Form const & src );
	~Form( void );

	Form &		operator=( Form const & src);

	std::string		getName( void ) const;
	bool			getSigned( void ) const;
	int				getGToSign( void ) const;
	int				getGToExec( void ) const;
	void			beSigned( Bureaucrat const & b);
};

std::ostream &		operator<<(std::ostream & o, Form const & rhs);


#endif
