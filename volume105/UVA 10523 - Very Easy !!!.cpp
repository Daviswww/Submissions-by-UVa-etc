#include <iostream>
#include <cstdio>
using namespace std;
int ans[1000];
int main(void)
{
    int N, A; int op[1000]; int po[1000]; int poi; int opi = 1;
    while( scanf("%d %d", &N, &A) != EOF )
    {
        for(int i = 0; i < 1000; i++) ans[i] = op[i] = 0;

        op[0] = 1;
        for(int i = 1; i <= N; i++)
        {
            for(int j = 0; j < opi; j++)
                op[j] *= A;

            for(int j = 0; j < opi; j++)
            {
                op[j+1] += op[j]/10;
                op[j] %= 10;
            }
            while( op[opi] != 0)
            {
                op[opi+1] += op[opi]/10;
                op[opi] %= 10;
                opi++;
            }

            poi = opi;
            for(int j = 0; j < 1000; j++) po[j] = op[j];
            for(int j = 0; j < poi; j++)
                po[j] *= i;
            for(int j = 0; j < poi; j++)
            {
                po[j+1] += po[j]/10;
                po[j] %= 10;
            }
            while( po[poi] != 0)
            {
                po[poi+1] += po[poi]/10;
                po[poi] %= 10;
                poi++;
            }

            for(int j = 0; j < 1000; j++)
                ans[j] += po[j];

            for(int j = 0; j < 999; j++)
            {
                ans[j+1] += ans[j]/10;
                ans[j] %= 10;
            }
        }
        int k;
        for(k = 999; k >=0 && ans[k] == 0 ; k-- );
        if( k == -1 ){ printf("0");}
        for( ; k >= 0; k--)
            printf("%d", ans[k]);
        printf("\n");
    }
}
