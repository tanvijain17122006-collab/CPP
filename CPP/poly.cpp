#include<iostream>
using namespace std;
int main(){
    //p(X)=5X2+4X+2
    int n;
    cout<<"ENTER N:";
    cin>>n;
    int coff[n];
    int exp[n];
    for(int i=1;i<n+1;i++){
        cout<<"enter Coefficients "<<i<<":";
        cin>>coff[i-1];
        cout<<"enter eExponents "<<i<<":";
        cin>>exp[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<coff[i];
        if (exp[i]!=0){
            cout<<"X^"<<exp[i];
        }
        if (i<n-1){
            cout<<"+";
        }
    }
    return 0;
}