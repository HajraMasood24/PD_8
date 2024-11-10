#include <iostream>
using namespace std;
main()
{
    string fruit;
    int ttl,kg;
    string fruits[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    cout<<"Enter the name of fruit:";
    cin>>fruit;
    cout<<"Quantity in kilograms:";
    cin>>kg;
    for(int i=0;i<4;i++)
    {
        if(fruits[i]==fruit){
            ttl=kg*price[i];
            cout<<ttl;
        }
    }

}