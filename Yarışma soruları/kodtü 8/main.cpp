#include <iostream>

using namespace std;
int foo(int n){
    int answer=0;
    for(int x=1;x<=(n*n);x++){
        if(!((n*x)%(n+x))){
            answer++;
        }
    }
    return answer;
}
int main(){
    //int answer=0,n;
    //cin >> n;
    //for(int i=1;i<=n;i++){
    //    answer+=foo(i);
    //}
    //cout<<answer;
    int result;
    for(int j=1;j<100;j++){
        result=0;
        for(int i=1;i<=j;i++){
            result+=foo(i);
        }
        cout<<j<<':'<<result<<endl;
    }

    return 0;
}
