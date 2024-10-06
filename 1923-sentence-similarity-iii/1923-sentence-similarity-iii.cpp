#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
 bool areSentencesSimilar(string sentence1, string sentence2) {
        // Split both sentences into words
        vector<string> words1 = split(sentence1);
        vector<string> words2 = split(sentence2);
        
        int i = 0, j = 0;
        int n1 = words1.size(), n2 = words2.size();
        
        // Compare words from the beginning
        while (i < n1 && i < n2 && words1[i] == words2[i]) {
            i++;
        }
        
        // Compare words from the end
        while (j < n1 - i && j < n2 - i && words1[n1 - 1 - j] == words2[n2 - 1 - j]) {
            j++;
        }
        
        // If all remaining words can be made similar, return true
        return i + j == min(n1, n2);
    }
    
    // Helper function to split a sentence into words
    vector<string> split(const string& sentence) {
        vector<string> words;
        istringstream stream(sentence);
        string word;
        while (stream >> word) {
            words.push_back(word);
        }
        return words;
    }
};

