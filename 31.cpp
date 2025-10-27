#include <iostream>
using namespace std;
int main(){
    char a;
    int s=1;
    int q=0;
    while (cin>>a)
    {
        if (a=='O')
           { s++;}
        else if (a=='X')
            {s=0;}
        q+=s;
    }
    cout<<q;
}             