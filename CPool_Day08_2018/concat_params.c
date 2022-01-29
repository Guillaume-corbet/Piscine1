/*
** EPITECH PROJECT, 2018
** Day08
** File description:
** task02
*/

#include <stdlib.h>

char copy(char *dest, char const *str, int max)
{
    int counter = 0;
    int i;
    
    i = my_strlen(str);
    while (counter < i) {
        dest[max] = str[counter];
        counter = counter + 1;
        max = max + 1;
    }
    dest[max] = '\n';
    return (dest);
}

char *concat_params(int argc, char **argv)
{
    char *str;
    int size = 0;
    int counter = 0;
    int max = 0;

    while (counter < argc) {
        size = size + my_strlen(argv[counter] + 1);
        counter = counter + 1;
    }
    str = malloc(sizeof(char) * size);
    counter = 0;
    while (counter < argc) {
        copy(str, argv[counter], max);
        max = max + 1 + my_strlen(argv[counter]);
        counter = counter + 1;
    }
    str[max] = '\0';
    return (str);
}
