#include <iostream>
using namespace std;
main()
{
    string movie;
    string movies[5]={"Gladiator","StarWars", "Terminator", "TakingLives", "TombRider"};
    
    int ttl;
    cout<<"Enter the name of the movie:";
    cin>>movie;
    for(int i=0;i<5;i++){
        if(movie==movies[i] && i%2==0)
        {
            ttl=500-(500*0.05);
            cout<<ttl;
        }
        else if(movie==movies[i] && i%2!=0)
        {
            ttl=500-(500*0.10);
            cout<<ttl;
        }
        
    }
}