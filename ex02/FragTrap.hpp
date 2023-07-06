/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:33:28 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 22:33:28 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV
#define SCAV


#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string op);
    FragTrap();//canonical
    FragTrap&   operator=(FragTrap const &to_assign);//canonical
    void    highFive();
    ~FragTrap();//canonical
    FragTrap(FragTrap const  &copy);//canonical
    void    attack(std::string ops);
};

#endif