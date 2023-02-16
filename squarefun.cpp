#include<bits/stdc++.h>
using namespace std;
void square(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s=i*i;
        cout<<s<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    square(n);
}
