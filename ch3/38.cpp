#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
//这道题关键在于判断循环节,用unordered_map记录余数出现的位置
//余数重复出现说明循环节开始
int main(){
    int a,b;
    cin>>a>>b;
    string intpart= to_string(a/b);
    int rem= a%b;
    string fracpart;
    unordered_map<int,int> unor;//记录余数出现的位置.判断是否重复出现,用count.
    while (rem&&!unor.count(rem))//余数没有重复出现而且没除尽
    {
        unor[rem]= fracpart.size(); //记录该余数出现的位置,表示循环节
        rem*=10;    
        fracpart+= to_string(rem/b);
        rem= rem%b;
    }
    string result=intpart+".";
    int cyclelen=0;
    if(rem==0){ //除尽了,就按照0计算
        if(fracpart.size()==0){
            result+="0";
        }
        result+= fracpart+"(0)";
        cyclelen=1;
    }
    else{ //寻找循环节,肯定现在的rem对应的位置是循环节开始
        int cyclestart= unor[rem];
        result+= fracpart.substr(0,cyclestart)+"("+fracpart.substr(cyclestart)+")";
        cyclelen= fracpart.size()-cyclestart;
    }
    cout<<result<<endl;
    cout<<cyclelen<<endl;
    return 0;
}