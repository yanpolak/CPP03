/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:27:37 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 21:27:37 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV
#define SCAV


#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string op);
    ScavTrap();//canonical
    ScavTrap&   operator=(ScavTrap const &to_assign);//canonical
    void    guardGate();
    void    attack(std::string ops);
    ~ScavTrap();//canonical
    ScavTrap(ScavTrap const  &copy);//canonical
};


#endif