#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str[0]>='a' && str[0]<='z'){
        str[0]=toupper(str[0]);
    }
    cout<<str;
    
    return 0;
}