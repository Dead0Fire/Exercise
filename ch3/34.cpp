#include <iostream>
using namespace std;
int main() {
   string str;
   int i;
   getline(cin,str);
   for(int k=1;k<=str.length()/2;k++){
    int flag=1;//注意加一个标志
    for(i=0;i<str.length()-k;i++){
           if(str[i]!=str[i+k]){
            flag=0;
            break;}
       }
       if(flag==1){
       cout<<k;break;
           cout<<k;
           break;
       }
   }
   return 0;
}