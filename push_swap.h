/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:16:42 by asyed             #+#    #+#             */
/*   Updated: 2024/04/30 21:51:23 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <limits.h> // to use macro for INT_MIN and INT_MAX

// main program
int	    push_swap(int ac, char *av[]);

// error checks
int	    gotduplicate(char **intargs);
int	    notdigits(char **intargs);
void	firsterrorcheck(void);

// additonal list functions
void    ft_lstprint(t_list *lst);
void	freenodes(t_list **lst);

// allocate memory space
t_list **allocate_stack_a (int ac, char **av);
t_list  **allocate_stack_b(void);

// push operation
void    push(t_list **origin, t_list **destination);
void    push_a(t_list **stack_b, t_list **stack_a);
void    push_b(t_list **stack_a, t_list **stack_b);

// swap operation
void    swap(t_list **stack);
void    swap_a(t_list **stack_a);
void    swap_b(t_list **stack_b);
void    swap_a_and_b(t_list **stack_a, t_list **stack_b);

// rotate operation
void    rotate(t_list **stack);
void    rotate_a(t_list **stack_a);
void    rotate_b(t_list **stack_b);
void    rotate_a_and_b(t_list **stack_a, t_list **stack_b);

// reverse_rotate operation
void    reverse_rotate(t_list **stack);
void    reverse_rotate_a(t_list **stack_a);
void    reverse_rotate_b(t_list **stack_b);
void    reverse_rotate_a_and_b(t_list **stack_a, t_list **stack_b);

// sort algorithm
void    sort_stack_a(t_list **stack_a, t_list **stack_b);
void    sort_two_elements(t_list **stack_a);
void    sort_three_elements(t_list **stack_a);
void    sort_stack(t_list **stack_a,t_list **stack_b);

// push to b operation
void    push_elements_to_stack_b(t_list **stack_a, t_list **stack_b);
int     find_median_position(t_list *stack);

// target cost analysis to a
t_list  *find_target_node_a(t_list *stack_a, t_list *stack_b);
t_list  *find_closest_bigger(t_list *stack_a, int *b_top);
t_list  *find_minimum(t_list *stack_a);
int     calculate_cost(t_list *target_node, t_list *stack_a, t_list *stack_b);
int     find_position(t_list *stack, t_list *target_node);


#endif

/*
typedef struct s_stack
{
    struct s_list   *next; // pointing to next struct (node), dereference to get address of the next node
    int             *data;
}                   t_stack; // this is a type

// t_list **stack a // **stack a dereference to get the head (stores address of first node), *stack a is to access the first node, (find data and next)

*/