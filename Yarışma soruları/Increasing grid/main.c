#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,N,M,point,answer=0;
    scanf("%d %d",&N,&M);
    int grid[N][M],savegrid[N][M]=0;
    for (a=0;a<N;a++){
        for (b=0;b<M;b++){
            scanf("%d",&grid[a][b]);
        }
    }
    for (a=0;a<N;a++){
        for (b=0;b<M;b++){
            point=0;
            savegrid[a][b]=1;
            for (c=0;c<N;c++){
                for (d=0;c<M;c++){
                    if (!savegrid[c][d] && grid[c][d]-grid[a][b]==c+d-a-b){
                        point++;
                        savegrid[c][d]=1;
                    }
                }
            }
            if (answer<point){
                answer=point;
            }
        }
    }
    printf("%d",N*M-answer);
    return 0;
}
