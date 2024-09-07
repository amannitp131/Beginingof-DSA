#include<bits\stdc++.h>
using namespace std;
int metabinarysearch(int arr[],int n,int k){
    int interval_size = n;
    while(interval_size>0){
         int index = min(n-1,interval_size/2);
         int mid=arr[index];
         if(mid>k){
            interval_size=index/2;
         }else if(mid<k){
            interval_size=(n-index)/2;
         }else{
            return index;
         }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    if(metabinarysearch(arr,size,1)==-1){
        cout<<"element not founded";
    }else{
        cout<<"element at index"<<metabinarysearch(arr,size,1);
    }

}