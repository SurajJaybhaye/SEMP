typedef struct Polynomial
{
    int coef;
    int pow;
    struct Polynomial * next;
}Polynomial;
void initPolynomial(Polynomial *p, char *s, int n);
Polynomial *addPolynomial(Polynomial *p1, Polynomial *p2);
void display(Polynomial *p, char var);
