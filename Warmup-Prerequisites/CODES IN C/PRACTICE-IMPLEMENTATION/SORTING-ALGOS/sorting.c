// sorting algos

/*

//BUBBLE SORT OR SINKING SORT

void main()
{

    int i , j ,size ;
    printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }
int t,flag ;

for(i=0;i<size-1;i++)
{
    for(j=0;j<size-1;j++) // if j<i-1 then there would be wastage of time by program hence we have only o/p iterations
    {
        if(arr[j]>arr[j+1])
    {
        //swap
        t = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;

    }
    }
}

/////////////////////////////////////////////////////////////
// to reduce number of passes
// above for to reduce iterations
for(i=0;i<size-1;i++)
{
    for(j=0;j<size-i-1;j++) // if j<i-1 then there would be wastage of time by program hence we have only o/p iterations
    {
        if(arr[j]>arr[j+1])
    {
        //swap
        t = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;

    }
    }

}
/////////////////////////////////////////////////////////////

for(i=0;i<size-1;i++)
{ flag=0;
    for(j=0;j<size-i-1;j++)
    {
        if(arr[j]>arr[j+1])
    {
        //swap
        t = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
        flag=1;
    }
    }
    if(flag==0)
        break;
}

/////////////////////////////////////////////////////////////

printf("SORTED ARRAY:\n");
for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}


*/


/*

counting sort

void main()
{
    int  n, i ;
printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }
    // to find the maximum number of the inputs
     // k is the largest number
    countSort(arr , n );


}
int countSort(int arr[] , int n )
{
    // the maximum value would be of k
     int k,j;
     for (j =1 ; j < n; j++)
        {
        if (arr[0] < arr[j])
            arr[0] = arr[j];
            k = arr[0];
        }
    int i ;
    int b[n];
    int count[k+1];
     for(i=0;i<=k+1;i++)
    {
         count[i] = 0 ;
    }
    for(i=0;i<n;i++)
    {
       ++count[arr[i]];
    }
    for(i=1 ; i<=k ; i++)
    {
        count[i] = count[i] + count[i-1];
    }
    for(i=n-1 ; i>=0 ; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
     for(i=0;i<n;i++)
    {
    arr[i] = b[i];
    }
    printf("SORTED ARRAY\n");
      for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}


*/


/*

heap sort

int heapSort( int [] , int );
int heapify(int  [] ,int ,int );
 void main()
 {
     int n , i ;
         printf("SIZE OF UNSORTED ARRAY\n");
     scanf("%d",&n);
     int arr[n];

     for(i=1 ; i<= n ; i++)
     {
         printf("element:%d->",i);
         scanf("%d",&arr[i]);
     }
    heapSort(arr , n );
     printf("SORTED ARRAY\n");
      for(i=1 ; i<= n ; i++)
     {
         printf("%d\t",arr[i]);
     }

 }
 int heapify(int arr[] ,int n ,int i)
 {
     int largest , l , r ,t;
     largest = i ;
     l = 2*i;
     r = (2*i)+1;
     if(l<=n && arr[l]>arr[largest])
     {
         largest = l ;
     }
     if(r <=n && arr[r]>arr[largest])
     {
         largest = r ;

     }
     if(largest!=i)
     {
         //swap arr[largest] , arr[i]
         t  = arr[largest];
         arr[largest] = arr[i];
         arr[i] = t ;
         heapify(arr , i , l );


     }

     }
     int heapSort( int arr[] , int n )
     {
         int temp , i ;
         // FOR BUILDING
         for(i=n/2; i >= 1 ; i--)
         {
             heapify(arr , n , i );
         }

// FOR DELETING
         for (i = n ; i>=1 ; i--)
         {
             // swap arr[n] , arr[i]
            temp =  arr[1];
            arr[1] = arr[i];
            arr[i] = temp ;
             heapify(arr , i-1 , 1);
         }
}


*/


/*

insertion sort

void main()
{
    int n , i , j , temp ;
       printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
arr[j+1]=arr[j];
j--;
        }
    arr[j+1]=temp;
        }
   printf("SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}


*/


