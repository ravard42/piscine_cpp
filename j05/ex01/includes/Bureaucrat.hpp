/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:39:33 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 20:00:21 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat {

private:
	std::string	const			_name;
	int							_grade;


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

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat &		operator=( Bureaucrat const & src);

	std::string		getName( void ) const;
	int				getGrade( void ) const;
	void			increm( void );
	void			decrem( void );
	void			signForm( Form const & f ) const;
};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif
