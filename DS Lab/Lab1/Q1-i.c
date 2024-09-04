//Linear Search
#include <stdio.h>
#include <stdlib.h>
int LinearSerach(int n,int len, int arr[]);
int main()
{   int len,arr[100],n,search;
    printf("Enter Array length: ");
    scanf("%d",&len);

    printf("Enter Array elements: \n");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number you would like to search: \n");
    scanf("%d",&n);

    printf("array[%d]",LinearSerach(n,len,arr));
    return 0;
}

int LinearSerach(int n,int len, int arr[]){
    for(int i=0;i<len;i++)
        if(arr[i]==n) return i;
    return -1;
}
