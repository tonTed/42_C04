/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:06:44 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:12:49 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui affiche un à un les caractères d’une chaîne à
** l’écran.
** L’adresse du premier caractère de la chaîne est contenue dans le
** pointeur passé en paramètre à la fonction.
*/

#include <stdio.h>
#include <string.h>

#include "../ex01/ft_putstr.c"

int	main()
{
	// TEST_1
		char str_1[] = "Bonjour 42";
		printf("TEST_o_1 -- string: %s -- TEST_1\n", str_1);
		ft_putstr(str_1);

	// TEST_1
		char str_2[] = "";
		printf("\n\nTEST_o_2 -- string: %s -- TEST_2\n", str_2);
		ft_putstr(str_2);

	// TEST_3
		char str_3[] = "  askoasd\t";
		printf("\n\nTEST_o_3 -- string: %s -- TEST_3\n", str_3);
		ft_putstr(str_3);

	// TEST_4
		char str_4[] = "!@#!@%ˆ&*(_+:{}<>,.';";
		printf("\n\nTEST_o_4 -- string: %s -- TEST_4\n", str_4);
		ft_putstr(str_4);

	// TEST_5
		char str_5[] = "Hello 42        ";
		printf("\n\nTEST_o_5 -- string: %s -- TEST_5\n", str_5);
		ft_putstr(str_5);

		
	// END
		printf("\n\n************** END **************\n\n");

		
	return (0);
}
