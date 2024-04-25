/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:28 by asyed             #+#    #+#             */
/*   Updated: 2024/04/25 18:32:24 by asyed            ###   ########.fr       */
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

/*

int checkduplicate(char *intargs)

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

*/


int notdigits(char *intargs)

{
    while (*intargs)
    {
        if (intargs < '0' || intargs > '9') // if digits, return true
        {
            return(1);
        }
        intargs++;
    }
    return (0);
}

int main(int ac, char *av[])
{
    int start;
    char    **intargs;
    start = 1;
    //intargs = av + 1; // pointer to whole str

    if (ac > 1) // multiple argv
    {
        while (start < ac - 1) // traverse through args
        {
            if (notdigits(av[start]))// || gotduplicate(intargs[start])) // check digits and check doubles
            {
                ft_putstr_fd("Error\n", 2); // how to do it on standard error (fd2), 2nd parameer     
            }
            start++;
        }
        // error checking then populate
        ft_atoi(av); // convert ascii to integer, what if atoi have INTMAX OR INTMIN
    }
    return (0); // for no parameter
    
}