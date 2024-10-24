
#include<bits/stdc++.h>
using namespace std;

void insert(int arr[100][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
}
void Print(int arr[100][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//Print 2D array in row major order
void Print_2D_Array_in_row_major_order(int arr[][100],int row,int column){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<arr[i][j]<<" ";
            }
        }
}
void Print_2D_Array_in_column_major_order(int arr[][100],int row,int column){
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<arr[j][i]<<" ";
            }
        }
}
void Print_the_main_diagonal_of_a_2D_array(int arr[][100],int row,int column){
     for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
               if(i==j){
                cout<<arr[i][j]<<" ";
               }
            }
        }
}

void Xrow_Print(int arr[][100],int x,int column){
     x =  x-1;
     for(int i=0;i<column;i++){
           cout<<arr[x][i]<<" ";
        }
}


void Xcolumn_Print(int arr[][100],int x,int row){
     x =  x-1;
     for(int i=0;i<row;i++){
           cout<<arr[i][x]<<" ";
        }
}

void Print_the_second_diagonal_of_2D_array(int arr[][100],int row,int column){
     int i = 0;
     int j = column-1;
     for(int i=0;i<row;i++){
        cout<<arr[i][j]<<endl;
        j--;
     }
}
bool  Symmetric_or_not(int arr[][100],int row,int column){
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            if(arr[i][j]!=arr[j][i]){
                return false;
            }
        }
    }
    return true;

}

void Transpose_of_2D_array(int arr[][100],int row,int column){
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

void Mirror_Array(int arr[][100],int row,int column){
    column = column-1;
    for(int i=0;i<row;i++){
        for(int j=column;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Add_two_matrices(int arr[][100],int arr2[][100],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Sum_Row_Column(int arr[][100],int row,int column){
    int rowSum=0,colSum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            rowSum = rowSum+arr[i][j];
        }
    }
    cout<<"Row Sum    : "<<rowSum<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            colSum = colSum+arr[j][i];
        }
    }
    cout<<"Column Sum : "<<colSum<<endl;
}
bool  matrices_equal_or_not(int arr[][100],int arr2[][100],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]!=arr2[i][j]){
                return false;
                break;
            }
        }
       
    }
    return true;
}

bool Search_In_Matrix(int arr[][100],int row,int column,int s){
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            if(arr[i][j]==s){
                return true;
                break;
            }
        }
    }
    return false;
}
bool Sparse_matrix_or_not(int arr[][100],int row,int column){
    int msz = row*column;
    int ct = 0;
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            if(arr[i][j]==0){
               ct++;
            }
        }
    }
    msz = msz-ct;
    return msz>ct;
}
bool  Mirror_of_another_or_not(int arr[][100],int arr2[][100],int row,int column){
        for(int i=0;i<row;i++){
            int k = column-1;
            for(int j=0;j<column;j++){
                if(arr[i][j]!=arr2[i][k]){
                    return false;
                }
                k--;
            }
        }
    return true;
}

bool  every_row_odd_sum_or_not(int arr[][100],int row,int column){
    for(int i=0;i<row;i++){
    int rowSum=0;
        for(int j=0;j<column;j++){
            rowSum = rowSum+arr[i][j];
        }
        if(rowSum%2==0){
            return false;
        }
        
    }
    return true;
}
//Rotate a 2D array to 90 degree.
void Rotate_2Darray_90degree(int arr[][100],int row,int column){
     column = column-1;
    for(int i=0;i<row;i++){
        for(int j=column;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
//Check if the outer-shell of a 2D array contains 0-only.
bool outer_shell_0only(int arr[][100],int row,int column){
    int r = 0;
    int c = 0;
    for(int i=0;i<column;i++){
        if(arr[c][i]!=0){
            return false;
        }
    }
    c = column-1;
    for(int i=0;i<column;i++){
        if(arr[c][i]!=0){
            return false;
        }
    }

    for(int i=0;i<row;i++){
        if(arr[i][r]!=0){
            return false;
        }
    }
    r = row-1;
    for(int i=0;i<row;i++){
        if(arr[i][r]!=0){
            return false;
        }
    }
    return true;
}

int determinant_of_3x3matrix(int a[][100]){
        int det1 = a[0][0]*((a[1][1]*a[2][2])+(a[2][1]*a[1][2])); 
        int det2 = a[0][1]*((a[1][0]*a[2][2])+(a[2][0]*a[1][2])); 
        int det3 = a[0][2]*((a[1][0]*a[2][1])+(a[2][0]*a[1][1])); 
        int sum = det1 - det2 +det3;
        return sum;
}
int main(){
    int r,c,x;
    cin>>r>>c;
    //cin>>x;

    int arr[100][100],arr2[100][100];
    insert(arr,r,c);
    //insert(arr2,r,c);
    cout<< determinant_of_3x3matrix(arr);


    
    return 0;
}