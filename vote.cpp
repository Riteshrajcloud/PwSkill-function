#include<bits/stdc++.h>
using namespace std;
void vote(int n){
    if(n>=18){
        cout<< "Yes"<<endl;
    }
    else{
        cout<< "No"<<endl;
    }
}
int main(){
    int age;
    cout<<"enter the age of a person";
    cin>>age;
    vote(age);
}
