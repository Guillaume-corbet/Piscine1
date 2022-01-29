/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** task02
*/
char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    
    while (i < n && src[i] != "\0") {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = "\O";
        i++;
    }
    return (dest);
}
