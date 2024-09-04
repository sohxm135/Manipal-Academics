#include<stdio.h>
struct sparse
{
    int rows,cols,value;
} smat[];

void main(){
    int i,j,k=1,c=1,m,n;
    printf("Enter size of matrix m x n: ");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]!=0){
                 c++;
                smat[k].rows=i;
                smat[k].cols=j;
                smat[k].value=mat[i][j];
                k++;
               
            }
        };
    smat[0].rows=m;
    smat[0].cols=n;
    smat[0].value=c;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<c;i++) 
        printf("\n%d %d %d",smat[i].rows,smat[i].cols,smat[i].value);

}