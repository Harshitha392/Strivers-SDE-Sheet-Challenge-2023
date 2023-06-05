void sort012(int *arr, int n)
{
   int low=0;
   int mid=0;
   int high=n-1;
   for(int i=0;i<n;i++){
      if(arr[mid]==1){
         mid++;
      }
      else if(arr[mid]==0){
         int temp=arr[low];
         arr[low]=0;
         arr[mid]=temp;
         low++;
         mid++;
      }
      else if(arr[mid]==2){
         int temp=arr[high];
         arr[high]=arr[mid];
         arr[mid]=temp;
         high--;
      }
   }
}
