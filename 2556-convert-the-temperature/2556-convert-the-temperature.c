/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
     double *ans;
     int k;
     ans=(double*)malloc(20*sizeof(double));
     k=0;
     ans[k]=celsius+273.15;
     k++;
     ans[k]=celsius*1.80+32.00;
     k++;
     
     *returnSize=k;
     return ans;
}