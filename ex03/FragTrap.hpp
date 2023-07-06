/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:18:17 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 23:18:17 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :

	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	~FragTrap();

	FragTrap&	operator=(const FragTrap&);

	void	highFivesGuys( void );

	protected :

	FragTrap();
};

#endif