/*
** EPITECH PROJECT, 2018
** Infin_add
** File description:
** main
*/

#include "my.h"

char error(int argc)
{
    if (argc != 3) {
        write(2, "ERROR", 6);
        return (84);
    } else {
        return (0);
    }
}

char my_memset(char *result, int size)
{
    int counter = 0;

    while (counter < size) {
        result[counter] = '\0';
        counter = counter + 1;
    }
    return (result);
}

int two_plus(char *first, char *second, int size)
{
    declaration1;
    lenght;
    result = malloc(sizeof(char) * (size));
    my_memset(result, size);
    while (size >= 0) {
        first[n] = first[n] + reserved;
        stock = first[n] + second[y] - 96;
        if (stock > 9) {
            result[size] = first[n] + second[y] - 58;
            reserved = 1;
        } else {
            result[size] = first[n] + second[y] - 48;
            reserved = 0;
        }
        n = n - 1;
        y = y - 1;
        size = size - 1;
    }
    my_putstr(result);
}

int size(char *first, char *second)
{
    declaration_size;
    stock = first[0] + second[0] - 96;
    lenght;
    if (n > y) {
        result_size = n + 2;
    } else if (y > n || n == y) {
        result_size = y + 2;
    }
    return (result_size);
}

int main(int argc, char **argv)
{
    int errors = 0;
    
    errors = error(argc);
    if (errors == 84) {
        return (0);
    }
    two_plus(argv[1], argv[2], size(argv[1], argv[2]) - 2);
    return (0);
}
