/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:15:10 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/17 09:23:21 by tblanco          ###   ########.fr       */
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


#include <stdio.h>

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str++)
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nb_long;

	nb_long = nb;	
	if(nb_long < 0)
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
		ft_putchar(nb + '0');
}

void	dec_to_bin(int nb)
{
	if(nb > 1)
	{
			dec_to_bin(nb / 2);
			dec_to_bin(nb % 2);
	}
	else
	{
		if(nb == 1)
			ft_putchar('0');
		else
			ft_putchar('1');
	}
}

void	dec_to_oct(int nb)
{
	
}

void	dec_to_hex(int nb)
{
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	len;

	len = ft_strlen(base);
	if (len <= 2)
		dec_to_bin(nbr);
	else if (len <= 8)
		dec_to_oct(nbr);
	else if (len <= 10)
		ft_putnbr(nbr);
	else
		dec_to_hex(nbr);
}

int		main()
{
	// ft_putnbr_base(42, "0123456789");
	ft_putnbr_base(75, "01");
	// ft_putnbr_base(42, "0123456789ABCDEF");
	// ft_putnbr_base(42, "poneyvif");
}