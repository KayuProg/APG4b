#include <bits/stdc++.h>
using namespace std;

int main() {
 int N;
 cin>>N;
 int ans;
 int A;
 cin>>A;
 ans=A;

 for
 (int i=0;i<N;i++){
  string op;
  int value;
  cin>>op>>value;

  if(op=="+"){
    ans+=value;
  }
  else if(op=="/"){
    if (value==0){
      cout<<"error"<<endl;
      break;
    }
    else{
      ans/=value;
    }
  }
  else if(op=="-"){
    ans-=value;
  }
  else if(op=="*"){
    ans*=value;
  }
  cout<<i+1<<":"<<ans<<endl;
 }
 

}
