#include "HashTable.h"
#include <string>
#include <vector>

using namespace std;

HashTable::HashTable()
{
    //ctor
    cnt=0;
}

HashTable::~HashTable()
{
    //dtor
    elements.clear();
    cnt=0;
}
