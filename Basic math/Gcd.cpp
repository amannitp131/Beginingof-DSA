#include<bits/stdc++.h>
using namespace std;

int gocd(int a,int b){
    while(b!=0){
        int t=a;
        a= abs(a-b);
        b=min(t,b);
    }
    return a;
}
int main(){
    int x,y;
    cin>>x>>y;

    cout<<"HCF is "<<gocd(x,y)<<endl;
    cout<<"LCM is "<<(x*y)/gcd(x,y);

}