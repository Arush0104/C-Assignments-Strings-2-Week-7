#include<iostream>
#include<climits>
using namespace std;
int main(){
    string s = "2947578";
    int digit;
    int max = INT_MIN;
    for(int i=0;i<s.length();i++){
        digit = s[i]-'0';
        if(digit>max) max=digit;
    }
    cout<<digit;
}