#include <iostream>
using namespace std;
int cmn(string letter1,string letter2);
main()
{
    string letter1,letter2;
    cout<<"Enter the letter1:";
    cin>>letter1;
    cout<<"Enter the letter2:";
    cin>>letter2;
    int result=cmn(letter1, letter2);
    cout<<result;
}
int cmn(string letter1, string letter2)
{
    int sum=0;
    for(int i=0; letter1[i]!='\0'; i++)
    {
        for(int j=0; letter2[j]!='\0';j++)
        {
            if(letter1[i]==letter2[j])
            {
                sum++;
                letter2[j]=238;
                break;
            }
        }
    }
    return sum;
}