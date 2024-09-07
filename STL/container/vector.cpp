#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> arr){
    for(int i=arr.start();i<arr.end();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    //declaration
    vector<int> v1;

    //initialization
    vector<int> v2({1,2,3,4,5}); 
    printvector(v2);
    cout<<endl;

    vector<int> v3(10,0); //made a vector of size 10 with each elemnt haveing initialized with zero
    printvector(v3);
    cout<<endl;

    vector<int> v4(v3); //v4 me v3 ka copy store hojayega
    printvector(v4);
    cout<<endl;
 
    ///////////
    //ITERATORS
    ///////////
    auto p = v2.begin(); //v2.begin return iterator not pointer
    cout<<*p;
    cout<<endl;

    auto q = v2.end()-1; //in place of v2.end()-1 we can use v2.back
    cout<<*q;
    cout<<endl;

    auto r = v2.rbegin();
    cout<<*r;
    cout<<endl;

    auto s = v2.rend()-1;
    cout<<*s;
    cout<<endl;

    //note : iterator is a abstraction for traversing in different containers in  programming
              // pointer is a variable that stores address of different memory

    //note : cbegin,cend,crbegin,crend when we have to give read only access to user 


    ///////////
    //CAPACITY
    ///////////

    cout<<v2.size(); //return size of vector
    cout<<endl;
    cout<<v2.capacity(); //return capacity of vector a vector can holds
    cout<<endl;
    cout<<v2.max_size(); //return maximum number of elements vector can holds
    cout<<endl;

     cout<<v1.empty(); //check vector empty or not and return 0 or 1
     cout<<endl;
     cout<<v2.empty();

     v2.resize(3)
     printvector(v2);



}