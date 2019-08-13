// in this we are keeping the maxi element always at the largest side.
void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
 */
int select(int arr[], int i)
{
    int max=arr[0];
    int i_max=0;
    for(int k=0;k<=i;k++){
        if(max<arr[k]){
            max=arr[k];
            i_max=k;
        }
    } 
    return i_max;
}
