#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> ratings(n);
    vector<int> sorted(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> ratings[i];
        sorted[i] = ratings[i];
    }
    
    sort(sorted.begin(), sorted.end(), greater<int>());
    
    unordered_map<int, int> rank_map;
    for (int i = 0; i < n; ++i) {
        if (rank_map.find(sorted[i]) == rank_map.end()) {
            rank_map[sorted[i]] = i + 1;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << rank_map[ratings[i]] << " ";
    }
    
    return 0;
}
