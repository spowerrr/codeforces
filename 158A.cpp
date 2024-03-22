// #include<iostream>
// using namespace std;
// int main(){
//     int n,k,count=0;
//     cin>>n;
//     int arr[n];
//     cin>>k;
//     for (int i = 1; i <= n; i++)
//     {
//         cin>>arr[i];
//         if(arr[k]>= arr[k+1]&& arr[i]>0){
//             count=k+1;
//         }
//         else
//             count=arr[k+1];
//     }
//     cout<<count<<endl;
    
    
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int kth_score = arr[k - 1];  // k-th place finisher's score
    for (int i = 0; i < n; i++) {
        if (arr[i] >= kth_score && arr[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}