#include"push_swap.h"

void print_stacks(t_stacks*a,t_stacks*b)
{
    t_stacks*aa,*bb;
    bb=b;
    aa=a;
    int x=0;
    printf("v   i   s   k   c\n\n");
    while(aa)
    {
        printf("%d   %d   %d   %d\n",aa->value,aa->index,aa->s,aa->keep);
        aa=aa->next;
        x++;
    }
    printf("------a------\n");
    while(bb)
    {
        printf("%d   %d   %d   %d\n",bb->value,bb->index,bb->s,bb->keep);
        bb=bb->next;
    }
    printf("------b------\n");
}
////////////////////////////////////////////////////
void sort(int size,t_stacks**a,t_stacks**b)
{
    signarr(*a,size);
    markup(a,size);
    send_to_b(a,b,size);
    while(*b)
    {
        to_top(a,ft_lstsize(*a),b,ft_lstsize(*b));
        send_to_a(a,b);
    }
    fix(a);
}



int main(int argc, const char*argv[])
{
    int			len;
	t_stacks	*a;
	t_stacks	*b;

	a = NULL;
	b = NULL;
    check_args(argc,argv);
    initialize(argc,argv,&a);
	check_dupl(a);

	len = ft_lstsize(a);
	if (len == 1)
		return (0);
    if(len == 3)
        sort_3_numbers(&a);
    else if(len == 5)
    {
        sort_5_numbers(&a,&b);
        // sort(argc,&a,&b);
    }
    else
        sort(len,&a,&b);
    print_stacks(a,b);
    free(a);
    free(b);
    return 0;
}
