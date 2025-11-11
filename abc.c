#include <stdio.h>
int main(void){
int matmul(int a, int b){
    c = a*b;
    return c;
}
int matadd(a,b){
    return a+b;
}
int i = 0, j = 0;
int mat1[3][3];
for(i = 0; i<3; i++){
for(j = 0; j<3; j++){   
    printf("Enter the value of entry in mat1[%d][%d]: ", i,j);
    scanf("%d", &mat1[i][j]);
}}
int mat2[3][3];
for(i = 0, j=0; i<3; i++){
for(j = 0; j<3; j++){ 
    printf("Enter the value of entry in mat2[%d][%d]: ", i,j);  
    scanf("%d", &mat2[i][j]);
}}
int mat3[3][3];
for(i = 0, j=0; i<3; i++){
for(j = 0; j<3; j++){ 
mat3[i][j] = matmul(mat1[i][j], mat2[i][j]);
}}
for(i = 0, j=0; i<3; i++){
for(j = 0; j<3; j++){
    printf("%d", mat3[i][j]); 
}}
}





