#include <iostream>
#include <vector>
#define limit 5
#include "Heap.h"

using namespace std;
void arrange(int** table){
    table[0][0]=131,table[0][1]=673,table[0][2]=234,table[0][3]=103,table[0][4]=18;
    table[1][0]=201,table[1][1]=96,table[1][2]=342,table[1][3]=965,table[1][4]=150;
    table[2][0]=630,table[2][1]=803,table[2][2]=746,table[2][3]=422,table[2][4]=111;
    table[3][0]=537,table[3][1]=699,table[3][2]=497,table[3][3]=121,table[3][4]=956;
    table[4][0]=805,table[4][1]=732,table[4][2]=524,table[4][3]=37,table[4][4]=331;
}
void print(int** table){
    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){
            cout<<table[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int** table=new int*[limit];
    int** path=new int*[limit];
    for(int setter=0;setter<limit;setter++){
        table[setter]=new int[limit];
        path[setter]=new int[limit];
        for(int setter2=0;setter2<limit;setter2++){
            path[setter][setter2]=0;
        }
    }
    arrange(table);
    print(table);
    vector<int> zort;
    return 0;
}
