void sorting(){
    int choice;
    printf("\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Quick Sort\n5.Merge Sort\nChoice an option: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: bubbleSort(); break;
        case 2: selectionSort(); break;
        case 3: insertionSort(); break;
        case 4: qSortM(); break;
        case 5: mSortM(); break;
        case 0: return;
    }


}
void selectionSort()
{
    int i,j,size,min,temp;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the %d elements of array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("Selection sort\n");
    printf("Print the array elements \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}

void bubbleSort()
{
    int a[20],i,j,size,min,temp;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the %d elements of array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag;
    for(i=0;i<size-1;i++)
    {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag!=1)
            break;
    }
    printf("Bubble sort\n");
    printf("Print the array elements\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}

void insertionSort()
{
    int a[20],i,size,j,temp,min;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the %d elements of array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
           a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }


    printf("Insertion sort \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}

void qSortM()
  {
     int a[23];
     int size;

    printf("Enter the size of the array \n") ;
     scanf("%d",&size);
     printf("Enter the array elements \n");
     for(int i=0;i<size;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("Array elements before sorting\n");
     for(int i=0;i<size;i++)
     {
         printf("%d\n",a[i]);

     }
     quickSort(a,0,size-1);

    printf("Elements after sorting \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
     }

void quickSort(int a[],int lb,int ub)
{
 if(lb<ub)
 {
     int place=partition(a,lb,ub);
     quickSort(a,lb,place-1);
     quickSort(a,place+1,ub);
 }

}
int partition(int a[],int lb,int ub)
{
   int pivot=a[lb];
   int st=lb;
   int end=ub;
   while(st<end)
   {
       while(a[st]<=pivot&&st<=ub)
       {
           st++;
       }
       while(a[end]>pivot&&end>=0)
       {
           end--;
       }
       if(st<end)
       {
        int temp=a[st];
        a[st]=a[end];
        a[end]=temp;
       }
   }
   int temp=a[lb];
   a[lb]=a[end];
   a[end]=temp;
   return end;
}

void mergeSort(int a[],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub){
    int i,j,k,b[10];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];  i++;
        }
        else{
            b[k]=a[j];  j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j]; j++; k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i]; i++; k++;
        }
    }
    for(int s=lb; s<=ub; s++)
        a[s]=b[s];
}


void mSortM()
{
    int a[10],i,size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",(a+i));

    mergeSort(a,0,size-1);
    printf("Sorted array using Merge Sort:\n");
    for(i=0; i<size; i++){
        printf("%d\n",*(a+i));
    }
    return 0;
}
