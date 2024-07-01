#include <bits/stdc++.h>
using namespace std;

int main() {
 int N;
 cin>>N;
 int ans;
 int A;
 cin>>A;
 ans=A;

 for(int i=0;i<N;i++){
  string op;
  int value;
  value=0;
  cin>>op>>value;
  if(op=="+"){
    ans+=value;
  }
  else if(op=="/"){
    if (value==0){
      cout<<"error"<<endl;
    }
    ans/=value;
  }
  else if(op=="-"){
    ans-=value;
  }
  else if(op=="*"){
    ans*=value;
  }
  cout<<i<<":"<<ans<<endl;
 }
 

}
