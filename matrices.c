/*
 *  Math Tools in C 
 *      MATRICES
 *
 *  https://afaan.dev/math-tools-in-c 
 * 
 *  (c) Afaan Bilal (https://afaan.dev)
 *
 */

/*
 * Functions:
 *		- Determinant
 *		- Transpose
 *		- Equality
 *		- Addition
 *		- Subtraction
 *		- Multiplication
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define false 0
#define true  1

typedef int bool;

/// <signature>
/// <summary> Matrix structure: int m, n; float ** E; </summary>
/// </signature>
typedef struct
{
	int m, n;
	float ** E;
} Matrix;

/// <signature>
/// <summary> Allocates memory for the matrix. </summary>
/// <param name="M" type="Matrix *"> Matrix to be allocated </param>
/// <param name="m" type="int"> Number of rows </param>
/// <param name="n" type="int"> Number of columns </param>
/// <returns type="void"> Nothing </returns> 
/// </signature>
void AllocateM(Matrix *M, int m, int n)
{
    int i;

    M->m = m;
    M->n = n;
    M->E = malloc(m * sizeof(float)); //new double*[m];

    for (i = 0; i < m; i++)
        M->E[i] = malloc(n * sizeof(float)); //new double[n];
}

/// <signature>
/// <summary> Prints the given matrix. </summary>
/// <param name="A" type="Matrix"> The given matrix </param>
/// <returns type="void"> Nothing </returns> 
/// </signature>
void PrintMatrix(Matrix A)
{
    int i, j;

    for (i = 0; i < A.m; i++) 
    {
        for (j = 0; j < A.n; j++)
            printf("%.1f\t", A.E[i][j]);
        printf("\n");
    }
}

/// <signature>
/// <summary> Inputs the given matrix. </summary>
/// <param name="A" type="Matrix *"> The given matrix </param>
/// <returns type="void"> Nothing </returns> 
/// </signature>
void InputMatrix(Matrix *A)
{
    int i, j, m, n;
    printf("\nEnter the order: (m n) : ");
    scanf("%i %i", &m, &n);

    AllocateM(A, m, n);

    printf("\nEnter the elements: \n");
    for (i = 0; i < A->m; i++)
        for (j = 0; j < A->n; j++)
            scanf("%f", &(A->E[i][j]));
}

/// <signature>
/// <summary> Checks given matrices for equality. </summary>
/// <param name="A" type="Matrix"> The first matrix </param>
/// <param name="B" type="Matrix"> The second matrix </param>
/// <returns type="bool"> true if equal, otherwise false </returns> 
/// </signature>
bool areEqual(Matrix A, Matrix B)
{
    int i, j;

    if (A.m != B.m || A.n != B.n)
        return false;

    for (i = 0; i < A.m; i++)
        for (j = 0; j < A.n; j++)
            if (A.E[i][j] != B.E[i][j])
                return false;

    return true;
}

/// <signature>
/// <summary> Adds given matrices. </summary>
/// <param name="A" type="Matrix"> The first matrix </param>
/// <param name="B" type="Matrix"> The second matrix </param>
/// <returns type="Matrix"> The resultant matrix </returns> 
/// </signature>
Matrix Add(Matrix A, Matrix B)
{
    int i, j;
    Matrix R;

    if (A.m != B.m || A.n != B.n)
    {
        Matrix x;
        x.m = x.n = 0;
        return x;
    }

    AllocateM(&R, A.m, A.n);

    for (i = 0; i < A.m; i++)
        for (j = 0; j < A.n; j++)
            R.E[i][j] = A.E[i][j] + B.E[i][j];

    return R;
}

/// <signature>
/// <summary> Subtracts given matrices. </summary>
/// <param name="A" type="Matrix"> The first matrix </param>
/// <param name="B" type="Matrix"> The second matrix </param>
/// <returns type="Matrix"> The resultant matrix </returns> 
/// </signature>
Matrix Subtract(Matrix A, Matrix B)
{
    int i, j;
    Matrix R;

    if (A.m != B.m || A.n != B.n)
    {
        Matrix x;
        x.m = x.n = 0;
        return x;
    }

    AllocateM(&R, A.m, A.n);

    for (i = 0; i < A.m; i++)
        for (j = 0; j < A.n; j++)
            R.E[i][j] = A.E[i][j] - B.E[i][j];

    return R;
}

/// <signature>
/// <summary> Multiplies given matrices. </summary>
/// <param name="A" type="Matrix"> The first matrix </param>
/// <param name="B" type="Matrix"> The second matrix </param>
/// <returns type="Matrix"> The resultant matrix </returns> 
/// </signature>
Matrix Multiply(Matrix A, Matrix B)
{
    Matrix R;
    int i, j, k;

    if (A.n != B.m)
    {
        Matrix x;
        x.m = x.n = 0;
        return x;
    }

    AllocateM(&R, A.m, B.n);

    for (i = 0; i < R.m; i++)
        for (j = 0; j < R.n; j++)
            R.E[i][j] = 0;

    for (i = 0; i < R.m; i++)
        for (j = 0; j < R.n; j++)
            for (k = 0; k < A.n; k++)
                R.E[i][j] += A.E[i][k] * B.E[k][j];

    return R;
}

/// <signature>
/// <summary> Multiplies given matrix with a number. </summary>
/// <param name="A" type="Matrix"> The given matrix </param>
/// <param name="k" type="float"> The number </param>
/// <returns type="Matrix"> The resultant matrix </returns> 
/// </signature>
Matrix MultiplyK(Matrix A, float k)
{
    Matrix R;
    int i, j;

    AllocateM(&R, A.m, A.n);

    for (i = 0; i < R.m; i++)
        for (j = 0; j < R.n; j++)
            R.E[i][j] = k * A.E[i][j];

    return R;
}

/// <signature>
/// <summary> Finds the transpose of given matrix. </summary>
/// <param name="A" type="Matrix"> The given matrix </param>
/// <returns type="Matrix"> The resultant matrix </returns> 
/// </signature>
Matrix Transpose(Matrix A)
{
    Matrix R;
    int i, j;

    AllocateM(&R, A.n, A.m);

    for (i = 0; i < R.m; i++)
        for (j = 0; j < R.n; j++)
            R.E[i][j] = A.E[j][i];

    return R;
}

/// <signature>
/// <summary> Finds the determinant of given matrix. </summary>
/// <param name="A" type="Matrix"> The given matrix </param>
/// <param name="n" type="int"> The order of the given matrix </param>
/// <returns type="float"> The value of determinant </returns> 
/// </signature>
float Determinant(Matrix A, int n)
{
    float det = 0;
    int p, h, k, i, j;
    Matrix temp;

    if (A.m != A.n)
        return -2.718;

    AllocateM(&temp, n, n);

    if (n == 1)
        return A.E[0][0];
    else if (n == 2)
    {
        det = (A.E[0][0] * A.E[1][1]) - (A.E[1][0] * A.E[0][1]);
        return det;
    }
    else
    {
        for (p = 0; p < n; p++)
        {
            h = 0; k = 0;
            for (i = 1; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (j == p)
                        continue;
                    temp.E[h][k] = A.E[i][j];
                    k++;
                    if (k == n - 1)
                    {
                        h++;
                        k = 0; 
                    }
                }
            }

            det += A.E[0][p] * pow(-1, p) * Determinant(temp, n - 1);
        }

        return det;
    }
}


int main()
{
    printf("Matrix M1: ");
    Matrix M1;
    InputMatrix(&M1);

    printf("\nMatrix M2: ");
    Matrix M2;
    InputMatrix(&M2);

    printf("\nDeterminant (M1): ");
    float d1 = Determinant(M1, M1.m);
    if (M1.m != M1.n)
        printf("M1 is not a square matrix.\n");
    else if (d1 == 0)
        printf("M1 is a singluar matrix (determinant equal to zero).\n");
    else
        printf("M1 is a non-singluar matrix with determinant equal to %f \n", d1);

    printf("\nDeterminant (M2): ");
    float d2 = Determinant(M2, M2.m);
    if (M2.m != M2.n)
        printf("M2 is not a square matrix.\n");
    else if (d2 == 0)
        printf("M2 is a singluar matrix (determinant equal to zero).\n");
    else
        printf("M2 is a non-singluar matrix with determinant equal to %f \n", d2);

    printf("\nMultiplication (M1 * k) where k = 5: \n");
    PrintMatrix(MultiplyK(M1, 5));

    printf("\nTranspose (M1): \n");
    PrintMatrix(Transpose(M1));

    printf("\nTranspose (M2): \n");
    PrintMatrix(Transpose(M2));

    printf("\nAddition (M1 + M2): \n");
    Matrix Sum = Add(M1, M2);
    if (Sum.m == 0)
        printf(" Matrices M1 and M2 don't have the same order. \n");
    else {
        PrintMatrix(Sum);
    }

    printf("\nSubtraction (M1 - M2): \n");
    Matrix Dif = Subtract(M1, M2);
    if (Dif.m == 0)
        printf(" Matrices M1 and M2 don't have the same order. \n");
    else {
        PrintMatrix(Dif);
    }

    printf("\nMultiplication (M1 x M2): \n");
    Matrix P = Multiply(M1, M2);
    if (P.m == 0)
        printf(" Multiplication of matrices M1 and M2 is not defined.\n(M1.n should be equal to M2.m)\n");
    else {
        PrintMatrix(P);
    }

    getch();
    return 0;
}
