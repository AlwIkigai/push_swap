/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:55:51 by asyed             #+#    #+#             */
/*   Updated: 2024/04/27 20:09:24 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void    ft_lstprint(t_list *lst)

{
    while (lst != NULL)
    {
        ft_printf("%d\n", lst->content);
        lst = lst->next;
    }
}