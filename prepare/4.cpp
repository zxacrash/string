#include <iostream>
#include <map>
using namespace std;
int main() {
map <string, int> mp;
int n;
cin >> n;
for (int i = 1; i <= n; i++) {
string s;
cin >> s;
mp[s] = i; // добавляем элементы: слово – его порядковый номер
}
map < string , int> :: iterator it;
// *** вывод контейнера
for (it = mp.begin(); it != mp.end(); it++) {
cout << "ключ" << it->first;
cout << ", значение " << it->second;
}
return 0;
}