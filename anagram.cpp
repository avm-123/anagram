/*
 * Name: Aidan Militzer
 * Date Submitted:10/27/23
 * Assignment Name: Anagram Finer
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> loadWordlist(string filename);

/*Implement the following function:
  anagram() takes a word (string) and a wordlist of all words (vector of strings)
  and builds a dictionary/map where the key is a specific number of times each
  letter occurs in a word and the associated value is a vector of strings
  containing all words using those letters (anagrams).
  The value returned is a vector of strings containing the corresponding
  set of anagrams
*/
vector<string> anagram(string word, vector<string> wordlist);

int main()
{
    vector<string> words;
    vector<string> anagrams;
    string inputWord;
    words=loadWordlist("wordlist.txt");
    cout << "Find single-word anagrams for the following word: ";
    cin >> inputWord;
    anagrams = anagram(inputWord, words);
    for (int i=0; i<anagrams.size(); i++)
    {
        cout << anagrams[i] << endl;
    }
    return 0;
}

vector<string> loadWordlist(string filename)
{
    vector<string> words;
    ifstream inFile;
    string word;
    inFile.open(filename);
    if(inFile.is_open())
    {
        while(getline(inFile,word))
        {
            if(word.length() > 0)
            {
                words.push_back(word);
            }
        }
        inFile.close();
    }
    return words;
}

//Implement this function
vector<string> anagram(string word, vector<string> wordlist)
{
 /*    anagram() takes a word (string) and a wordlist of all words (vector of strings)
  and builds a dictionary/map where the key is a specific number of times each
  letter occurs in a word and the associated value is a vector of strings
  containing all words using those letters (anagrams).
  The value returned is a vector of strings containing the corresponding
  set of anagrams
  */
    unordered_map<string word, vector<string>> anagramDict;
    //populate the dictionary with words 
    
    for(const string& w : worlist ) {
     string representation = w;
        sort(reprentation.begin(), representation.end());
        
        //check if representation exists in the dictionary
        if(anagram.Dict.find(representation) == anaramDict.end()) {
            anagramDict[representation] = {w};
            
        }
        else
        {
            anagramDict[representation].push_back(w);
        }
        
    }
     // Find and return anagrams of the input word
    string wordRepresentation = word;
    sort(wordRepresentation.begin(), wordRepresentation.end()) 
        if(anagramDict.find(wordRepresentation) != anagramDict.end()) {
            return anagramDict[wordRepresentation];   
        }
        else
        {
            return {}; //return empty vector if no angram
        }
        
    
}    
    
    
    
    
    
    
    
    
    
