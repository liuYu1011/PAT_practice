#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    int sum=0;
   cin >> num;
   //cout<<num<<endl;
while(num!=1)
{
    if(num%2==0)
    {
        num=num/2;
    }
    else
    {
        num=(3*num+1)/2;
    }
    sum++;


}
   cout<<sum<<endl;
    system("pause");
}

