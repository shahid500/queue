#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q;
    cout<<Q.size()<<endl;
    Q.push(212);
    Q.push(32);
    Q.push(43);

    cout<<Q.size()<<endl;
    Q.pop();
    cout<<Q.size()<<endl;
    return 0;

}
