#include <stdio.h>

void checkagain(int grid[N][M],x,y,point){
   // bu fonksiyon recursive olarak check fonksiyonunun
   // ayn�s�n� yapacak puan kay�tl� kalacak artacak.

   // sa�� kontol ediyor.
    if (x<N-1 && !savegrid[x+1][y]){
        if (grid[x+1][y] - grid[x][y] == 1){
            point++;
            savegrid[x+1][y]=1;
            checkagain(grid[N][M],x+1,y,point);
        }
    }
   // a�a��y� kontrol ediyor.
    if (y<M-1 && !savegrid[x][y+1]){
        if (grid[x][y+1] - grid[x][y] == 1){
            point++;
            savegrid[x][y+1]=1;
            checkagain(grid[N][M],x,y+1,point);
        }
    }
   // solu kontrol ediyor.
    if (x>0 && !savegrid[x-1][y]){
        if (grid[x][y] - grid[x-1][y] == 1){
            point++;
            savegrid[x-1][y]=1;
            checkagain(grid[N][M],x-1,y,point);
        }
    }
   // yukar�y� kontrol ediyor.
   if (y>0 && !savegrid[x][y-1]){
        if (grid[x][y] - grid[x][y-1] == 1){
            point++;
            savegrid[x][y-1]=1;
            checkagain(grid[N][M],x,y-1,point);
        }
    }
}
int check(int grid[N][M], int x, int y){
    // bu fonksiyonun t�m gridi almas� laz�m.
    // savegridi almas� nas�l sa�lan�r.
    int point = 0;
    // sa�� kontrol ediyor.
    if (x<N-1 && !savegrid[x+1][y]){
        if (grid[x+1][y] - grid[x][y] == 1){
            ++point++;
            savegrid[x+1][y]=1;
            checkagain(grid[N][M],x+1,y,point);
        }
    }
    // a�a��y� kontrol ediyor.
    if (y<M-1 && !savegrid[x][y+1]){
        if (grid[x][y+1] - grid[x][y] == 1){
            ++point++;
            savegrid[x][y+1]=1;
            checkagain(grid[N][M],x,y+1,point);
        }
    }
    // solu kontrol ediyor.
    if (x>0 && !savegrid[x-1][y]){
        if (grid[x][y] - grid[x-1][y] == 1){
            ++point++;
            savegrid[x-1][y]=1;
            checkagain(grid[N][M],x-1,y,point);
        }
    }
    // yukar�y� kontrol ediyor.
    if (y>0 && !savegrid[x][y-1]){
        if (grid[x][y] - grid[x][y-1] == 1){
            ++point++;
            savegrid[x][y-1]=1;
            checkagain(grid[N][M],x,y-1,point);
        }
    }
    return point;
}
int main()
{
    int a,b,N,M,point=0,answer=0;
    scanf("%d %d",&N,&M);
    int grid[N][M],savegrid[N][M]=0;
    for (a=0;a<N;a++){
        for (b=0;b<M;b++){
            scanf("%d",&grid[a][b]);
        }
    }
    for (a=0;a<N;a++){
        for (b=0;b<M;b++){
            savegrid[a][b]=1;
            point = check(grid[N][M],a,b);
            if (answer < point){
                answer = point;
            }
        }
    }
    printf("%d",N*M-answer);
    return 0;
}
