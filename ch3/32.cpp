#include <iostream>
#include <cctype>  // for isdigit
using namespace std;
int main(){
    string a;
    float s=0;
    float c=12.01;
    float h=1.008;
    float o=16.00;
    float n=14.01;
    cin>>a;
    for (int i=0; i<a.length(); i++)
    {
        int count=isdigit(a[i+1])?int(a[i+1])-48:1; //
        if (a[i]=='C')
           { s+=c*count;} //注意字符转整数,48是'0'的ASCII码
        else if (a[i]=='H')
            {s+=h*count;}
        else if (a[i]=='O')
            {s+=o*count;}
        else if (a[i]=='N')
            {s+=n*count;}
    }
    cout<<s;
    return 0;
}