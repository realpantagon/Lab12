#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
    int Grade;
    string x;
    
    srand(time(0));
    Grade = rand()%8+1;

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();

    if(Grade==1){
        x="A";
    }
    if(Grade==2){
        x="B";
    }
    if(Grade==3){
        x="B+";
    }
    if(Grade==4){
       x="C";
    }
    if(Grade==5){
        x="C+";
    }
    if(Grade==6){
        x="D";
    }
    if(Grade==7){
        x="D+";
    }
    if(Grade==8){
        x="F";
    }if(Grade==9){
        x="W";
    }
    cout << "You will get "<<x<<" in this 261102.";
}
    
 
