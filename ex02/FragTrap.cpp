/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:32:27 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 22:32:27 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFive(void)
{
    std::cout<<"high Fiveeee\n";
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap called\n";
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    this->name=copy.name;
    this->hit_points=copy.hit_points;
    this->energy_points=copy.energy_points;
    this->attack_damage=copy.attack_damage;
}

FragTrap::FragTrap(std::string op)
{
    std::cout << "Constructor for FragTrap called\n";
    name = op;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}


FragTrap::FragTrap()
{
    std::cout << "Constructor for FragTrap called\n";
    name = "Default";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap &FragTrap::operator=(FragTrap const &to_assign)
{
        this->name=to_assign.name;
        this->hit_points=to_assign.hit_points;
        this->energy_points=to_assign.energy_points;
        this->attack_damage=to_assign.attack_damage;
    return(*this);
}

void    FragTrap::attack(std::string ops)
{
    if(hit_points == 0 || energy_points == 0)
        std::cout << "No points to attack\n";
    else
    {
        energy_points--;
        std::cout<<"FragTrap "<<this->name<<" attacks "<<ops<<" causing "
        <<this->attack_damage<<" points of damage!\n";
    }
}