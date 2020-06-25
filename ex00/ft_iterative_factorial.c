/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:41:32 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 08:50:32 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	long factor;
   	factor = 1;
	int i;
	i = 1;
	while(i <= nb){
		factor = factor * i;
	i++;
	}
	return factor;
}

