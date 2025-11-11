#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    vector<string> v;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    enum Gene{A=0,C=1,G=2,T=3};
    vector<vector<int>> numberr(n, vector<int>(4));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            switch(v[i][j]){
                case 'A':
                    numberr[j][A]++;
                    break;
                case 'C':
                    numberr[j][C]++;
                    break;
                case 'G':
                    numberr[j][G]++;
                    break;
                case 'T':
                    numberr[j][T]++;
                    break;
            }
        }
    }
    string result;
    int sum=0;
    for(int i=0;i<n;i++){
        int maxnum=0;
        char gene;
        for(int j=0;j<4;j++){
            if(numberr[i][j]>maxnum){
                maxnum=numberr[i][j];
                switch(j){
                    case A:
                        gene='A';
                        break;
                    case C:
                        gene='C';
                        break;
                    case G:
                        gene='G';
                        break;
                    case T:
                        gene='T';
                        break;
                }
            }
        }
        result.push_back(gene); 
    }
    cout << result << endl;
}