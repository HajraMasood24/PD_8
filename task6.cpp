#include <iostream>
using namespace std;
void even_odd(int arr[],int num);
main()
{
    int num;
    int arr[3];
    cout<<"Enter number of times even_odd transformation need to be done:";
    cin>>num;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter number:";
        cin>>arr[i];
    }
    even_odd(arr,num);
    
}
void even_odd(int arr[],int num)
{
    int n;
    
        for(n=0; n<3; n++)
        {
            for(int i=0; i<num; i++){
            if(arr[n]%2==0){
                arr[n]=arr[n]-2;
            }
            
            if(arr[n]%2!=0){
                arr[n]=arr[n]+2;   
            }    
        }
       cout<<arr[n]<<",";
    }  
     
}