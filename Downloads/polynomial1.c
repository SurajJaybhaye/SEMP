#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "header.h"
void initPolynomial(Polynomial *p, char *s, int n)
{
    Polynomial * a,*ptr;
    a=p;
    int i=0;
    while(s[i]!='\0')
    {
       while(s[i]!='+')
        {
        ptr=(Polynomial * )malloc(sizeof(Polynomial));
        int c=0;
        while(s[i]!='x')
        {   int b;
            if (s[i]>='0' && s[i]<='9')
            {
                 b=s[i]-'0';
                 c=c*10 + b;
                 i=i+1;
            }
            else
            {
                i++;
            }
        }
      //  printf("%d ",c);
        int pow=0;
        while(s[i]!='+')
        {

             int b;
            if (s[i]>='0' && s[i]<='9')
            {
                 b=s[i]-'0';
                 pow=pow*10 + b;
                 i=i+1;
            }
            else
            {
                i++;
            }

        }

      //  printf("%d",pow);
        ptr->coefficient=c;
        ptr->pow=pow;
        ptr->next=NULL;

        if(a->coefficient == INT_MIN){
            a->coefficient = c;
            a->pow = pow;
            a->next = NULL;
        }
        else{
        a->next=ptr;
        a=a->next;
        }
    //    printf("\n");
     }
     i++;
}
}
Polynomial *addPolynomial(Polynomial *p1, Polynomial *p2)
{
    Polynomial *p_sum = (Polynomial *)malloc(sizeof(Polynomial));
    Polynomial *t;
    Polynomial *p = p1;
    Polynomial *q = p2;
    p_sum = (Polynomial *)malloc(sizeof(Polynomial));
    if (p->pow == q->pow)
    {
        p_sum->coefficient = p->coefficient + q->coefficient;
        p_sum->pow = p->pow;
        p = p->next;
        q = q->next;
    }
    else if (p->pow < q->pow)
    {
        p_sum->coefficient = q->coefficient;
        p_sum->pow = q->pow;
        q = q->next;
    }
    else
    {
        p_sum->coefficient = p->coefficient;
        p_sum->pow = p->pow;
        p = p->next;
    }

    p_sum->next = NULL;
    t = p_sum;
    Polynomial *tmp = NULL;
    while (p != NULL && q != NULL)
    {
        tmp = (Polynomial *)malloc(sizeof(Polynomial));
        if (p->pow == q->pow)
        {
            tmp->coefficient = p->coefficient + q->coefficient;
            tmp->pow = p->pow;
            p = p->next;
            q = q->next;
        }
        else if (p->pow < q->pow)
        {
            tmp->coefficient = q->coefficient;
            tmp->pow = q->pow;
            q = q->next;
        }
        else
        {
            tmp->coefficient = p->coefficient;
            tmp->pow = p->pow;
            p = p->next;
        }
        tmp->next = NULL;
        t->next = tmp;
        t = t->next;
    }
    if (p == NULL)
    {
        while (q)
        {
            t->next = (Polynomial *)malloc(sizeof(Polynomial));
            t = t->next;
            t->coefficient = q->coefficient;
            t->pow = q->pow;
            q = q->next;
            t->next = NULL;
        }
    }
    else if (q == NULL)
    {
        while (p)
        {
            t->next = (Polynomial *)malloc(sizeof(Polynomial));
            t = t->next;
            t->coefficient = p->coefficient;
            t->pow = p->pow;
            p = p->next;
            t->next = NULL;
        }
    }

    return p_sum;
}
void display(Polynomial *p, char var)
{

    char poly[50] = "";

    while (p != NULL)
    {
        char tmp[10];
        sprintf(tmp, "%d", p->coefficient);
        strcat(poly, tmp);
        strcat(poly, "x^");
        char pow_tmp[10];
        sprintf(pow_tmp, "%d", p->pow);
        strcat(poly, pow_tmp);

        if (p->next != NULL)
        {
            strcat(poly, "+");
        }
        p = p->next;
    }
    printf("%s\n", poly);
}

