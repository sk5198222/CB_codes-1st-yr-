//Searching Main

void searchMain()
{
    int choice;

    while(1)
    {
        printf("\n9.Main menu\n1.Linear Search\n2.Binary Search\n\nChoose one (1/2): ");
        scanf("%d",&choice);
        system("cls");

        switch(choice)
            {
                case 1: lSearch(); getch(); system("cls"); break;
                case 2: bSearchM(); getch(); system("cls"); break;
                case 9: system("cls"); return;
                default: printf("Invalid Option...!!!\n\nRead the options carefully...!!!"); getch(); system("cls");
            }
    }
}


//Linear Search

void lSearch()
{
    int a[10],i,j,size,search,count=1;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    if(size<=0 || size>9)
    {
        printf("Invalid size...!!!\nEnter a valid size...(ex: 5 / 3)\n\n");
        return;
    }

    printf("Enter the %d elements of array\n",size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements to search\n");
    scanf("%d",&search);

    for(i=0;i<size;i++)
    {
        if(a[i]==search)
        {
            printf("%d is the index of %d and position %d.\n",a[i],i,i+1); return;
        }
    }

    printf("Element is not found\n\n");
}



//Binary Search

int bSearch(int a[],int data,int n){

    int l=0,r=n-1,mid;

    while(l<=r)
    {
        mid=(l+r)/2;

        if(data==a[mid])
            return mid;

        else if(data<a[mid])
            r=mid-1;

        else
            l=mid+1;
    }

    return -1;
}

void bSearchM()
{
    int a[10],n,ele,i,j;

    printf("Enter the array size: ");
    scanf("%d",&n);

    if(n<=0 || n>9)
    {
        printf("Invalid size...!!!\nEnter a valid size...(3-10)\n\n");
        return;
    }

    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(a+i));
    }

    int min,temp;

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("Sorted elements are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }

    printf("Enter an ele to search: ");
    scanf("%d",&ele);

    int found=bSearch(a,ele,n);

    if(found==-1)
    {
        printf("Element %d not found!!!\n\n\n",ele);
    }

    else
    {
        printf("%d found at pos %d.\n\n\n",ele,found+1);
    }

    return 1235;
}
