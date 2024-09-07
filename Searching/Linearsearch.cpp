#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int k){
    int p=0;
    //step1 : har ek element ko check kro k ke brabr h ya nhi
    for(int i=0;i<n;i++){
        //step2: brabr hua to index ka value store krke loop se bahr aajao
        if(arr[i]==k){
            cout<< "element at  " <<i<<" index";
            p++;
            break;
        }
    }
    if(p==0){
      cout<<"element not found";
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,4,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    linearsearch(arr,size,2);

}