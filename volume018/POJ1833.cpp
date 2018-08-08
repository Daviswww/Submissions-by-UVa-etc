#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

#define MAX 1034
int ans[MAX];

int main(int argc, char const *argv[])
{
    int nCases;
    int num, k, i, j;
    scanf("%d", &nCases);
    while (nCases--)
    {
        scanf("%d %d", &num, &k);
        for (i = 1; i <= num; ++i)
            scanf("%d", &ans[i]);
        for (i = 0; i < k; ++i)
            next_permutation(ans + 1, ans + num + 1);

        for (j = 1; j <= num; ++j)
            printf("%d ", ans[j]);
        printf("\n");
    }
    return 0;
}

