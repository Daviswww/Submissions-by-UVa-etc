#include<iostream>
#include<string>
#include<queue>

using namespace std;

struct works
{
    int ms;
    string name;
};


int main()
{
    int n, m, tmp;
    works work;
    queue<works> q;
    string s;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> tmp;
        work.ms = tmp;
        work.name = s;
        q.push(work);
    }
    tmp = 0;
    while (!q.empty())
    {
        work = q.front();
        q.pop();
        if(work.ms - m > 0){
            work.ms -= m;
            q.push(work);
            tmp += m;
        }else{
            tmp += work.ms;
            cout << work.name << " " << tmp << endl; 
        }
    }
    

    return 0;
}