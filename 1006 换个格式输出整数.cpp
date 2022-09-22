#include<iostream>
#include <string>

using namespace std;
int main()
{
    int a ;
    cin>>a;
    int h_num,sh_num,g_num;
    g_num=a%10;
    sh_num=(a/10)%10;
    h_num=(a/100)%10;
    for(int i=1;i<=h_num;i++)
    {
        cout<<"B";
    }
    for(int i=1;i<=sh_num;i++)
    {
        cout<<"S";
    }
    //g
    for(int i=1;i<=g_num;i++)
    {
        cout<<i;
    }
    system("pause");
}
