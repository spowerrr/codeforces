#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2,str3,str4;
    getline(cin, str1);
    getline(cin, str2);
    
    for(char s1: str1){
        char a=toupper(s1);
        str3+=a;
    }
    for(char s2: str2){
        char b=toupper(s2);
        str4+=b;
    }
    int comp =str3.compare(str4);
    if (comp < 0) {
        cout << "-1" << endl;
    } else if (comp > 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    // cin>>str1;
    // cin>>str2;
    // //covert to lowercase
    // transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    // transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    // // Compare the strings lexicographically
    // int comp = str1.compare(str2);
    // if (comp < 0) {
    //     cout << "-1" << endl;
    // } else if (comp > 0) {
    //     cout << "1" << endl;
    // } else {
    //     cout << "0" << endl;
    // }
    return 0;
}