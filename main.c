#include "libft.h"
#include <stdio.h>

int main()
{
	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	// printf("%s", (char *)ft_memchr(tab, -1, 7));

	// printf("%d", ft_strncmp("test\11", "test\0", 6));
	// char	str3[] = "";
	// printf("wtf xxx%s\n",ft_strrchr(str3, '\0'));

	// char	set [] = "\t \n";
	// char s1[] = "lorem ipsum dolor sit amet \n \t ";
	// puts(ft_strtrim(s1, set));

	// int i;

	// i = -100;
	// for (int i = -100; i < 200; i++)
	// {
	// 	printf("%d\n",ft_toupper(i));
	// }

	//Part bonus
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	t_list *lst4;
	t_list *lst5;

	// int one = 1;
	// int two = 2;
	// int three = 3;

	// lst1 = ft_lstnew(&one);
	// lst2 = ft_lstnew(&two);
	// lst3 = ft_lstnew(&three);

	lst1 = ft_lstnew(malloc(1));
	lst2 = ft_lstnew(malloc(1));
	lst3 = ft_lstnew(malloc(1));
	lst4 = ft_lstnew(malloc(1));
	lst5 = ft_lstnew(malloc(1));

	t_list *lst_array = NULL;

	ft_lstadd_back(&lst_array, lst1);
	ft_lstadd_back(&lst_array, lst2);
	ft_lstadd_back(&lst_array, lst3);
	ft_lstadd_back(&lst_array, lst4);
	ft_lstadd_back(&lst_array, lst5);

	// lst1->next = lst2;
	// lst2->next = lst3;
	// lst3->next = NULL;
	t_list *test;
	int *testnum;
	printf("THIS IS A POINTER ADDRESS OF TEST : %p\n", test);
	printf("THIS IS A POINTER ADDRESS OF TESTNUM : %p\n", testnum);

	t_list *temp = lst_array;

	while (temp != NULL)
	{
		printf("num: %p\n", (void *)temp->content);
		temp = temp->next;
	}
	printf("%d\n", ft_lstsize(lst1));
	ft_lstclear(&lst_array, free);
}