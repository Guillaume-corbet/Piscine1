/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** task03,5
*/
#include <criterion/criterion.h>

Test(my_revstr, return_value_is_reversed)
{
    cr_assert_str_eq(my_revstr("Hell"), "lleH");
}
