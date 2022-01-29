/*
** EPITECH PROJECT, 2018
** Bootstrap evalexpr
** File description:
** summand
*/

#include <stdlib.h>
#include "./lib/my/my.h"
#include "./number.h"
#include "./signe.h"
#include "./summands.h"

int summands(char **str)
{
    DECLARATION;
    while ((*str)[counter] != '\0') {
        first = number(str);
        sign = signe(str);
        second = number(str);
        if (sign == 1)
            result = first + second;
        else if (sign == 0)
            result = first - second;
    }
    return (result);
}

int main(int argc, char **argv)
{
    my_put_nbr(summands(&argv[1]));
    return (0);
}