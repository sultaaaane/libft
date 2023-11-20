/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbentahi <mbentahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:10:11 by mbentahi          #+#    #+#             */
/*   Updated: 2023/11/19 20:03:48 by mbentahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;
	
	temp = *lst;
	if (!*lst)
    {
        *lst = new;
        return;
    }
	temp = ft_lstlast(temp);
	temp->next = new;
}

// int main()
// {
// 	t_list *list1 = ft_lstnew("lkdfjlkdsjf");
// 	t_list *list2 = ft_lstnew("hafkjhlkadj");
// 	t_list *list3 = ft_lstnew("fjkashf");
// 	list1->next = list2;
// 	list2->next = list3;
// 	list3->next = NULL;
	
// 	ft_lstadd_back(&list1, ft_lstnew("(void *)1212)"));

// 	while (list1)
// 	{
// 		printf("**%s**\n", (char *)list1->content);
// 		list1 = list1->next;
// 	}

// }