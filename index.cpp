#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string word){
    int string_len = word.length();
    bool flag = true;
    
    for(int i = 0; i < (string_len/2); i++){
        if(word[i] != word[ string_len - i-1]){
            flag = false;
            break;
        }

    }
    return flag;
}
int main(){
    cout << "Enter the word = ";
    string word;
    cin >> word;
    cout << endl;
    bool result = checkPalindrome(word);
    result?cout<<"it is palindrome":cout<<"it is not palindrome";
    cin.ignore();
    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}