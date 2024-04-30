/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   targetcost_to_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:16:18 by asyed             #+#    #+#             */
/*   Updated: 2024/04/30 22:06:41 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

t_list  *find_target_node_a(t_list *stack_a, t_list *stack_b)

{
    t_list  *target_node;
    t_list  *current_target;
    t_list   *current_node_b;
    int     lowest_cost;
    int     current_cost;
    int     *b_top;

    if (stack_a == NULL || stack_b == NULL)
        return (NULL);
    target_node = NULL;
    current_node_b = stack_b;
    lowest_cost = INT_MAX;
    while (current_node_b != NULL)
    {
        if (current_node_b && current_node_b->content)
        {
            ft_printf("Processing node with value: %d\n", b_top);
            b_top = (int *)(current_node_b->content);
            ft_printf("Processing node with value: %d\n", b_top);
            current_target = find_closest_bigger(stack_a, b_top);
            current_cost = calculate_cost(current_target, stack_a, stack_b);
            if (current_cost < lowest_cost)
            {
                lowest_cost = current_cost;
                target_node = current_target;
            }
            current_node_b = current_node_b->next;
        }
        else
        {
            current_node_b = current_node_b->next;
        }
    }
    if (target_node == NULL)
        target_node = find_minimum(stack_a);
    return (target_node);
}

t_list  *find_closest_bigger(t_list *stack_a, int *b_top)

{
    if (stack_a == NULL)
        return (NULL);
    t_list  *current;
    t_list  *target_node;
    int     min_difference;
    int     *current_value;
    int     difference;
    
    current = stack_a;
    target_node = NULL;
    min_difference = INT_MAX;

    while (current != NULL)
    {
        if(current->content != NULL)
        {
            current_value = (int *)(current->content);
            difference = current_value - b_top;
            if (difference > 0 && difference < min_difference)
            {
                min_difference = difference;
                target_node = current;
            }
        }
        current = current->next;
    }
    return (target_node);
}

t_list  *find_minimum(t_list *stack_a)

{
    t_list  *current;
    t_list  *target_node;
    int     current_value;

    current = stack_a;
    target_node = NULL;

    while (current)
    {
        current_value = *(int *)(current->content);
        if (target_node == NULL || current_value < *(int *)(target_node->content))
        {
            target_node = current;
        }
        current = current ->next;
    }
    return (target_node);
}

int calculate_cost(t_list *target_node, t_list *stack_a, t_list *stack_b)

{
    int cost;
    int position_in_stack_a;
    int position_in_stack_b;
    
    if (target_node == NULL || stack_a == NULL || stack_b == NULL)
        exit (EXIT_FAILURE);
    cost = 0;
    position_in_stack_a = find_position(stack_a, target_node);
    position_in_stack_b = ft_lstsize(stack_b);
    if (position_in_stack_a < position_in_stack_b)
    {
        cost += position_in_stack_a;
    }
    else
    {
        cost += ft_lstsize(stack_a) - position_in_stack_a;
    }
    cost++;
    return (cost);
}

int find_position(t_list *stack, t_list *target_node)

{
    int position;
    t_list *current;
    position = 0;
    if (stack == NULL || target_node == NULL)
        exit (EXIT_FAILURE);
    current = stack;
    while (current != NULL)
    {
        if (current == target_node)
        {
            return (position);
        }
        position++;
        current = current->next;
    }
    exit (EXIT_FAILURE);
}

