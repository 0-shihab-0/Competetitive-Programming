#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   string name;

   for(int i=1;i<=n;i++){
    cin>>name;
    
   int len=name.size();
   if(len<=10) cout<<name<<endl;
   else 
    cout<<name[0]<<len-2<<name[len-1]<<endl;
   }
    
    return 0;
}