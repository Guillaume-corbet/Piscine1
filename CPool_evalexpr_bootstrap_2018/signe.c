/*
** EPITECH PROJECT, 2018
** Bootstrap evalexpr
** File description:
** signe
*/

#include "./lib/my/my.h"

int signe(char **str)
{
    int counter = 0;
    int rest = 0;

    while ((*str)[counter] != '-' || (*str)[counter] != '+') {
        if ((*str)[counter] == '+')
            rest = 1;
        else if ((*str)[counter] == '-')
            rest = 0;
        counter = counter + 1;
    }
    return (rest);
}