/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:52:57 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 22:28:54 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

private:
	std::string	const			_name;
	bool						_signed;
	int	const					_gToSign;
	int	const					_gToExec;
	std::string					_target;


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
	
	class isNotSignedException : public std::exception {
		public:
			isNotSignedException( void );
			isNotSignedException( isNotSignedException const & src );
			virtual ~isNotSignedException( void ) throw();

			isNotSignedException &		operator=( isNotSignedException const & src);
			
			virtual const char* 	what() const throw();
	};
	

public:

	AForm( void );
	AForm( std::string name, int toSign, int toExec, std::string target );
	AForm( AForm const & src );
	~AForm( void );

	AForm &		operator=( AForm const & src);

	std::string		getName( void ) const;
	bool			getSigned( void ) const;
	int				getGToSign( void ) const;
	int				getGToExec( void ) const;
	void			beSigned( Bureaucrat const & b);
	std::string		getTarget( void ) const;
	virtual void	action( void ) const = 0;
	virtual void	execute(Bureaucrat const & executor) const = 0;
	void			testExec( const Bureaucrat & b ) const;
};

std::ostream &		operator<<(std::ostream & o, AForm const & rhs);


#endif
