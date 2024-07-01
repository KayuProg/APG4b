#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r;
    cin>>n>>l>>r;
    
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }    

    int gap=(r-l);

    for (int i=0;i<gap;i++){
        int val=a[l-1];
        int val_end=a[r-1];
        a[l]=val_end;
        a[r]=val;
    }

    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}