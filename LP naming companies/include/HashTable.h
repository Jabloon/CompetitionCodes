#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <string>
#include <vector>

using namespace std;

class HashTable
{
    public:
        HashTable();
        ~HashTable();

    private:
        vector<string> elements;
        int cnt;
        //int hashcode(string str);
        //void rehash();
};

#endif // HASHTABLE_H
