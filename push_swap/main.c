#include "push_swap.h"

int main(){
	t_stack *a = malloc(sizeof(t_stack));
    t_stack *b = malloc(sizeof(t_stack));
    t_stack *c = malloc(sizeof(t_stack));
    t_stack *d = malloc(sizeof(t_stack));

    a->num = 4;
    b->num = 3;
    c->num = 2;
    d->num = 1;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;


	t_stack *a1 = malloc(sizeof(t_stack));
    t_stack *b1 = malloc(sizeof(t_stack));
    t_stack *c1 = malloc(sizeof(t_stack));
    t_stack *d1 = malloc(sizeof(t_stack));

    a1->num = 6;
    b1->num = 7;
    c1->num = 8;
    d1->num = 9;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = NULL;


    t_stack *tmp = a;
    // while (tmp)
    // {
    //     printf("%ld , ", tmp->num);
    //     tmp = tmp->next;
    // }
    // printf("\n");


    ft_pa(&a , &a1, 1);


    tmp = a;
    while (tmp)
    {
        printf("%ld , ", tmp->num);
        tmp = tmp->next;
    }
    printf("\n");





}

