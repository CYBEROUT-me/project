#include <iostream>

using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        int ans = 0;
        int prev_pos = 0;
        cout << "\nWORD: " << word;
        for(int i = 0; i <= word.size() - 1; i++){
            cout << "\nCHECKING FOR: " << word[i];
            int reverse = prev_pos;
            while(word[i] != alphabet[prev_pos] && word[i] != alphabet[reverse]){
                cout << "\nALPHABET LETTER IS: " << alphabet[prev_pos] << " and " << alphabet[reverse];
                prev_pos++;
                reverse--;
                if(prev_pos > 25){
                    prev_pos = 0;
                }
                if(reverse < 0){
                    reverse = 25;
                }
                ans += 1;
                cout << "\nI: " << i;
                cout << "\nWE MOVE TO : " << alphabet[prev_pos] << " or " << alphabet[reverse] << " +1 " << "ans: " << ans;
            }
            if(word[i] == alphabet[reverse]){
                prev_pos = reverse;
            }
            cout << "\nWE FOUND THE LETTER " << word[i] << ":" << alphabet[prev_pos] << " or " << word[i] << ":" << alphabet[reverse] << " +1 " << "ans: " << ans;
            ans += 1;
        }
        cout << "\nANS: " << ans;
        return ans;
    }
};

int main(){
    Solution a;
    string w = "abc";
    a.minTimeToType(w);
}
