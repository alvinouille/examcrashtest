#include <stdio.h>
#include<unistd.h>
void    rostring(char *str)
{
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    int start = i;
    while (str[i] != ' ' && str[i] != '\t')
        i++;
    int end = i;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    int flag = 0;
    while (str[i])
    {
        if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t'))
            i++;
        else
        {
            flag = 1;
            write(1, &str[i], 1);
            i++;
        }
    }
    if (flag == 1)
        printf(" ");
    while (start < end)
    {
        printf("%c", str[start]);
        start++;
    }
    printf("\n");
}


// int main(int ac, char **av)
// {
//     (void)ac;
//     rostring(av[1]);
// }