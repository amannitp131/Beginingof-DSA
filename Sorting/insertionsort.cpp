// descending order
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     int arr[]={1,3,4,1,3,4,3,6,5,9};
//     int j;int key;
//     for(int i=1;i<10;i++){
//         key=arr[i];
//         j=i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;

//     }
    
//     for(int k=0;k<10;k++){  
//         cout<<arr[k]<<endl;
//     }
// }
// ascending order
#include<iostream>
using namespace std;

int main(){
    int i=1; //always ignore 1st element
    int arr[]={1,3,4,1,3,4,3,6,5,9};
    int j;int key;
    for(int i=1;i<10;i++){
        key=arr[i];   //compare from a element starting from second position
        j=i-1;    //start comparing from i-1 th element to 0 th position
        while(j>=0 && arr[j]<key){  //if key element is greater than j th element then exchange value
            arr[j+1]=arr[j];
            j--;                 //reduce j value from i-1 to i-2 to i-3 and so on to 0
        }
        arr[j+1]=key;  //exchamge completed

    }
    
    for(int k=0;k<10;k++){  
        cout<<arr[k]<<endl;
    }
}
