/*
** EPITECH PROJECT, 2018
** Day06
** File description:
** task04
*/

char *my_strstr(char *str, char const *to_find)
{
    int counter = 0;
    int counter2 = 0;

    while (str[counter] != '\0') {
        counter++;
    }
    while (counter != 0) {
        if (str[counter2] != to_find[counter2]) {
            return (to_find[counter2]); 
        }
        counter2++;
        counter--;
    }
    return (0);
}
