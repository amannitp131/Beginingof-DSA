#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    //to insert
    mp.insert({"car",1});
    mp.insert(make_pair("bike",2));
    mp["scooty"]=3;
    mp["cycle"]=4;
    mp["boat"]=5;
    mp.emplace("airplane",6); //more efficient than insert because it directly moves elemnet inside container without creating object

//to access element
cout<<mp["scooty"]<<" "<<mp.at("cycle")<<endl;

auto it3 = mp.find("boat");
if(it3!=mp.end()){
    cout<<"element found"<<"key :"<<it3->first<<" value :"<<it3->second<<endl;
}

cout<<"number of elemnt with key value airplane :"<<mp.count("airplane")<<endl;


//to print
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
     cout<<"size is "<<mp.size()<<endl;

//  Method 1
    mp.erase("scooty");
    //to print
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
     cout<<"size is "<<mp.size()<<endl;

//  Method 2
    auto it = mp.begin();
    mp.erase(it);
 //to print
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
     cout<<"size is "<<mp.size()<<endl;

//  Method 3
    auto it1=next(mp.begin(),1);
    auto it2=next(mp.begin(),2);
    mp.erase(it1,it2);
     //to print
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"size is "<<mp.size()<<endl;


//To check element empty
    cout<<"is lement empty : "<<mp.empty()<<endl;
    mp.erase(mp.begin(),mp.end());
    cout<<"is lement empty :"<<mp.empty()<<endl;

cout<<"maximum elements this unordered_map can hold  :"<<mp.max_size()<<endl;


}