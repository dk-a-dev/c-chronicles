#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int max(int a, int b) {
    return (a > b)? a : b;
}

char* lcs(char *X, char *Y, int m, int n) {
    int **L = (int **)malloc((m+1) * sizeof(int *));
    for (int i = 0; i <= m; i++) {
        L[i] = (int *)malloc((n+1) * sizeof(int));
    }
    int i, j;
    for (i=0; i<=m; i++) {
        for (j=0; j<=n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    // Print the LCS table
    for (i=0; i<=m; i++) {
        for (j=0; j<=n; j++) {
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }

    int index = L[m][n];
    char* lcs = (char*)malloc((index+1)*sizeof(char));
    lcs[index] = '\0';
    i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs[index-1] = X[i-1]; 
            i--; j--; index--;   
        }
        else if (L[i-1][j] > L[i][j-1])
            i--;
        else
            j--;
    }
    return lcs;
}

int main() {
    char X1[] = "ABCBDAB";
    char Y1[] = "BDCABA";
    int m1 = strlen(X1);
    int n1 = strlen(Y1);
    char* lcs_str1 = lcs(X1, Y1, m1, n1);
    printf("LCS of %s and %s is %s\n", X1, Y1, lcs_str1);
    free(lcs_str1);
    printf("\n");
    char X2[] = "abaaba";
    char Y2[] = "babbab";
    int m2 = strlen(X2);
    int n2 = strlen(Y2);
    char* lcs_str2 = lcs(X2, Y2, m2, n2);
    printf("LCS of %s and %s is %s\n", X2, Y2, lcs_str2);
    free(lcs_str2);

    return 0;
}