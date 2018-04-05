/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:27:52 by ravard            #+#    #+#             */
/*   Updated: 2018/04/03 20:08:09 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	b("Toto", 45);
	Form		test("invalide form", 151, -1);
	Form		f("autorisation décolage", 45, 30);
	Form		f2("autorisation d'attérir", 5, 30);


	f.beSigned(b);
	f2.beSigned(b);

	return 0;
}
