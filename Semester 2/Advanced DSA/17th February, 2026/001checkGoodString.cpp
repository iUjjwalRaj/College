// we define good string as a string which only contains vowels [a,e,i,o,u].

#include<iostream>
using namespace std;

bool checkGoodString(string s){
    // for(int i = 0; i < s.size(); i++){
    //     char ch = s[i];
    //     if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
    //         return false;
    //     }
    // }
    for(int x : s){
        if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u')
        {
            return false;
        }
        
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if(checkGoodString(s)){
        cout << "Good String" << endl;
    }
    else{
        cout << "Not a Good String" << endl;
    }
    return 0;
}