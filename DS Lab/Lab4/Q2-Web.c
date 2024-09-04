#include <stdio.h>

// Define a struct to represent a sparse matrix element
struct SparseElement
{
        int row;
        int col;
        int value;
};

// Function to perform fast transpose on a sparse matrix
void fastTranspose(struct SparseElement A[], struct SparseElement B[], int numRows, int numCols) 
{
        int numTerms = A[0].value; // Number of non-zero elements
        int total[numCols], index[numCols];

        // Initialize arrays
        for (int i = 0; i < numCols; i++) 
        {
                total[i] = 0;
                index[i] = 0;
        }

        // Calculate the number of non-zero elements in each column
        for (int i = 1; i <= numTerms; i++) 
        {
                total[A[i].col]++;
        }

        // Calculate the starting position of each column in the B matrix
        index[0] = 1;
        for (int i = 1; i < numCols; i++) 
        {
                index[i] = index[i - 1] + total[i - 1];
        }

        //Initialize the meta data of B 
        B[0].row = A[0].col;
        B[0].col = A[0].row;
        B[0].value = A[0].value;

        // Perform the transpose
        for (int i = 1; i <= numTerms; i++) 
        {
                int j = index[A[i].col]++;
                B[j].row = A[i].col;
                B[j].col = A[i].row;
                B[j].value = A[i].value;
        }

        // Set the number of non-zero elements in the B matrix
        // B[0].value = numTerms;
}

int main() {
        int numRows, numCols, numNonZero;

        // Input dimensions and non-zero elements
        printf("Enter the number of rows: ");
        scanf("%d", & numRows);
        printf("Enter the number of columns: ");
        scanf("%d", & numCols);
        printf("Enter the number of non-zero elements: ");
        scanf("%d", & numNonZero);

        // Create arrays for the A and B matrices
        struct SparseElement A[numNonZero + 1]; // +1 for metadata
        struct SparseElement B[numNonZero + 1]; // +1 for metadata

        // Input non-zero elements
        printf("Enter non-zero elements (row col value):\n");
        for (int i = 1; i <= numNonZero; i++) 
        {
                scanf("%d %d %d", & A[i].row, & A[i].col, & A[i].value);
        }

        // Set metadata for both matrices
        A[0].row = numRows;
        A[0].col = numCols;
        A[0].value = numNonZero;

        // Perform fast transpose
        fastTranspose(A, B, numRows, numCols);

        // Display the A and B matrices
        printf("\nA Sparse Matrix:\n");
        for (int i = 0; i <= numNonZero; i++)
        {
                printf("%d %d %d\n", A[i].row, A[i].col, A[i].value);
        }

        printf("\nB Sparse Matrix:\n");
        for (int i = 0; i <= numNonZero; i++) 
        {
                printf("%d %d %d\n", B[i].row, B[i].col, B[i].value);
        }

        return 0;
}