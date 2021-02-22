/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:03:31 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:12:34 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui compte le nombre de caractères dans une chaîne de 
** caractères et qui retourne le nombre trouvé.
*/

#include <stdio.h>
#include <string.h>

#include "../ex00/ft_strlen.c"

int	main()
{
	// TEST_1
		char str_1[] = "Bonjour 42";
		printf("TEST_o_1 -- string: %s -- TEST_1\n", str_1);
		printf("\t|\n");
		printf("\t|-> expected > %lu -- %d < return\n",strlen(str_1), ft_strlen(str_1));
		
	// TEST_2
		char str_2[] = "";
		printf("\nTEST_o_2 -- string: %s -- TEST_2\n", str_2);
		printf("\t|\n");
		printf("\t|-> expected > %lu -- %d < return\n",strlen(str_2), ft_strlen(str_2));
		
	// TEST_3
		char str_3[] = "  askoasd\t";
		printf("\nTEST_o_3 -- string: %s -- TEST_3\n", str_3);
		printf("\t|\n");
		printf("\t|-> expected > %lu -- %d < return\n",strlen(str_3), ft_strlen(str_3));
		
	// TEST_4
		char str_4[] = "!@#!@%ˆ&*(_+:{}<>,.';";
		printf("\nTEST_o_4 -- string: %s -- TEST_4\n", str_4);
		printf("\t|\n");
		printf("\t|-> expected > %lu -- %d < return\n",strlen(str_4), ft_strlen(str_4));
		
	// TEST_5
		char str_5[] = "Bonjour 42        ";
		printf("\nTEST_o_5 -- string: %s -- TEST_5\n", str_5);
		printf("\t|\n");
		printf("\t|-> expected > %lu -- %d < return\n",strlen(str_1), ft_strlen(str_1));
		
	// END
		printf("\n************** END **************\n\n");

		
	return (0);
}
