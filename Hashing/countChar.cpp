#include <iostream>
using namespace std;

// int countChar(string str, char ch) {
//     int cnt = 0;
//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] == ch) {
//             cnt++;
//         }
//     }
//     return cnt;
// }

// int main() {
//     string str = "abcdabefc";
//     char ch = 'a';
//     cout << countChar(str, ch) << endl;
//     return 0;
// }


int main() {
    string str;
    cin>>str;


    //precomputing
    int hash[26]={0};
    for(int i=0;i<str.length();i++){
        hash[str[i]-'a']+=1;
    }


    int q;
    cin>>q;
    while(q--){
    char ch;
    cin>>ch;

    cout<<hash[ch-'a']<<endl;
    }


}