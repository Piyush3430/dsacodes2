#include<iostream>
using namespace std;
// linear search
// int searchelement( int arr[][3],int key)
// {
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(key==arr[i][j])
//             {
//                 return 1;
//             }
//         }
//     }
//     return -1;

// }
void findmaxmin(int arr[][3])
{
    int max=0;
    int min=INT16_MAX;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    cout<<max;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    cout<<min;
    
    
}
int main()
{
    //initialise an array
    // int arr[2][2];

    // to initialise an array with values directly
    // int arr[2][2]={{1,2},{3,4}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<arr[i][j];
            
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }

    // to print row sum
     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int sum=0;
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         sum=sum+arr[i][j];


    //     }

    // } 
    // cout<<sum;
    // cout<<searchelement(arr,5);
    findmaxmin(arr);

    
}
