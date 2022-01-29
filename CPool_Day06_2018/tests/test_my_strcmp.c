/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** task05
*/
 #include <criterion/criterion.h>

Test(my_strcmp, count_number)
{
    char s1[] = "Bjr";
    char s2[] = "Bjr";

    my_strcmp(s1, s2);
    cr_assert_eq(s1, s2);
}
