/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/20 15:56:11 by asyed            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

// input validation to stack a
// first arg top of stack
    // -> ?
// can be multiple AV
    // -> need to atoi
        // -> if receive as a string, need to split
// can be negative or positive int
    // -> but must be within range


// if no parameter specified, program must not display anything and give the prompt back
    //  -> ac == 1
// if error, display "Error" followed by a '\n' on standard error
    // if duplicate (error)
        // -> need to do check against current index
    // beyond range
    // not int

int checkduplicate(char *arr, char *nextarr)

{
    while (*arr)
    {
        while (*nextarr)
        {
            if (*arr != * nextarr) // if not duplicate, return true
            {
                return(1);
            }
        }

    }
    return (0); 
}

int checkdigits(char *arr, char *nextarr)

{
    while (*arr)
    {
        while (*nextarr)
        {
            if (arr >= '0' && arr <= '9') // if digits, return true
            {
                return(1);
            }
        }

    }
    return (0); 
}

int main(int ac, char *av[])
{
    int firstarray;
    int nextarray;
    int index;

    firstarray = 1;
    nextarray = firstarray + 1;
    index = 0;

    if (ac == 1) // no parameter
    {
        // display prompt back
    }
    if (ac > 1) // multiple argv
    {
        while (av) // traverse through args
        {
            if (checkdigits(av[firstarray], av[nextarray]) && checkduplicate(av[firstarray], av[nextarray])) // check digits and check doubles
            {
                ft_atoi(av); // convert ascii to integer
            }
        }
        
    }
    ft_printf("Error\n"); // how to do it on standard error (fd2)?
}