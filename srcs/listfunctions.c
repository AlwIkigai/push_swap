/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:54:30 by asyed             #+#    #+#             */
/*   Updated: 2024/05/01 22:22:41 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

t_stack	*ft_lstnewps(long content)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	new_node->index = 0;
	new_node->rank = 0;
	return (new_node);
}

void	ft_lstadd_back_ps(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	current = *lst;
	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}

void    ft_lstprint(t_stack *lst)

{
    while (lst != NULL)
    {
        ft_printf("%d\n", lst->content);
        lst = lst->next;
    }
}

int	ft_lstsizeps(t_stack *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst ->next;
	}
	return (count);
}


void	freenodes(t_stack **lst)
{
	t_stack	*current;
	t_stack	*next;

	current = *lst;
	while (current)
	{
		next = current -> next;
		free(current);
		current = next;
	}
	*lst = NULL;
}