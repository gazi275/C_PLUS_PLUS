#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<char> freq(26,0);
    for(char ch:s){
        freq[ch-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<char(i+'a')<<" "<<freq[i]<<endl;
        }
    }
}