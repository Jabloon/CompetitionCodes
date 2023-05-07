#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,k,add,answer=0;
    long long int temp,digits;
    cin>>n>>k;
    //n=7,k=7;
    int* hashtable=new int[k];
    vector<int> nums;
    for(int a=0;a<k;a++){
        hashtable[a]=0;
    }
    for(int zort=0;zort<n;zort++){
        cin>>add;
        nums.push_back(add);
        hashtable[add%k]++;
    }
    for(int i=0;i<n;i++){
        temp=nums[i];
        digits=1;
        while(temp){
            digits*=10;
            temp/=10;
        }
        temp=nums[i];
        for(int deneme=0;deneme<k;deneme++){
            if(((deneme*digits)%k)!=(temp%k)){
                if(((deneme*digits)%k)==(k-(temp%k))){
                    answer+=hashtable[deneme];
                    //cout<<"deneme: "<<deneme;
                }
            }
            else{
                if(((deneme*digits)%k)==(k-(temp%k))){
                    answer+=hashtable[deneme];
                    answer--;
                    //cout<<"deneme: "<<deneme;
                }
            }
        }
    }
    cout<<answer;
    return 0;
}
