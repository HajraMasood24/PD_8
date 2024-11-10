#include<iostream>
using namespace std;
main()
{	
    int l, digit;
	bool result;
	cout<<"Enter length of your array: ";
	cin>>l;
	
	int arr[l];
	for(int i=0; i<l; i++)
	{
        cout<<"Enter number:";
		cin>>arr[i];
	}

	for(int j=0; j<l; j++)
	{
	   if(arr[j]==7)
	   {
		result=true;
		break;
	   }
	   else if(arr[j]>9)
	   {
		digit=arr[j];
		while(digit!=0)
		{
			digit=arr[j]%10;
			arr[j]=arr[j]/10;
			if(digit==7 || arr[j]==7)
			{
				result=true;
				break;
			}			
		 }
	    }
	}
	
	if(result)
	{
		cout<<"Boom!";
	}
	else
	{
		cout<<"There is no 7 in the array.";
	}
}
