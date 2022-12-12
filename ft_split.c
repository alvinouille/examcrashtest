#include<stdlib.h>
char    **ft_split(char *str, char c)
{
    int j, k, i = 0;
    char **tab = malloc(sizeof(char *) *9999);
    while (str[i])
    {
        if (str[i] != c)
        {
            tab[j] = malloc(sizeof(char)*9999);
            k = 0;
            while (str[i] != c)
            {
                tab[j][k] = str[i];
                i++;
                k++;
            }
            tab[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    tab[j] = '\0';
    return tab;
}

// #include <stdio.h>
// int    main(int ac, char **av)
// {
//     char    **tab;
//     int        i = 0;
//     if (ac != 2)
//         return (0);
//     tab = ft_split(av[1], ' ');
//     while (tab[i])
//     {
//         printf("%s\n", tab[i]);
//         i++;
//     }
//     return (0);
// }