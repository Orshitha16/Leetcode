bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int i,j;
    for(i=0;i<matrixSize;i++)
    for(j=0;j< *matrixColSize;j++)
    if(matrix[i][j]==target)
    return 1;
    return 0;
}