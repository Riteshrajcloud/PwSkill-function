#include<bits/stdc++.h>
using namespace std;
void odd(int c,int d){
    for(int i=c;i<=d;i++){
        if(i%2 !=0){
            cout<<i<<endl;;
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    odd(a,b);
}
