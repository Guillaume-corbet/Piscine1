/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** task02,5
*/
#include <criterion/criterion.h>

Test(my_strncpy, copy_three_characters_in_empty_array)
{
    char dest[4] = {0};

    my_strncpy(dest, "HelloWorld", 3);
    cr_assert_str_eq(dest, "Hel");
}
