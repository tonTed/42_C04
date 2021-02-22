/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:08:32 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 12:28:52 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui affiche un nombre passé en paramètre. La fonction
** devra être capable d’afficher la totalité des valeurs possibles dans une
** variable de type int.
**
** Par exemple :
** 		ft_putnbr(42) affiche "42"
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nb_long;

	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long > 9)
	{
		ft_putnbr(nb_long / 10);
		ft_putnbr(nb_long % 10);
	}
	else
		ft_putchar(nb_long + '0');
}
