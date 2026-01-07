#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l=0;
    int r=s.size()-1;
    bool isPalindrome=true;
    while(l<r){
        if(s[l]!=s[r]){
            isPalindrome =false;
            break;
        }
        l++;
        r--;
    }
    if(isPalindrome) cout<< "palindrome"<<endl;
    else cout<< "not palindrome" <<endl;
}