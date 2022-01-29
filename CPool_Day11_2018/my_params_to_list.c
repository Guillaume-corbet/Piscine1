/*
** EPITECH PROJECT, 2018
** Day11
** File description:
** task01
*/

#include <stdlib.h>
#include "mylist.h"

int my_put_in_list(linked_list_t **list, char *arg)
{
    linked_list_t *new = malloc(sizeof(linked_list_t));

    new->data = arg;
    new->next = *list;
    *list = new;
}

int my_params_to_list(int argc, char **argv)
{
    int n = 0;
    linked_list_t *list = NULL;

    while (argv[n] != NULL) {
        my_put_in_list(&list, argv[n]);
        n = n + 1;
    }
    return (list);
}
