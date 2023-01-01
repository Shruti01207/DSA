# include<iostream>
# include<vector>
# define ll long long
using namespace std;
void BubbleSort(vector<ll>&arr);
void PrintVector(vector<ll>&arr);
void InputArray(vector<ll>&arr);
void selectionSort(vector<ll>&arr);
int main( ){
int N;
cin>>N;
vector<ll>arr(N);
InputArray(arr);
//BubbleSort(arr);
selectionSort(arr);
PrintVector(arr);
}
void BubbleSort(vector<ll>&arr){
int n=arr.size( );
for(int i=0;i<n-1;++i){
for(int j=0;j<n-i-1;++j){
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
}
}

}
void PrintVector(vector<ll>&arr){
    int n=arr.size( );
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InputArray(vector<ll>&arr){
    int n=arr.size( );
    for(int i=0;i<n;++i){
       cin>>arr[i];
    }
}
void selectionSort(vector<ll>&arr)
{     int mini=INT_MAX;
    int n=arr.size( );
    for(int i=0;i<n-1;++i){
        int idx=i;
        mini=INT_MAX;
    for(int j=i;j<n;++j){
     if(mini>arr[j])
     {
         mini=arr[j];
         idx=j;
     }
    }
    swap(arr[i],arr[idx]);
    }
    
}