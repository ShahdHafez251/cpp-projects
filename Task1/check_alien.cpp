#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool isAlienSorted(vector<string>& words, string order) {
    // Create a map to store the index of each character in the alien language order
    unordered_map<char, int> orderMap;
    for (int i = 0; i < order.size(); ++i) {
        orderMap[order[i]] = i;
    }
    
    // Lambda function to convert a word into its corresponding index-based list
    auto wordToOrder = [&](const string& word) -> vector<int> {
        vector<int> indices;
        for (char ch : word) {
            indices.push_back(orderMap[ch]);
        }
        return indices;
    };

    // Check if each word is lexicographically less than or equal to the next word
    for (int i = 0; i < words.size() - 1; ++i) {
        if (wordToOrder(words[i]) > wordToOrder(words[i + 1])) {
            return false;
        }
    }

    return true;
}

int main() {
    // Take input for the alien order string
    string order;
    cout << "Enter the alien language order: ";
    cin >> order;

    // Take input for words (user enters 'end' to stop)
    vector<string> words;
    string word;
    cout << "Enter words (type 'end' to stop): " << endl;
    while (true) {
        cin >> word;
        if (word == "end") break;  // Stop input if 'end' is entered
        words.push_back(word);
    }

    // Check if the words are sorted according to the alien language order
    if (isAlienSorted(words, order)) {
        cout << "The words are sorted lexicographically in the alien language." << endl;
    } else {
        cout << "The words are not sorted lexicographically in the alien language." << endl;
    }

    return 0;
}
