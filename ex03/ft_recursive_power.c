/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:00:59 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 11:16:26 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return 1;
	else if (power%2 == 0)	
		return ft_recursive_power(nb, power/2) * ft_recursive_power(nb, power/2);
	else
		return nb * ft_recursive_power(nb, power/2) * ft_recursive_power(nb, power/2);
}


