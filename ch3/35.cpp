#include <iostream>
using namespace std;
int main() {
    char k[5][5]={{'t','r','g','s','j'},
                  {'x','d','o','k','i'},
                  {'M',' ','v','l','n'},
                  {'w','p','a','b','e'},
                  {'u','q','h','c','f'}};
    string step;
    pair<int,int> emptyposition=make_pair(2,1);//新用法;
    getline(cin,step);
    for(int i=0;i<step.length();i++){
        switch(step[i]){
            case 'A':swap(k[emptyposition.first][emptyposition.second],k[emptyposition.first-1][emptyposition.second]);
                     emptyposition.first--;
                break;
            case 'B':swap(k[emptyposition.first][emptyposition.second],k[emptyposition.first+1][emptyposition.second]);
                     emptyposition.first++;
                break;
            case 'L':swap(k[emptyposition.first][emptyposition.second],k[emptyposition.first][emptyposition.second-1]);
                     emptyposition.second--;
                break;
            case 'R':swap(k[emptyposition.first][emptyposition.second],k[emptyposition.first][emptyposition.second+1]);
                     emptyposition.second++;
                break;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
};