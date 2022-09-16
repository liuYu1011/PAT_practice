#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool jugement (string s)
{
    int count_p=0,count_a=0,count_t=0;
    int posi_p=0,posi_a=0,posi_t=0;
    int num1=0,num2=0,num3=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
            return false;
        if(s[i]=='P')
        {
            count_p++;
        }
        else if(s[i]=='A')
        {
            count_a++;
        }
        else
        {
            count_t++;
        }
    }

    if(count_p!=1||count_t!=1||count_a<1)
        return false;
    posi_p=s.find('P');
    posi_a=s.find('A');
    posi_t=s.find('T');
    if(posi_p>=posi_t)
        return false;
    for (int i=0;i<s.length();i++)
    {
        if(i<posi_t && s[i]=='A')
            num1++;
        else if(i<posi_t&&i>posi_p&&s[i]=='A')
            num2++;
        else if(i>posi_t&&s[i]=='A')
            num3++;
    }
    if(num3==num1*num2)
    {
        return true;
    }
    else
        return false;


}

int main() {
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(jugement(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    system("pause");

}
