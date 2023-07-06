/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:26:21 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 21:26:21 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate(void)
{
    std::cout<<"ScavTrap is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap(std::string op)
{
    std::cout << "constructor for scavTrap called\n";
    name = op;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap()
{
    std::cout << "defualt constructor for scavTrap called\n";
    name = "Default";
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &to_assign)
{
    this->name=to_assign.name;
    this->hit_points=to_assign.hit_points;
    this->energy_points=to_assign.energy_points;
    this->attack_damage=to_assign.attack_damage;
    return(*this);
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for scavTrap called\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    this->name=copy.name;
    this->hit_points=copy.hit_points;
    this->energy_points=copy.energy_points;
    this->attack_damage=copy.attack_damage;
}

void    ScavTrap::attack(std::string ops)
{
    if(hit_points == 0 || energy_points == 0)
        std::cout << "No points to attack\n";
    else
    {
        energy_points--;
        std::cout<<"ScavTrap "<<this->name<<" attacks "<<ops<<" causing "
        <<this->attack_damage<<" points of damage!\n";
    }
}