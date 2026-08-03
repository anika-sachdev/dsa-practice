#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
void group_anagrams(string words[],int n)
{
    unordered_map<string,int> anagrams;
    for(int i=0;i<n;i++)
    {
        string sorted_word=words[i];
        sort(sorted_word.begin(),sorted_word.end());
        anagrams[sorted_word]++;
    }
    for(auto p:anagrams)
    {
        cout<<p.first<<" "<<p.second<<"words"<<endl;
    }
}
int main()
{
    string words[6]={"eat","tea","ate","bat","tab","cat"};
    group_anagrams(words,6);
}