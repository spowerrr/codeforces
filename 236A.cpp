#include<bits/stdc++.h>
using namespace std;

int main() {
    string username;
    int sum =0;
    cin >> username;
    unordered_set <char> chars;
    
    for ( char ch: username)
    {
        chars.insert(ch);
    }
    
    if (chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
// #include <iostream>       // Include the necessary header files
// #include <string>
// #include <unordered_set>
// #include <vector>
// #include <algorithm>

// using namespace std;      // Using the standard namespace

// int main() {              // Main function starts here
//     string username;      // Declare a string variable to store user input
//     cin >> username;      // Input a string from the user

//     // Declare an unordered_set to store unique characters
//     unordered_set<char> chars;
//     // Declare a vector to store sorted characters
//     vector<char> sortedChars;

//     // Loop through each character in the input string and insert into unordered_set
//     for (char ch : username) {
//         chars.insert(ch);  // Insert the character into the unordered_set
//     }

//     // Copy elements from unordered_set to vector
//     for (char ch : chars) {
//         sortedChars.push_back(ch);  // Copy each unique character to the vector
//     }

//     // Sort the vector using the sort function from the algorithm header
//     sort(sortedChars.begin(), sortedChars.end());

//     // Print sorted characters
//     cout << "Sorted characters: ";  // Print a message
//     for (char ch : sortedChars) {
//         cout << ch << " ";  // Print each sorted character followed by a space
//     }
//     cout << endl;  // Move to the next line

//     return 0;  // Return 0 to indicate successful program execution
// }
