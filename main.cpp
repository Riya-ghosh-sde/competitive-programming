//
//  main.cpp
//  recursonSum.cpp
//
//  Created by Riya Ghosh on 17/07/23.
//
#include <iostream>
using namespace std;

int getSum(int *arr,int size)
{
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];
    int remeiningPart=getSum(arr+1,size-1);
    int sum=arr[0]+remeiningPart;
    return sum;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    int sum= getSum(arr,size);
    
    cout<<" sum is "<<sum<<endl;
    
}
