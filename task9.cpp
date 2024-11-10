#include<iostream>
using namespace std;
bool isvalid(string pin);
void dancemove(string pin,string moves[]);
int main(){

    string pin;
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};

    cout<< "Enter your  PIN: ";
    cin >> pin;

    if(isvalid(pin)){
        
        dancemove(pin,moves);
    }
    else{
        cout << "Invalid PIN."<<endl;
    }
    
    return 0;

}
bool isvalid(string pin){

    int length=0;

    for(int i=0;pin[i]!='\0';i++){
        length++;
    }
    if(length!=4){
        return false;
    }

    for(int i=0;i<4;i++){
        if(pin[i]<'0'||pin[i]>'9'){
            return false;
        }
    }

    return true;
}
void dancemove(string pin,string moves[]){

    int value[4];

    for(int i=0;i<4;i++){
        value[i]=((pin[i]-'0')+i)%10;}

     for(int i=0;i<4;i++){
      cout<< moves[value[i]]<<" ";
      
    }
}


