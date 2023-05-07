#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,i,count=0;
    scanf("%d",&length);
    char text[length+1];
    for (i=0;i<=length;i++){
        scanf("%c",&text[i]);
    }
    for (i=0;i<=length;i++){
        if (text[i] == '('){
            if (!count){
                printf("...");
            }
            count++;
        }
        if (text[i] == ')'){
            count--;
        }
        else {
            if (!count){
            printf("%c",text[i]);
        }
        else {
            continue;
        }
        }
    }
    return 0;
}
