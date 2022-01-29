/*
** EPITECH PROJECT, 2018
** 	Day06
** File description:
** task01,5
*/

#include <criterion/criterion.h>

char *my_strcpy(char *, char const *)
    
Test(my_strcpy, copy_string_in_an_empty_array)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}
