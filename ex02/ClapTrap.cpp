/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:26:55 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 22:26:55 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if(hit_points == 0 || energy_points == 0)
        std::cout << "No points to attack\n";
    else
    {
        energy_points--;
        std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<" causing "
            <<this->attack_damage<<" points of damage!\n";
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hit_points >= amount){
        hit_points -= amount;
        std::cout<<"damage taken\n";}
    else
        hit_points = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "Cop constructor callled for ClapTrap\n";
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
}
ClapTrap&    ClapTrap::operator=(ClapTrap const & rhs)
{
    this->name = rhs.name;
    this->hit_points = rhs.hit_points;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.attack_damage;
    return(*this);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energy_points == 0 || hit_points == 0)
        std::cout <<"No points to be repaired\n";
    else
    {
        energy_points--;
        hit_points += amount;
        std::cout << "Repaired\n";
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destrucotr for ClapTrap called\n";
}

ClapTrap::ClapTrap():name("Default"), hit_points(100), energy_points(100), attack_damage(30) {
    std::cout << "Default Constructor for ClapTrap called\n";
}

ClapTrap::ClapTrap(std::string op) : name(op), hit_points(100), energy_points(100), attack_damage(30) {
    std::cout << "Constructor for ClapTrap called\n";
}