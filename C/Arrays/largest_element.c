#include <stdio.h>
//Function block
void FindMaxMin(int arr[],int n){
    int largest= arr[0];
    int smallest= arr[0];
    int i;
     for (i=1;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
        if (arr[i]<smallest){
            smallest=arr[i];
        }
     }
     printf("The largest element is :%d\n",largest);
     printf("The smallest element is :%d\n",smallest);
} 

//Main array block
int main(){
    int arr[100],i,n;
    printf("Enter array size:");
    scanf("%d",&n);

    printf("Enter n array elements:");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    FindMaxMin(arr,n);

    return 0;
}

    


     
        

     

    
