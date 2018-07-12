#include <bits/stdc++.h>
using namespace std;
 
#define ROW 4
#define COL 5
 
int kadane(int* arr, int* start, int* finish, int n){
    int sum = 0, minSum = INT_MAX, i;
    *finish = -1;
    int local_start = 0;
    for (i = 0; i < n; ++i) {
        sum += arr[i];
        if (sum > 0) {
            sum = 0;
            local_start = i + 1;
        } else if (sum < minSum) {
            minSum = sum;
            *start = local_start;
            *finish = i;
        }
    }
 
    if (*finish != -1)
        return minSum;
 
    minSum = arr[0];
    *start = *finish = 0;
 
    for (i = 1; i < n; i++) {
        if (arr[i] < minSum) {
            minSum = arr[i];
            *start = *finish = i;
        }
    }
    return minSum;
}
 
void findMinSumSubmatrix(int M[][COL])
{
    int minSum = INT_MAX, finalLeft, finalRight, finalTop, finalBottom;
    int left, right, i;
    int temp[ROW], sum, start, finish;
    for (left = 0; left < COL; ++left) {
        printf("left: %d\n", left);
        memset(temp, 0, sizeof(temp));
        for (right = left; right < COL; ++right) {
            printf("\tright: %d\n", right);
            printf("\ttemp elements: ");
            for (i = 0; i < ROW; ++i){
                printf("%d ", temp[i]);
                temp[i] += M[i][right];
            }
            sum = kadane(temp, &start, &finish, ROW);
            printf("\n\t\tsum: %d\n", sum);
            if (sum < minSum) {
                minSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
            printf("\t\tminSum: %d; finalLeft: %d; finalRight: %d; finalTop: %d; finalBottom: %d;\n\n",
                                minSum, finalLeft, finalRight, finalTop, finalBottom);
        }
    }
 
    cout << "(Top, Left): (" << finalTop << ", "
            << finalLeft << ")\n";
    cout << "(Bottom, Right): (" << finalBottom << ", "
         << finalRight << ")\n";
    cout << "Minimum sum: " << minSum;
}
 
int main()
{
    int M[ROW][COL] = { { 1, 2, -1, -4, -20 },
                        { -8, -3, 4, 2, 1 },
                        { 3, 8, 10, 1, 3 },
                        { -4, -1, 1, 7, -6 } };
                        
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("\t%d", M[i][j]);
        }
        cout<<endl;
    }
    cout<<endl;
    findMinSumSubmatrix(M);
    return 0;
}
