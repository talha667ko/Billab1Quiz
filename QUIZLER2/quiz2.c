#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//  TALHA KORKMAZ 230202010

void yazdir(int m[][20], int N)
{
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

void sorting(int m[][20], int N)
{
    int rplcmt;

    for(int pass = 1; pass < N*N; pass++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N-1; j++){
                if(i % 2 != 0){
                    if(m[i][j] > m[i][j+1]){
                    rplcmt = m[i][j];
                    m[i][j] = m[i][j+1];
                    m[i][j+1] = rplcmt;
                    }
                }
                else{
                    if(m[i][j] < m[i][j+1]){
                    rplcmt = m[i][j];
                    m[i][j] = m[i][j+1];
                    m[i][j+1] = rplcmt;
                    }
                }
            }
        }
    }

    yazdir(m, N);

}

void elemanUret(int m[][20], int N)
{
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            m[i][j] = rand() % 11;
        }
    }

    printf("\nOrijinal matris:\n");
    yazdir(m, N);

    printf("\nSiralanmis matris:\n");
    sorting(m, N);
}

int main()
{
    srand(time(NULL));
    int N;
    printf("Matris boyunu N giriniz (maksimum 20): ");
    scanf("%d", &N);

    int matris[20][20] = { 0 };
    elemanUret(matris, N);

    return 0;
}
