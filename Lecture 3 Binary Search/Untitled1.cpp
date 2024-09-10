#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    int left =0, right = 4, searchItem = 1;

    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==searchItem)
        {
            printf("%d", mid);
            break;
        }
        else if(arr[mid]<searchItem)
        {
            left=mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
}
