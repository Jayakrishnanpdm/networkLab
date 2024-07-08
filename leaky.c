#include<stdio.h>
void main(){
    int buck_size,incoming,outgoing,store=0,n;
    printf("enter bucket_size,outgoing and number of inputs");
    scanf("%d%d%d",&buck_size,&outgoing,&n);
    while (n!=0)
    {
      printf("enter incoming packet size");
      scanf("%d",&incoming);
      if(incoming<=(buck_size - store))
      {
        store=store + incoming;
        printf("bucket buffer size is %d out of %d",store,buck_size);
        store = store-outgoing;
        printf("After outgoing %d left out of %d",store,buck_size);

      }else{
        printf("%d number of incoming packets are dropped",incoming);
        printf("bucket buffer size is %d out of %d");
      }
      n--;
    }
    
}