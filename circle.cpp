#include<bits/stdc++.h>
using namespace std;
void area(double r){
    double a=3.14*(r*r);
    double p=2*r*(3.14);
    cout<<"area="<<a<<" "<<"perimetre="<<p;
}

int main(){
    double r;
    cin>>r;
    area(r);
}
