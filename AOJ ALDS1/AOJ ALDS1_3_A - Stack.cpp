#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    string str = "";
    stack<int> sk;
    int a, b, c;

    while(cin >> str) {
        c = 0;
        if(str == "+") {
            a = sk.top(), sk.pop();
            b = sk.top(), sk.pop();
            c = b + a;
            sk.push(c);
        }else if(str == "-") {
            a = sk.top(), sk.pop();
            b = sk.top(), sk.pop();
            c = b - a;
            sk.push(c);
        }else if(str == "*") {
            a = sk.top(), sk.pop();
            b = sk.top(), sk.pop();
            c = b * a;
            sk.push(c);
        }else{
            c = stoi(str);
            sk.push(c);
        }
    }
    cout << sk.top() << endl;
    return 0;
}

/*
34 116 + 20 5 - 5 - 1 * +
*/