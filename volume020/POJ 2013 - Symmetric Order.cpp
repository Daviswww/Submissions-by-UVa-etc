#include <iostream>  
#include <string>  
using namespace std;  
int main()  
{  
    int n,j=1;  
    while(cin>>n&&n)  
    {  
        string a[17];  
        int i,b[17]={0};  
        for(i=0;i<n;i++)  
            cin>>a[i];  
        cout<<"SET "<<j++<<endl;  
        for(i=0;i<n;i+=2)  
        {  
            cout<<a[i]<<endl;  
            b[i]=1;  
        }  
        for(i=n-1;i>=0;i--)  
            if(b[i]==0) cout<<a[i]<<endl;  
    }  
    return 0;  
} 
