/*
** EPITECH PROJECT, 2018
** final stumper
** File description:
** main
*/

#include <unistd.h>
#include "./rush3.h"
#include "./rush1_1.h"
#include "./rush1_2.h"
#include "./rush1_3.h"
#include "./rush1_4.h"
#include "./rush1_5.h"
#include "./lib/my/my.h"
#include "stdlib.h"

void rush3(char *str)
{
    int error = 0;
    int errors = 420;

    error = error + rush1_1(str);
    error = error + rush1_2(str);
    error = error + rush1_3(str);
    error = error + rush1_4(str);
    error = error + rush1_5(str);
    if (errors == error) {
        my_putstr("none");
    }
    my_putchar('\n');
}

int main(void)
{
    int buff_size = 2147483647;
    char *buff;
    int offset = 0;
    int len;
    
    buff = malloc(sizeof(char) * (2147483647));
    while ((len = read(0 , buff + offset , buff_size - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    if (len < 0) {
        write(2, "ERROR", 6);
        return (84);
    }
    rush3(buff);
    return (0);
}