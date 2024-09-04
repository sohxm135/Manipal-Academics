//Input 2 matrix A and B
// The 3rd matrix C[i][j] is max of (A(i,j),B(i,j))
#include <stdio.h>
#define MAX 100

int main(){
    int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
    int i,j,m,n;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d %d",&m,&n);   
    printf("Enter the elements of matrix A\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
            }
    }
    printf("Enter the elements of matrix B\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&B[i][j]);
            C[i][j] = A[i][j]  > B[i][j] ? A[i][j] : B[i][j];
        }
    }
    printf("The matrix C is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

                        
}