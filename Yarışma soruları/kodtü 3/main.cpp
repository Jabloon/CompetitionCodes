#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    vector<vector<int>> hashtable;
    vector<int> order;
    bool tagi,tagj;
    for(int zort=0;zort<10;zort++){
        hashtable.push_back(order);
    }
    for (int a=0;a<n;a++){
        cin>>i>>j;
        tagi=false;
        tagj=false;
        for(int checki=0;checki<hashtable[i%10].size();checki++){
            if(hashtable[i%10][checki]==i){
                tagi=true;
                break;
            }
        }
        for(int checkj=0;checkj<hashtable[j%10].size();checkj++){
            if(hashtable[j%10][checkj]==j){
                tagj=true;
                break;
            }
        }
        if(tagi&&tagj){
            int h,g;
            for(h=0;;h++){
                if(order[h]==j) break;
                if(order[h]==i){
                    //swap
                    for(g=h+1;;g++){
                        if(order[g]==j) break;
                    }
                    int temp=order[g];
                    order[g]=order[h];
                    order[h]=temp;
                    break;
                }
            }
        }
        if(tagi&&!tagj){
            order.insert(order.begin(),j);
            hashtable[j%10].push_back(j);
        }
        if(!tagi&&tagj){
            order.push_back(i);
            hashtable[i%10].push_back(i);
        }
        if(!tagi&&!tagj){
            order.insert(order.begin(),j);
            order.push_back(i);
            hashtable[i%10].push_back(i);
            hashtable[j%10].push_back(j);
        }
    }
    cout<<order.size()<<endl;
    for(int lol=0;lol<order.size();lol++){
        cout<<order[lol]<<' ';
    }
    return 0;
}
