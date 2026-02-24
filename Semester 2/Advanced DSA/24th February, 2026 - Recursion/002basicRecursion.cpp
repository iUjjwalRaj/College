#include<iostream>
using namespace std;

void lumine(int count){
    if(count == 10){
        return;
    }
    cout << "Lumine is Abyss Princess and twin sister of Aether in Genshin Impact" << endl;
    lumine(++count);
}
int main(){

    lumine(1);

    return 0;
}