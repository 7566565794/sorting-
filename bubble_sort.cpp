void bubbleSort(int arr[], int n)
{
   int i;
   for (i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} */
void bubble(int arr[], int i, int n)
{
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
           int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp; 
        }
        
    }
}
