#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "header.h"
int main()
{
    Polynomial * p= (Polynomial * )malloc( sizeof(Polynomial));
    p->coefficient = INT_MIN;
    p->next=NULL;
    char c[51];
    char u[]="+";
    gets(c);
    strcat(c,u);
    int n;
    n=strlen(c);
    Polynomial * p1=(Polynomial * )malloc( sizeof(Polynomial));
    p1->coef = INT_MIN;
    p1->next=NULL;
    char c1[51];
    gets(c1);
    strcat(c1,u);
    int n1;
    n1=strlen(c1);
    initPolynomial(p,c,n);
    initPolynomial(p1,c1,n1);
    Polynomial * h;
    h=addPolynomial(p,p1);
    char b[50];
    display(h,b);
    return 0;
}
