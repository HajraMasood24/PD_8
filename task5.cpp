#include <iostream>
using namespace std;
bool check(string arr[]);
main()
{
    string arr[4];
    for(int i=0;i<4;i++)
    {
        cout<<"Enter elemnets of array:";
        cin>>arr[i];
    }
    bool result=check(arr);
    cout<< result;
}
bool check(string arr[])
{
   if((arr[1]==arr[2]) && (arr[2]==arr[3]) && (arr[3]==arr[0]))
   {
        return true;
   }
   else 
   {
    return false;
   }
}