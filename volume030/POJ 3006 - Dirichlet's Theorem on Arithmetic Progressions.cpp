#include<iostream>
using namespace std;

bool is_prime(int n)
{
   int i;
   if(n == 2)return 1;
   for(i = 2 ; i * i <= n ; i ++)
       if(n%i == 0)return 0;
   return 1;
}

int main()
{
   int a,d,n;
   int num;
   int t;
   while((cin>>a>>d>>n)&&(a!=0&&d!=0&&n!=0))
   {
       t=0;
       for(int i=0;;i++)
       {
           num=a+i*d;
           if(is_prime(num)&&num>=2)
           {
               t++;
               if(t==n)
               {
                   cout<<num<<endl;
                   break;
               }
           }
       }
   }
}
