/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:29:13 by ymarival          #+#    #+#             */
/*   Updated: 2023/07/06 21:29:13 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main()
{
    ScavTrap wes("ssf");

    wes.attack("omar");
    
    wes.guardGate();
    
    return 0;
}