//sparse matrix
//a matrix where zero are more than the elment 
//so we stroe it diffrently like we only store value with number 
// bt it make their assesing difficult

#include <iostream>
using namespace std;


void print_compact(int arr[3][6]);

void val_compact(int arr[3][6],int mat[3][6]){
int k =0;
for(int i = 0;i<3;i++){
    for(int j = 0 ; j<6;j++){
        if(mat[i][j]!=0){
            arr[0][k]= i;
            arr[1][k] =j;
            arr[2][k] = mat[i][j];
            k++;

        }
    }
}


}


void print_compact(int arr[3][6]){
   
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<6; j++)
            cout <<" "<< arr[i][j];

        cout <<"\n";
    }
    

}


int main(){                             


int row = 3, col = 3;
int matrix[3][6] = {
    {1,0,0,4,0,7},
    {0,0,0,0,5,0},
    {9,0,0,5,0,0}
};


// later will be converted to 
// row    0,0
// coloum 0,3
// value   1,4

// something like this 

int compact[3][6]; 
// row size 3 because of row 
//                       colum
//                       value 
//representation 

//and colum size should be same 

val_compact(compact,matrix);
print_compact(compact);

    return 0;
}


// TODO 1: write a size for increase the number of coloum on depending on the number of size of intem
