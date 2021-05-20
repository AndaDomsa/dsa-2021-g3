#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[101][101], i,j, N,M;
    A[1][1]=1;
    scanf("%d %d", &M,&N);

    for(i=1; i<=M;i++)
    {
        A[i][1]=1;
    }
    for(j=1; j<=N; j++)
    {
        A[1][j]=1;
    }


    for(i=2;i<=M; i++)
      for(j=2; j<=N; j++)
        A[i][j]=A[i][j-1]+A[i-1][j-1]+A[i-1][j];

    printf("Number of paths: %d", A[M][N]);


    return 0;
}

