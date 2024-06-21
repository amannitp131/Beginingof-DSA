#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int k=0,l=1;
        while(l<5){
            if(arr[k]<arr[l]){
            swap(arr[k],arr[l]);
        }
        k++;l++;
        }
 
    }
    for(int k=0;k<n;k++){  
        cout<<arr[k]<<endl;
    }
}