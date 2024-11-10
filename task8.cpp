#include <iostream>
using namespace std;
int sec(string colour[], int length);
main()
{
    int length=0;
    
    cout<<"Enter the length of array:";
    cin>>length;
    string colour[length];
    for(int i=0; i<length; i++)
    {
        cout<<"Enter colours:";
        cin>>colour[i];
    }
    int result=sec(colour, length);
    cout<<result;
}
int sec(string colour[], int length)
{
    int t=2*length;
    int ttl=t;
    for(int j=0; j<length-1; j++)
    {
        if(colour[j]==colour[j+1]){
            ttl=ttl;
        }
        if(colour[j]!=colour[j+1]){
            ttl=ttl+1;
        }
       
    }
     return ttl;
}