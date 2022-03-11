#include <stdio.h>

struct s_list
{
	int i;
	char c;
	struct s_list *next;
};

void	aff_list(struct s_list *begin)
{
	while (begin)
	{
		printf("%d\n", begin -> i);
		begin = begin->next;
	}
}

int main()
{
	struct s_list	elem1;
	struct s_list	elem2;
	struct s_list	elem3;
	struct s_list	*begin;
	
	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;
	
	elem1.i = 98;
	elem2.i = 109;
	elem3.i = 42;
	
	aff_list(begin);
	return (0);
}
