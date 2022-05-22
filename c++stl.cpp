#include<iostream>
// #include<array>
// #include<vector>
// #include<deque>
#include<bits/stdc++.h>

using namespace std;
int main(){


//  Array here:
    // array<int,4> a = {1,2,3,4};
    // int size = a.size();

    // for(int i=0;i<size;i++){
    //    cout<<a[i]<<endl; 
    // }
    // cout<<a[2]<<endl;
    // cout<<a.empty()<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;


    // Vector here:

//     vector<int> v;
//     cout<<v.capacity()<<endl;
     
//      v.push_back(1);
//      cout<<v.size()<<endl;
//      v.pop_back();
//      cout<<v.size()<<endl;

//      v.clear();
//      cout<<v.capacity()<<endl;
//      cout<<v.size()<<endl;

// deque starts here:

// deque<int> d;
// d.push_front(1);
// d.push_back(2);
// cout<<d.size()<<endl;
// int size=d.size();


// d.erase(d.begin(),d.begin()+1);
// cout<<d.size()<<endl;
// d.pop_back();
// cout<<d.size()<<endl;

// list here:

// list<int> n(5,100);
// for(int i:n){
//     cout<<i<<endl;
// }
// rest of the functions are same

// stack<int> s;
// s.push(1);
// s.push(2);
// s.pop();
// int look = s.top();
// cout<<look<<endl;
// cout<<s.size()<<endl;

// queue starts here:

// queue<int> q;
// q.push(1);
// q.push(2);
// cout<<q.front()<<endl;
// q.pop();
// cout<<q.size()<<endl;
// cout<<q.front()<<endl;

// priority queue starts here:

// priority_queue<int> max;
// max.push(1);
// max.push(2);
// max.push(3);
// max.push(4);

// int size = max.size();
// // yaha pe aise likh rahe taaki constant size ke lie dekh sake


// for(int i=0;i<size;i++){
//     cout<<max.top()<<endl;

//     max.pop();
// }
//   for min heap:

// priority_queue<int,vector<int>,greater<int> >min;
// min.push(1);
// min.push(2);
// min.push(3);  
// min.push(4);

// int size = min.size();
// // yaha pe aise likh rahe taaki constant size ke lie dekh sake


// for(int i=0;i<size;i++){
//     cout<<min.top()<<endl;

//     min.pop();
// }


// list starts here:

// set<int> l;
// l.insert(5);
// l.insert(4);
// l.insert(6);
// l.insert(2);

// for(auto i:l){
//     cout<<i<<endl;
// }

// set<int>:: iterator itr=l.find(5);
// itr++;

// cout<<*itr<<endl;


// cout<<l.count(5)<<endl;

// map<int,int> m;

// m[1]=5;
// m[2]=7;
// m[3]=6;


// // before inserting
// for(auto i:m){
//     cout<<i.first<<"  "<<i.second<<endl;
// }

// m.insert({12,67});

// // after inserting
// for(auto i:m){
//     cout<<i.first<<endl;
// }

// auto it=m.find(12);
// for(auto i=it;it!=m.end();i++){
//     cout<<(*i).first<<endl;
// }

// stl algorith implementations here:

vector<int> v;
v.push_back(5);
v.push_back(3);
v.push_back(2);
v.push_back(9);

// cout<<"The presence of number binary search is-->"<<binary_search(v.begin(),v.end(),9);

// int a=4;
// int b=6;
// swap(a,b);
// cout<<"value of a-->"<<a<<endl;


// string str = "Amit";
// reverse(str.begin(),str.end());
// cout<<"reverse of this is -->"<<str<<endl;


rotate(v.begin(),v.begin()+2,v.end());

for(int i:v){
    cout<<i<<" "<<endl; 
}
sort(v.begin(),v.end());

// based on intro sort which is a composition of merge sort,quick sort,heap sort
for(int i:v){
    cout<<i<<" "; 
}


 }