#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int t=a;a=b;b=t;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        for(int i=0;i<n;i++){
            int minindex =i;
            for( int j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                }
            }
            swap(arr[i],arr[minindex]);
            
        }
        for(int k=0;k<n;k++){  
        cout<<arr[k]<<endl;
    }

    
}