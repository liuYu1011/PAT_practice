#include <iostream>
#include <string>
#include<stack>

using namespace std;

int main() {
    string s;
    int sum=0;
    stack<int>stk;
    char a[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        sum=s[i]-'0'+sum;
    }
   // cout<<sum<<endl;
    while(sum!=0)
    {
        stk.push(sum%10);
        sum=sum/10;
    }
    while(stk.size()!=1)
    {
        cout<<a[stk.top()]<<" ";
        stk.pop();
    }
    cout<<a[stk.top()];
    system("pause");
}

