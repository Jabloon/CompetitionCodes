#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int i,j,min,max,answer=0,temp;
    for(i=0;(i+1)<prices.size();i++){
        min=prices[i];
        max=prices[i];
        while(((i+1)<prices.size())&&(prices[i]>prices[i+1])){
            prices.erase(prices.begin()+i);
            min=prices[i];
            max=prices[i];
        }

        while(((i+1)<prices.size())&&(prices[i]<prices[i+1])){
            if((prices[i+1]-prices[i])<answer){
                temp=i+1;
                prices.erase(prices.begin()+temp);
            }
            else break;
        }

        for(j=i+1;j<prices.size();j++){
            if(prices[j]>max){
                max=prices[j];
            }
        }
        if((max-min)>answer) answer=max-min;
    }
    return answer;
}

int main()
{
    vector<int> prices={7,1,5,3,6,4};
    int result=maxProfit(prices);
    for(int i=0;i<prices.size();i++){
        cout<<i<<':'<<prices[i]<<' ';
    }
    cout<<'\n'<<"result:"<<result<<endl;
    return 0;
}
