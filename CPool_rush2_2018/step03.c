/*
** EPITECH PROJECT, 2018
** rush 
** File description:
** step03
*/

int percent(char **argv, int i, int nb_letter)
{
    float result;
    int percent = 0;
    int result_modulo = 0;

    result = nb_letter * 100;
    result = result / i;
    nb_letter = nb_letter * 100;
    percent = nb_letter / i;
    result_modulo = nb_letter % i;
    result_modulo = result_modulo * 100;
    result_modulo = result_modulo / i;
    my_putchar(32);
    my_putchar('(');
    my_put_nbr(percent);
    my_putchar('.');
    my_put_nbr(result_modulo);
    my_putchar('%');
    my_putchar(')');
    return (0);
}

int error(int argc, char **argv, int n)
{
    if (argc < 3) {
        return (-1);
    } else if (argv[n][0] > 64 && argv[n][0] < 91) {
        return (0);
    } else if (argv[n][0] > 96 && argv[n][0] < 123) {
        return (0);
    } else {
        return (-1);
    }
}

char rush2(int argc, char **argv, int n)
{
    int nb_letter = 0;
    int i = 0;
    int errors = 0;

    while (argv[1][i] != '\0') {
        if (error(argc, argv, n) == -1) {
            return (-1);
        }
        if (argv[1][i] == argv[n][0] || argv[1][i] == argv[n][0] + 32) {
            nb_letter = nb_letter + 1;
        } else if (argv[1][i] == argv[n][0] - 32) {
            nb_letter = nb_letter + 1;
        }
        i = i + 1;
    }
    my_putchar(argv[n][0]);
    my_putchar(':');
    my_put_nbr(nb_letter);
    percent(argv, i, nb_letter);
    my_putchar('\n');
    return (0);
}

int main(int argc, char **argv)
{
    int max = 0;
    int n = 2;
    if (argc == 1) {
        write(2, "ERROR\n", 7);
        return (84);
    } else if (rush2(argc, argv, n) == -1) {
        write(2, "ERROR\n", 7);
        return (84);
    } else {
        n = n + 1;
        while (n < argc) {
            rush2(argc, argv, n);
            n = n + 1;
        }
        return (0);
    }
}
