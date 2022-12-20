#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    string c;
    string d;
    string x;
    
    cout <<"Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    cout <<"?????: ";
    getline(cin,a);
    
    cout <<"Fahsai: Wow!!! "<< a <<" is a really cool name."<<"\n";
    cout <<"Fahsai: I think you are an Engineering student. What is your student ID?"<< "\n";
    cout <<a <<": ";
    cin >>x;
    cin.ignore();
    
    cout <<"Fahsai: I think you may be GEAR " << (((int(x[0]) - '0')*10) + (int(x[1]) - '0')) - 12 << "." <<" I have a free movie ticket for you." << "\n";
    cout <<"Fahsai: Let's go to the cinema together!!!" << "\n";
    cout <<"Fahsai: What movie do you want to watch?" << "\n";
    cout << a <<": ";
    getline(cin,b);
    
    cout <<"Fahsai: So....which day are you free to go with me?" << "\n";
    cout << a <<": ";
    getline(cin,c);
    
    cout <<"Fahsai: "<< c <<"....that is OK!!! I'm looking forward to watching " << b <<" with you."<<"\n";
    cout << a <<": ";
    getline(cin,d);
    cout <<"Fahsai: 555+ see you "<< c <<". Bye Bye \\(^ ^)/"<<"\n";
    
    return 0;
    
    
    

}
