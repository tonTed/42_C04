/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:19:55 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:16:47 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../ex05/ft_atoi_base.c"

int main()
{
	printf("== %d\n", ft_atoi_base("---+--+ 1f7b", "0123456789abcdef"));
	printf("== %d\n", ft_atoi_base("---+--+110000000000000000000000000000010", "01"));
	printf("== %d\n", ft_atoi_base("---+-+1111111111111111111111111111111", "01"));
	printf("== %d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("== %d\n", ft_atoi_base("fvfe", "poneyvif"));
	printf("== %d\n", ft_atoi_base("111101111011", "1231"));
	printf("== %d\n", ft_atoi_base("edetddet", "ted"));
	printf("== %d\n", ft_atoi_base("111101111011", "1231"));
	printf("== %d\n", ft_atoi_base("111101111011", "1231"));
}