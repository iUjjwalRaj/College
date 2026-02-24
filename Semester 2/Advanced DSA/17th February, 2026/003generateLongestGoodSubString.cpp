// we have to find longest good sub string. a good string is a string which only contains vowels [a,e,i,o,u].

#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int maxLength = 0;
    int currentLength = 0;
    string longestGoodSubString;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            currentLength++;
            longestGoodSubString.push_back(ch);
        }
        else{
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
            longestGoodSubString = "";
        }
    }
    maxLength = max(maxLength, currentLength);
    cout << maxLength << endl;
    cout << longestGoodSubString << endl;
    return 0;
}