#include <stdio.h>

int find_nth_term(int n, int a, int b, int c)
{
    if (n == 1)
        return a;

    if (n == 2)
        return b;

    if (n == 3)
        return c;

    return find_nth_term(n - 1, b, c, a + b + c);
}

int main()
{
    int n, a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", find_nth_term(n, a, b, c));

    return 0;
}
