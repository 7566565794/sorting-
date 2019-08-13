void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} */
void insert(int arr[], int i)
{
    int j=i;
    while(j>0){
    if(arr[j-1]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    }
    j--;
    }
    
}
