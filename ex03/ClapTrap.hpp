/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:14:35 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 23:14:35 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP
#define	CLAPTRAP

#include <iostream>
#include <string>

class ClapTrap
{
	public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap&);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printAttributes( void );

	protected:

	ClapTrap();

	bool	hasHitPoints( void );
	bool	hasEnergyPoints( void );

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif