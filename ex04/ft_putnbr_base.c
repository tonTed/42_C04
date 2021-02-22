/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:15:10 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 12:53:26 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Écrire une fonction qui affiche un nombre dans le terminal dans une base
** donnée.
** Ce nombre est fourni sous la forme d’un int et la base sous la forme d’une
** chaîne de caractères.
** La base contient tous les symboles utilisables pour afficher le nombre :
** 		0123456789 est la base couramment utilisée pour représenter nos nombres
**			décimaux ;
**		01 est une base binaire ;
**		0123456789ABCDEF est une base hexadecimale ;
**		poneyvif est une base octale.
** La fonction doit gérer les nombres négatifs.
**	Si un paramètre contient une erreur la fonction n’affiche rien. Une erreur
** peut être :
**		base est vide ou est de taille 1 ;
**		base contient deux fois le même caractère ;
**		base contient les caractères + ou -.
*/

#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_strlen(char *str)
{
	long len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int		bad_base(char *base)
{
	int		i;
	int		j;

	i = -1;
	while (base[++i] != '\0')
	{
		if (base[i] <= ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	len;
	long	nbr_lg;

	len = ft_strlen(base);
	if (bad_base(base) && len > 1)
	{
		nbr_lg = nbr;
		if (nbr_lg < 0)
		{
			nbr_lg = -nbr_lg;
			ft_putchar('-');
		}
		if (nbr_lg >= len)
		{
			ft_putnbr_base(nbr_lg / len, base);
			ft_putnbr_base(nbr_lg % len, base);
		}
		else
			ft_putchar(base[nbr_lg]);
	}
}
