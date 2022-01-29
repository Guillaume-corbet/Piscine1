/*
** EPITECH PROJECT, 2018
** Day11
** File description:
** task02
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *tmp = begin;
    int counter = 0;
    
    while (tmp) {
        tmp = tmp->next;
        counter = counter + 1;
    }
    return (counter);
}
