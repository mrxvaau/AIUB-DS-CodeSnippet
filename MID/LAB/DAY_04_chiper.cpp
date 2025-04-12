#include<iostream>
#include<string>

using namespace std;

string encode(string s , int j){
    for(int i = j; i < s.size(); i += j + 1){
        if(s[i] != ' '){
            s[i] = s[i] + 2;
        }
    }
    return s;
}

int main(){
    int skip;
    string chiper;
    cout << "Enter the number to skip : ";
    cin >> skip;
    cin.ignore();
    cout << "Enter the Chiper Text : ";
    getline(cin, chiper);
    cout<<encode(chiper,skip)<<endl;
}
