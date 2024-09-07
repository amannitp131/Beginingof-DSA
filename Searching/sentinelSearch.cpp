#include<iostream>
#include <climits>
using namespace std;
void sentinel_linearsearch(int arr[],int n,int k){
    int i=0;
    //step1: last index wale value ko store kro aur last index me k store krdo
    int last  = arr[n-1];
    arr[n-1]=k;
    //step2: array me linearly search krke dekho ki k ke brabr hua tb tk
    while(arr[i]!=k){
        i++;

    }
    if(i<n-1){
        cout<<"founded at index "<<i;
    }else if(last==k){
        cout<<"founded at index "<<n-1;
    }else{
        cout<<"element not founded";
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,4,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    sentinel_linearsearch(arr,size,19);

}