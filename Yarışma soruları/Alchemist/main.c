#include <stdio.h>

int main()
{
    long int A,B,C,count=0;
    scanf("%ld %ld %ld",&A,&B,&C);
    while ((A || B) && (A || C) && (B || C)){
        if ((C < B && B < A) || (C < A && A < B)){
            A--,B--,C++,count++;
        }
        if ((B < C && C < A)||(B < A && A < C)){
            A--,C--,B++,count++;
        }
        if ((A < B && B < C)||(A < C && C < B)){
            B--,C--,A++,count++;
        }
        if (A == B || A == C){
            count+=A;
            break;
        }
        else if (B == C){
            count+=B;
            break;
        }
    }
    printf("%ld",count);
    return 0;
}
