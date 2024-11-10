#include <iostream>
using namespace std;
bool count(string letter);

main()
{
   
    string letter;
    cout<<"Enter a string:";
    cin>>letter;
    bool result=count(letter);
    cout<<result;
}
bool count(string letter)
{
   int i;
    for(i=0; letter[i] !='\0'; i++)
    {
        i=i;
    }
        if(i%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    
    
}