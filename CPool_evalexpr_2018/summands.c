/*
** EPITECH PROJECT, 2018
** Bootstrap evalexpr
** File description:
** summands
*/

#include <stdlib.h>
#include "./lib/my/my.h"
#include "./number.h"
#include "./signe.h"
#include <stdio.h>
#include "./summands.h"

int eval_expr(char *str)
{
    DECLARATION;
    first = number(&str);
    while (str[counter]) {
        sign = signe(&str);
        second = number(&str);
        if (sign == 1)
            first = first - second;
        else if (sign == 2)
            first = first + second;
        else if (sign == 3)
            first = first * second;
        else if (sign == 4)
            first = first / second;
        else if (sign == 5)
            first = first % second;
    }
    return (first);
}

int main(int ac , char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}