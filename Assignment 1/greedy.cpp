#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Please enter the totol number of items : ";
    int n;
    cin>>n;
    cout << "Please enter the profit of each item :" << endl;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back({a,0});
    } 
    cout << "Please the cost of each item :" << endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i].second=a;
    }
    vector<pair<int,vector<pair<int,int>>>
}