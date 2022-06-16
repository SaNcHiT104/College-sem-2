#include<iostream>
using namespace std;
int main(){
    cout<<"Enter order";
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int (*ptr)[m] = arr;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"Row of elements";
            for(int j=0;j<m;j++){
                cin>>*(*(ptr+i)+j);
            }
        cout<<endl;
    }
    cout << "The values you entered are:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << *(*(ptr + i) + j) << " ";
        }
        cout << "\n";
    }
    return 0;

}