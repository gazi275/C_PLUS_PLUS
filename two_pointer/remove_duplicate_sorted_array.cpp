#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    for(int r=1;r<n;r++){
        if(arr[l]!=arr[r]){
            l++;
            arr[l]=arr[r];
        }
    }
    for(int i=0;i<l+1;i++){
        cout<<arr[i]<<" ";
    }
} 