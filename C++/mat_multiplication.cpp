//Takes two matrices of same dimensions and multiply them!

#include <iostream>
using namespace std;

int main(){
    int i,j,k,m,n,p,q;

    cout<<"enter number of rows for matrix A: ";cin>>m;
    cout<<"enter number of column for matrix A: ";cin>>n;
    int mat1[m][n];

    cout<<"enter number of row for matrix B: ";cin>>p;
    cout<<"enter number of column for matrix B: ";cin>>q;
    int mat2[p][q];
    int mat3[p][q];

    if(m==p && n==q){
    
        cout<<"Enter element of matrix A: "<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cout<<"enter value for ["<<i<<"]["<<j<<"]: ";
                cin>>mat1[i][j];
            }
        }

        cout<<"Enter element of matrix B: "<<endl;
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                cout<<"enter value for ["<<i<<"]["<<j<<"]: ";
                cin>>mat2[i][j];
            }
        }

        cout<<"After multiplication: "<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                mat3[i][j]=0;
                for(k=0;k<p;k++){                  
                    mat3[i][j] += mat1[i][k]*mat2[k][j];                      //using mat3 to calculate the mat1 and mat2
                }
            }
        }

        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                cout<<mat3[i][j]<<" ";
            }
            cout<<endl;
        }

    
    }

    else{
        cout<<"enter both the matrix of same dimensions!"<<endl;
    }
    
}
