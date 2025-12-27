#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> doramaEpisodes;
    
    for (int i = 0; i < n; i++) {
        string name;
        int episodes;
        cin >> name >> episodes;
        
        doramaEpisodes[name] += episodes;
    }
    
    for (auto& entry : doramaEpisodes) {
        cout << entry.first << " " << entry.second << endl;
    }
    
    return 0;
}