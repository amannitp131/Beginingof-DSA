#include<iostream>
using namespace std;
void binarysearch(int arr[],int n,int k){
    //step1: start,end define krdo initially
    int start=0,end=n-1;int res=-1;
    //step2: lop chlao jb tj start ,end se bara na hojaye aur ek mid value define krdo jo dono ke beech me ho
    while(start<=end){
 int mid = (start + end) / 2;
 //agr mid postion wala element k se chota hua 
    if(arr[mid]<k){
        start=mid+1;
        //agr mid postion wala element k se bada hua 
    }else if(arr[mid]>k){
        end=mid-1;
    }else{
    //agr mid postion wala element k ke brabr hua  then element founded
        res=mid;
        break;
    }
    }
        
    if(res>-1){
        cout<<"element founded at index "<<res;
    }else{
      cout<<"element not founded";
    }   
}

int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    binarysearch(arr,size,1);

}