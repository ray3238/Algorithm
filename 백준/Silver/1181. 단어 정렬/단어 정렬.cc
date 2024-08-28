#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main() {
    int index = 0;
    int count = 0;

    cin >> count;

    string word;
    set<string> wordSet;

    for (int i = 0 ; i < count ; i++) {
        cin >> word;
        wordSet.insert(word);
    }

    vector<pair<int, string>> vec(wordSet.size());

    for (set<string>::iterator iter = wordSet.begin(); iter != wordSet.end(); iter++, index++) {
        vec[index].second = *iter;
        vec[index].first = vec[index].second.length();
    }

    sort(vec.begin(), vec.end());

    for (int i = 0 ; i < vec.size() ; i++) {
        cout << vec[i].second << "\n";
    }

    return 0;
}