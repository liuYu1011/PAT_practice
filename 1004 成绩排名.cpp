#include<iostream>
#include <string>

using namespace std;

class person
{
public:
    char m_name[11];
    char m_id[11];
    int score;
};
int main()
{
    int num=0;
    cin>>num;
    person * p=new person[num];
    for(int i=0;i<num;i++)
    {
        cin>>p[i].m_name>>p[i].m_id>>p[i].score;
    }
    int max=p[0].score, min=p[0].score;
    int count_max=0,count_min=0;
    for(int i=0;i<num;i++)
    {
        if(p[i].score>max)
        {
            max=p[i].score;
            count_max=i;
        }
        if(p[i].score<min)
        {
            min=p[i].score;
            count_min=i;
        }

    }
    cout<<p[count_max].m_name<<" "<<p[count_max].m_id<<endl;
    cout<<p[count_min].m_name<<" "<<p[count_min].m_id<<endl;

    system("pause");
}
