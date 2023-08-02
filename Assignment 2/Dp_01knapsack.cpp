#include <bits/stdc++.h>
using namespace  std;


/*==================== Debug =======================================================*/
void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
// void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
/*=======================================================================================*/
 
 
/*
   *********************SOLVE****************************
*/   
 
set<pair<int,int>>combine(set<pair<int,int>>fir,set<pair<int,int>>sec){
    vector<pair<int,int>>v;
    for(auto it:fir){
        v.push_back(it);
    }
    for(auto it:sec){
        v.push_back(it);
    }
    sort(v.begin(),v.end());
    int currcost=v[0].first,currweight=v[0].second;
    for(int i=1;i<v.size();i++){
        if(v[i].first>currcost && v[i].second>currweight){
            currcost=v[i].first;
            currweight = v[i].second;
        }
        else{
            v.erase(v.begin()+i);
            i--;    
        }
    }
    set<pair<int,int>>add;
    for(auto it:v){
        add.insert(it);
    }
    return add;
}


int main(){
    int n;
    cout << "Please enter the total number of objects : ";
    cin>>n;
    vector<pair<int,int>>v;
    cout << "Please enter the weight and price of objects" << endl;
    for(int i=0;i<n;i++){
        int a,b;
        cout << "Profit of object "<< i+1 << ": ";
        cin>>a;
        cout << "Weight of object "<< i +1<< ": ";
        cin>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    vector<set<int>>ans;
    set<pair<int,int>>s; // profit weight
    s.insert({0,0});
    for(int i=0;i<n;i++){
        set<pair<int,int>>newset;
        for(auto it:s){
            newset.insert({it.first+v[i].first,it.second+v[i].second});
        }
    }
}