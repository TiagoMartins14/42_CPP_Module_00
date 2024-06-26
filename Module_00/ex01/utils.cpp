/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:27:19 by tiaferna          #+#    #+#             */
/*   Updated: 2024/06/25 15:39:29 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myAwesomePhoneBook.hpp"

std::string	inputGetter(std::string input, bool *prompt)
{
	if (!(std::cin >> input))
	{
		if (std::cin.eof())
			*prompt = false;
	}
	return input;
}
