void    sort_int_tab(int *tab, unsigned int size)
{
    long i = 0;
    long tmp = 0;
    while(i < size -1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

// #include<stdio.h>
// int main()
// {
//     int tab[10] = {56, -56, 67, 20000,0, 15, 152, 28, 28, 3042};
//     sort_int_tab(tab, 10);
//     int i = 0;
//     while (i < 10)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }
