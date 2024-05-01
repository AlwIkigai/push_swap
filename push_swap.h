/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:16:42 by asyed             #+#    #+#             */
/*   Updated: 2024/05/01 22:00:19 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <limits.h> // to use macro for INT_MIN and INT_MAX



typedef struct s_stack
{
    struct s_stack  *next; // pointing to next struct (node), dereference to get address of the next node
    long            content; // hold integer value
    int             index; // [0, 1, 2, 3, 4] [index position] will change, align with index numbering
    int             rank; // [50, 5, 48, 20] rank in position = [4th, 1st, 3rd, 2nd], stay true, ranking
}                   t_stack; // this is a type

// t_stack **stack a // **stack a dereference to get the head (stores address of first node), *stack a is to access the first node, (find data and next)


// main program
int	    push_swap(int ac, char *av[]);

// error checks
int	    gotduplicate(char **intargs);
int	    notdigits(char **intargs);
void	firsterrorcheck(void);

// additonal list functions
void    ft_lstprint(t_stack *lst);
void	freenodes(t_stack **lst);
t_stack	*ft_lstnewps(long content);
void	ft_lstadd_back_ps(t_stack **lst, t_stack *new);
int	ft_lstsizeps(t_stack *lst);

// allocate memory space
t_stack **allocate_stack_a (int ac, char **av);
t_stack  **allocate_stack_b(void);

// push operation
void    push(t_stack **origin, t_stack **destination);
void    push_a(t_stack **stack_b, t_stack **stack_a);
void    push_b(t_stack **stack_a, t_stack **stack_b);

// swap operation
void    swap(t_stack **stack);
void    swap_a(t_stack **stack_a);
void    swap_b(t_stack **stack_b);
void    swap_a_and_b(t_stack **stack_a, t_stack **stack_b);

// rotate operation
void    rotate(t_stack **stack);
void    rotate_a(t_stack **stack_a);
void    rotate_b(t_stack **stack_b);
void    rotate_a_and_b(t_stack **stack_a, t_stack **stack_b);

// reverse_rotate operation
void    reverse_rotate(t_stack **stack);
void    reverse_rotate_a(t_stack **stack_a);
void    reverse_rotate_b(t_stack **stack_b);
void    reverse_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b);

// sort algorithm
void    sort_stack_a(t_stack **stack_a, t_stack **stack_b);
void    sort_two_elements(t_stack **stack_a);
void    sort_three_elements(t_stack **stack_a);
void    sort_stack(t_stack **stack_a,t_stack **stack_b);

// find index and value in position
void    find_index_position(t_stack **stack);
void    confirm_rank_in_position(t_stack **stack_a);

// push to b operation
void    push_elements_to_stack_b(t_stack **stack_a, t_stack **stack_b);
void	push_below_median(t_stack **stack_a, t_stack **stack_b, int stack_len_a, int median);
void	push_remainder(t_stack **stack_a, t_stack **stack_b);
int find_median_position(t_stack **stack);

// target cost analysis to a

#endif

