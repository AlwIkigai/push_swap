/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freenodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:54:30 by asyed             #+#    #+#             */
/*   Updated: 2024/04/28 16:54:32 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	freenodes(t_list **lst)
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current -> next;
		//del(current -> content);
		free(current);
		current = next;
	}
	*lst = NULL;
}