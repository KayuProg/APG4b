#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;
 int Q;
 cin>>Q;
 vector <int>  N(n);
 for (int i=0; i<n; i++){
   int val;
   cin>>val;
   N[i]=val;
 }


 sort(N.begin(),N.end());

int x[Q];
for (int i=0; i<Q;i++){
 int val;
 cin>>val;
 x[i]=val;
}
 int ans[Q];
 for (int i=0; i<Q; i++){
   int x_val;
   x_val=x[i];
   int ng=-1, ok=N.size();

   while(abs(ok-ng)>1){
   int mid=(ok+ng)/2;
   if(N[mid]>=x_val){
      ok=mid;
   }else{
      ng=mid;
   }
 }
 ans[i]=ok;
 }

 for (int i=0; i<Q;i++){
   cout<<N.size()-ans[i]<<endl;
 }

 
}