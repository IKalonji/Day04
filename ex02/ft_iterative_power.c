/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:25:36 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 10:46:00 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int		ans;
	ans = nb;
	while (power > 1)
	{
		ans = ans * nb;
		power--;
	}

	return ans;
}


