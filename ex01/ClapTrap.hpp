/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:23:38 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 21:23:38 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP
#define CLAP

#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    unsigned int    hit_points;
    unsigned int    energy_points;
    unsigned int    attack_damage;

public:
    ClapTrap(); //default canonical
    ~ClapTrap(); // default
    ClapTrap(std::string op);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    ClapTrap&    operator=(ClapTrap const & rhs); //assignement for canonical form
    ClapTrap(ClapTrap const &copy); //copy constructor for canonical form
    void beRepaired(unsigned int amount);
};

#endif