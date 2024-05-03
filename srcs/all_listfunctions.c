/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_listfunctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:05:21 by asyed             #+#    #+#             */
/*   Updated: 2024/05/03 13:26:48 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	new_node->target_node_index = -1;
	new_node->target_cost = INT_MAX;
	new_node->b_cost = INT_MAX;
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
