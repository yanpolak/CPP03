/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:23:22 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 23:23:22 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
#define DIAMONDTRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap&);
	~DiamondTrap();

	DiamondTrap&	operator=(const DiamondTrap&);

	using ScavTrap::attack;

	void	whoAmI( void );

	private :

	DiamondTrap();

	std::string	_name;
};

#endif