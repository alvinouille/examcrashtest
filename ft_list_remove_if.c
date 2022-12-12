void    ft_list_remve_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *list;

    list = *begin_list;
    if (!begin_list || !*begin_list)
        return ;
    if ((*cmp)(list->data, data_ref) == 0)
    {
        *begin_list=list->next;
        free(list);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    ft_list_remove_if(&(list->next), data_ref, cmp);
}
        