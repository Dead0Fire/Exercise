#include <iostream>
using namespace std;
int main(){
    string a;
    int s=0;
    int q=0;
    getline(cin,a); // 使用 getline 读取整行输入
        for (int i=0; i<a.length(); i++)
        {
            if (a[i]=='O')
               { s++;}
            else if (a[i]=='X')
                {s=0;}
            q+=s;
        }
        cout<<q;
    return 0;
}             