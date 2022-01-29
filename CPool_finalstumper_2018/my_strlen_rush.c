/*
** EPITECH PROJECT, 2018
** final stumper
** File description:
** my_strlen
*/

int my_strlen_k(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        j = 0;
        while (str[i] != '\n') {
            i = i + 1;
            j = j + 1;
        }
        k = k + 1;
        i = i + 1;
    }
    return (k);
}

int my_strlen_j(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        j = 0;
        while (str[i] != '\n') {
            i = i + 1;
            j = j + 1;
        }
        k = k + 1;
        i = i + 1;
    }
    return (j);
}