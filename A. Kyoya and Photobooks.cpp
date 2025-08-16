#include <iostream>
#include <string>
#include <unordered_set>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    unordered_set<string> distinct;
    
    for (int i = 0; i <= s.size(); ++i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            string temp = s;
            temp.insert(i, 1, c);
            distinct.insert(temp);
        }
    }
    
    cout << distinct.size() << endl;
    return 0;
}
