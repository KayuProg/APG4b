#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r;
    cin>>n>>l>>r;

    vector<int>a(n);
    vector<int>b(n);

    for (int i=0;i<n;i++){
        if(i+1<=l and i+1>r){
            a[i]=i+1;
        }
        else{
            a[i]=
        }

    }

    sort(a,a[l],a[r]);


    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}