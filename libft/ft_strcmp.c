/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:07:23 by asyed             #+#    #+#             */
/*   Updated: 2024/04/25 21:08:24 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_strcmp(char *s1, char *s2)

{
    
    int i;

    i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]); // gives the difference
        }
        i++;
    }
    return (0);
}