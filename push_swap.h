/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:16:42 by asyed             #+#    #+#             */
/*   Updated: 2024/04/17 17:02:56 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_list 
{
    struct s_list   *next; // pointing to next struct (node), dereference to get address of the next node
    int             *data;
}                   t_list; // this is a type

// t_list **stack a // **stack a dereference to get the head (stores address of first node), *stack a is to access the first node, (find data and next)


#endif