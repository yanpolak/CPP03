/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:31:59 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 23:31:59 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :

	ScavTrap(std::string name);
	ScavTrap(const ScavTrap&);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap&);

	void	attack(const std::string& target);
	void	guardGate( void );

	protected :

	ScavTrap();
};

#endif