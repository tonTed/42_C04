/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:15:10 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/17 09:42:41 by tblanco          ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nbr >= len)
	{		
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else
		ft_putchar(base[nbr]);
}

int		main()
{
	int nb = 58672353;
	
	ft_putnbr_base(nb, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(nb, "01");
	ft_putchar('\n');
	ft_putnbr_base(nb, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(nb, "poneyvif");
	ft_putchar('\n');
}