/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 21:54:13 by ravard            #+#    #+#             */
/*   Updated: 2018/01/09 21:18:07 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

char	*megaphone(char *arg) {
	size_t		i;

	i = -1;
	while (++i < strlen(arg))
		arg[i] = toupper(arg[i]);
	return arg;
}

int		main(int argc, char **argv) {
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
