#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string OrgStr = "PWSkills";
    string temp = OrgStr;
    reverse(temp.begin(),temp.end());
    OrgStr+=temp;
    cout<<OrgStr;
}