#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t ;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s = (a+1)%c;
        
        if (b%c==0 || b%c==s)
        {
        cout<<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
            
        }
	return 0;
}
