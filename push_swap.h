/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:16:42 by asyed             #+#    #+#             */
/*   Updated: 2024/04/27 19:57:52 by asyed            ###   ########.fr       */
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

int	    push_swap(int ac, char *av[]);
int	    gotduplicate(char **intargs);
int	    notdigits(char **intargs);
void	firsterrorcheck(void);
void    ft_lstprint(t_list *lst);

#endif