#include<bits/stdc++.h>//it will work for all the library
using namespace std;
int main(){
    string str,newSum;
    cin>>str;
    vector<int> num;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='0' && str[i]<='9'){
            num.push_back(str[i]-'0'); //(str[i]-'0') this coverts string to number and push_back function stores that number into "num vector"
        }
    }
    sort(num.begin(),num.end());

    for (int i = 0; i < num.size(); i++) {
        newSum += to_string(num[i]); // Convert int to string
        if (i != num.size() - 1) {
            newSum += "+";
        }
    }
    cout<<newSum<<endl;
    
    return 0;
}
//in vector length means size() no length method in vector