/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:16:42 by asyed             #+#    #+#             */
/*   Updated: 2024/04/28 22:05:24 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <limits.h> // to use macro for INT_MIN and INT_MAX

typedef struct s_stack
{
    struct s_list   *next; // pointing to next struct (node), dereference to get address of the next node
    int             *data;
}                   t_stack; // this is a type

// t_list **stack a // **stack a dereference to get the head (stores address of first node), *stack a is to access the first node, (find data and next)

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
// t_list **allocate_stack_b (int ac, char **av);

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


#endif