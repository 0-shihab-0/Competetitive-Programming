#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    int n;
    cin>>n;

    int count=0;
    for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    if((a==1 && b==1)||(b==1 && c==1)||(a==1 && c==1)){
        count++;
    }
    }
    cout<<count<<endl;
    return 0;
}