#include<iostream>
#include<vector>
using namespace std;  
const int N=10005;  
  
vector<int>v1[N],v2[N];  
int n,m,v[N];
  
int main()  
{  
    while (~scanf("%d%d",&n,&m))  
    {  
        for (int i=0;i<N;i++) v1[i].clear(),v2[i].clear();  
        int r,x;  
        for (int i=1;i<=n;i++)  
        {  
            scanf("%d",&r);  
            for (int j=1;j<=r;j++) scanf("%d",&v[j]);  
            for (int j=1;j<=r;j++) scanf("%d",&x),  
                v1[v[j]].push_back(i),v2[v[j]].push_back(x);  
        }  
        printf("%d %d\n",m,n);  
        for (int i=1;i<=m;i++)  
        {  
            int l=v1[i].size();  
            printf("%d",l);  
            for (int j=0;j<l;j++) printf(" %d",v1[i][j]);  
            if (l==0) printf("\n\n");  
            else {  
                printf("\n%d",v2[i][0]);  
                for (int j=1;j<l;j++) printf(" %d",v2[i][j]);  
                puts("");  
            }  
        }  
    }  
}   
