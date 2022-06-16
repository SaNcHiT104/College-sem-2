#include<iostream>
using namespace std;
int main (){
    int arr[] = {2,3,45,1,4,8,10};
    int sort[7];
    cout<<"DIsplaying original array"<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    for(int i =0;i<8;i++){
        sort[i]=arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - i - 1; j++)
        {
            if (sort[j] > sort[j + 1])
            {
                int temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
    }

    cout<<"Displaying sorted array"<<endl;
    for(int i=0;i<7;i++){
        cout<<sort[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=6;

    while(i<j){
        int temp = sort[i];
        sort[i]=sort[j];
        sort[j]=temp;
        i++;
        j--;
    }
    cout<<"Displaying reverse sorted"<<endl;
    for(int i=0;i<7;i++){
        cout<<sort[i]<<" ";
    }
}