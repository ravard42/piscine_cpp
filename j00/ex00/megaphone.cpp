/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 21:54:13 by ravard            #+#    #+#             */
/*   Updated: 2018/03/26 00:57:47 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string		megaphone(std::string str) {
	std::locale		loc;
	size_t			i;

	i = -1;
	while (++i < str.length())
		str[i] = std::toupper(str[i], loc);
	return str;
}

int				main(int argc, char **argv) {
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		i = 0;
		while (++i < argc)
			std::cout << megaphone(argv[i]);
	}
	std::cout << std::endl;
	return 0;
}
