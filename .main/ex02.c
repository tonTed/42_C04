/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:08:32 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 12:26:49 by tblanco          ###   ########.fr       */
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

#include <limits.h>

#include "../ex02/ft_putnbr.c"

#include <limits.h>

int main()
{
	int i = -15;
	while (++i < 20)
	{	
		ft_putnbr(i);
		ft_putchar('\n');
	}
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
}
