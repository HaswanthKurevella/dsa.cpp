// we can store two values inside one identifier,such identifer is called as a pair
#include<bits/stdc++.h>
using namespace std;
void explorePairs(){
    pair<int,int> p={3,5};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> q={3,{4,5}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;
    
}
int main(){
    explorePairs();
}