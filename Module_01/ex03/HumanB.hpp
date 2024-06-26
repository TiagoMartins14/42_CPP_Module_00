/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:19:05 by tiaferna          #+#    #+#             */
/*   Updated: 2024/06/26 11:21:21 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:

	std::string	_name;
	Weapon		*_weapon;
	
public:

	HumanB( const std::string& name );
	void	setWeapon( Weapon& weapon );
	void	attack( void );
};
