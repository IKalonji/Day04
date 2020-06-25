/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:16:33 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/25 09:20:37 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int ft_recursive_factorial(int nb)
{
	if (nb>1)
		return nb * ft_recursive_factorial (nb-1);
	else
		return 1;
}


