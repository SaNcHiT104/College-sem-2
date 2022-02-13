#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool mat[n][m];
    int row[n];
    int col[m];
    int rowC=0,colC=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]){
                row[rowC++]=i;
                col[colC++]=j;
            }
        }
    }
    for(int i=0;i<rowC;i++){
        for(int j=0;j<m;j++){
            mat[row[i]][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<colC;j++){
            mat[i][col[j]]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}