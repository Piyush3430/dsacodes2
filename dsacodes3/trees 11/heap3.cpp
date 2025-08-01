#include<iostream>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size;
    heap()
    {
        size=0;
        arr[0]=-1;
    }
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return;
            }

        }

    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    void deletefromheap()
    {
        if(size==0)
        {
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex])
            {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                i=rightindex;

            }
            else
            {
                return;
            }

        }
    }
    void heapify(int arr[],int n,int i)
    {
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<=n && arr[largest]<arr[left])
        {
            largest=left;
        }
        if(right<=n && arr[largest]<arr[right])
        {
            largest=right;
        }
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }


    }
    void heapsort(int arr[],int n)
    {
        int size=n;
        while(size>1)
        {
            swap(arr[size],arr[1]);
            size--;
            heapify(arr,size,1);
        }
    }
};
int main()
{
    heap obj;
    obj.insert(55);
    obj.insert(54);
    obj.insert(56);
    obj.insert(53);
    obj.insert(52);
    obj.print();
    int arr[6]={-1,54,53,55,52,50};
    
    int n=5;
    obj.heapsort(arr,n);
    for(int i=n/2;i>0;i--)
    {
       obj.heapify(arr,n,i);

    }
    for (int j = 1; j <=n; j++)
    {
        cout<<arr;
    }
    
    return 0;

}
