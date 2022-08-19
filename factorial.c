#include <stdio.h>

int fact(int r)
{
    int i;
    int ans = 1;

    for (i = 0; i < r; i++)
    {
        ans = ans * (i + 1);
    }

    return ans;
}

int main()
{
    int n, k;
    int result;

    scanf("%d%d", &n, &k);
    result = (fact(n) / (fact(k) * fact(n - k)));
    printf("%d choose %d is\n", n, k);
    printf("%d\n", result);
}