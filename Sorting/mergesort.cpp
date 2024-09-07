//divide and conquer algorithm

#include<iostream>
using namespace std;
// void swap(int &a,int &b){
//     int t=a;a=b;b=t;
// }
void mergesort(int arr[],int low,int high){
  if(low>=high){
    return;
  }
  int mid=low+high/2;

  //left half
  mergesort(arr,low,mid);
  //right half
  mergesort(arr,mid+1,high);

  merge(arr,low,mid,high);

}
void merge(int arr[],int low,int mid,int high){
int temp={}; //empty array
int left =low;
int right = mid+1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
        

    
}