/*

merge sort

void main()
{
    int n ,  i;
    printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }


int lb =0;
int ub = n-1;

mergeSort(arr,lb, ub);
printf("SORTED ARRAY\n");

for(i=0 ; i<n ; i++)
    {
        printf("%d\t",arr[i]);

    }

}
int mergeSort(int arr[],int lb, int ub)
{

    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr , lb , mid , ub );
    }
}
int merge(int arr[],int  lb , int mid , int ub )
{
    int i = lb ;
   int j = mid+1;
    int k = lb;
    int bb = ub+1 ;
    int b[bb];
    while(i<=mid && j<=ub )
    {
        if(arr[i]<=arr[j])
{
    b[k] = arr[i];
    i++;
    //k++;
}
else
{
    b[k] = arr[j];
    j++ ;
    //k++ ;

}
k++;
    }
    // now if j has reached the upperbound and i still hasn't  reached or vice versa then :
    // say i reached beyond its limit
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k] = arr[j];
            j++ ;
            k++;

        }

    }
else
{
    while(i<= mid )
    {
        b[k] = arr[i];
        i++ ;
        k++ ;

    }
}
for(k=lb; k<=ub ; k++)
    // Copying values of  ARRAY b TO THE ARRAY arr USING FOR LOOP

    {
       arr[k] = b[k];
    }

}



*/



/*

quick sort

void main()
{ // you may choose any element as the pivot element
int n ,i ;
 printf("SIZE OF UNSORTED ARRAY\n");
 scanf("%d",&n);
int arr[n];
for(i=0 ; i<n ; i++)
{
    printf("element:%d->",i);
    scanf("%d",&arr[i]);
}
int lb=0 , ub =n-1;
quickSort(arr , lb , ub);
  printf("SORTED ARRAY\n");
for(i=0 ; i<n ; i++)
{
    printf("%d\t",arr[i]);
}

}

int partition(int arr[],int lb,int ub)
{
    int pivot , start , end ,t;
    pivot = arr[lb];
    start = lb ;
    end = ub ;
    while(start<end) // as if start go outer than end then you see the next code
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
    while(arr[end]>pivot)
    {
        end--;
    }

    if(start<end)
    {//swap
        t = arr[start];
        arr[start]= arr[end];
        arr[end]=t;
    }
    }
    // hence if the condition not followed then we replace the end with pivot element and return end
    //swap
   t =  arr[lb];
   arr[lb] = arr[end];
   arr[end] = t ;
   return end ;
}
int quickSort(int arr[] , int lb ,int  ub )
{
    int temp ;
     if(lb<ub)
     {
         temp = partition(arr , lb , ub );// as partition function would return end index which would be used further
        quickSort(arr , lb , temp-1);
         quickSort(arr ,temp+1, ub);

     }
}


*/



/*

radix sort


void main()
{
   // radix sort is like count sort
   int n ,  i;
      printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }

    radixSort(arr , n );
    printf("SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
int radixSort(int arr[] , int n )
{
    int k,j ;
    for (j =1 ; j < n; j++)
        {
        if (arr[0] < arr[j])
            arr[0] = arr[j];
            k = arr[0];
        }

    int max = k ;
    int pos;

    for(pos = 1 ; max/pos > 0 ;pos = pos*10)
    {
        countsort(arr , n , pos , k );
    }

}
int countsort(int arr[] , int n , int pos, int k  )
{
    int count[k+1],i;
    int b[n];
    for(i=0;i<k+1;i++)
    {
        count[i]=0;
    }
for(i=0 ; i<n ; i++)
{
    ++count[(arr[i]/pos)%10];
}
for(i=1 ; i<=k ; i++)
{
    count[i] = count[i] + count[i-1];
}
for(i=n-1 ; i>=0 ; i--)
{
    b[--count[(arr[i]/pos)%10]] = arr[i];
}

 for(i=0;i<n;i++)
    {
    arr[i] = b[i];
    }
}


*/



/*

selection sort

void main()
{
    int n , i , j , temp ,t  ;
printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }

    int min;
    for(i=0;i<n;i++)
    {
        min= i ;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min = j;
        }
        if(min!=i)
        {
            t = arr[i];
            arr[i] = arr[min];
            arr[min]=t;//swap(arr[i],arr[min]);
        }
    }
    printf("SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}



*/



/*

shell sort

void main()
{
   int n ,  i;
      printf("SIZE OF UNSORTED ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        printf("element:%d->",i);
        scanf("%d",&arr[i]);
    }
    // when gap = 1 then shell sort works as insertion sort
    // you compare in forward direction also and then if swapping done then you must compare in the backward direction also
// used when smaller elements are in the rightmost side
shellSort(arr , n);
printf("SORTED ARRAY\n");
for(i=0 ; i<n ; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int shellSort(int arr[] , int n )
{
    int i , j ,gap , t ;
    for(gap = n/2 ; gap>=1 ; gap = gap/2)
    {
        for(j=gap ; j<n ; j++)
         {
             for(i= j - gap ; i >=0 ; i = i-gap)
             {
                 if(arr[i] < arr[i+gap])
                 {
                     break;
                 }
                 else
                    // swap arr[i+gap] , arr[i]
                    t = arr[i+gap];
                 arr[i+gap]= arr[i];
                 arr[i] = t ;
             }
         }
    }
}



*/

