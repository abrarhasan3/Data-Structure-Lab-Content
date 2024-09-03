#include<bits/stdc++.h>
#define lld long long int
using namespace std;
void start()
{
        #ifndef ONLINE_JUDGE
 
        freopen("C:\\Users\\Hp\\Desktop\\CP\\input.txt", "r", stdin);
 
        freopen("C:\\Users\\Hp\\Desktop\\CP\\output.txt", "w", stdout);
        #endif // ONLINE_JUDGE
 
}
 
int main()
{
        start();

        int arr[10] = {10,12,34,112,22,11,224,15,1,2};
        

        int element,index;

        scanf("%d", &element);



        for(int i=0;i<10;i++)
        {
                if(element==arr[i])
                {
                        printf("Found index %d\n",i);
                        index = i;
                        break;
                }
        }

        for(int i = index;i<10;i++)
        {
                arr[i] = arr[i+1];
        }
        arr[10] = '\0';

        for(int i = 0;i<9;i++)
        {
                printf("%d ",arr[i]);
        }

}