/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:14:51 by ravard            #+#    #+#             */
/*   Updated: 2018/03/27 23:14:54 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main() {
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strPtr = &str;
	std::string		&strRef = str;

	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
	return 0;
}
