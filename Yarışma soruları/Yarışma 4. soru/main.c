#include <stdio.h>
#include <stdlib.h>

/*int comb(int a,int b){
    int up = a, down=b,down2=b,answer=1;
    while (down--){
        answer*=up;
    }
    while (down2--){
        answer/=down2;
    }
    return answer;
}*/
int comb(int a, int b){
    if (a < b*2){
        return comb(a,a-b);
    }
    if (b == 0){
        return 1;
    }
    else {
        return a*comb(a-1,b-1)/b;
    }
}
int main()
{
    int N,stick,way=1,tag=0,down=0,limit,a;
    scanf("%d",&N);
    a = N;
    limit=(N-1)/2;
    stick = comb(N,2);
    while (N--){
        printf("%d ",comb(stick,down));
        if (tag==limit){
            way=-1;
            if ((a+1)%2){
                down=stick-tag-1;
            }
            else {
                down=stick-tag;
            }
            limit=-1;
        }
        tag+=way,down++;
    }
    return 0;
}
