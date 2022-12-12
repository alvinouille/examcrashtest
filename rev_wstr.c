#include<stdio.h>
void    put_word(char *str, int flag)
{
    int i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
    {
        printf("%c", str[i]);
        i++;
    }
    // POUR EVITER ESPACE A LA FIN, 1 == dernier mot
    if (flag == 0)
        printf(" ");
}

void    rev_wstr(char *str)
{
    int i = 0;
    int flag = 0;
    while (str[i])
        i++;
    //on se place au dernier index
    int len = i -1;
    while (len >= 0)
    {
        if (str[len] != ' ' && str[len] != '\t')
        {
            while (len >= 0 && str[len] != ' ' && str[len] != '\t')
                len--;
            // si on etait sur dernier mot
            if (len < 0)
                flag = 1;
            //on balance index juste apres l'espace/la fin de mot ou on est
            put_word(&str[len+1], flag);
        }
        len--;
    }
}


int main(int ac, char **av)
{
    (void)ac;
    rev_wstr(av[1]);
}