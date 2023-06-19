#include<bits/stdc++.h>

using namespace std;
void explainPair(){
    pair<int,int> p = {25,80};
    cout<<p.first<<"\t"<<p.second<<endl;

    pair<int, pair<int,int>> p2=  {1,{2,3}};
    cout << p2.first << "\t" << p2.second.second<< "\t"<< p2.second.first<<"\n";

    pair<int,int> pairArray[] = {{1,2}, {2,3}, {3,4}, {4,5}};
    cout << pairArray[1].first << "\t" << pairArray[3].second<<endl;
}
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << v[1] <<endl;
    cout << v.at(0)<<endl;

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it)<<"\t";

    vector<pair<int, int>> pairVector;
    pairVector.push_back({1,2});
    pairVector.emplace_back(2,3);
}
int main()
{
    explainVector();
}
