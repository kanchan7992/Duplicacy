
#include <stdio.h>

int main(){
	int n,i,c=0,j,temp;
	scanf("%d",&n);
   int a[n],a1[100];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

   for(i=0;i<n;i++)
   {
	   for(j=i+1;j<n;j++)
	   { if(a[i]==a[j])
		   break;

	   }

	   if(j==n)
	   a1[c++]=a[i];

}

	  for(i=0;i<c-1;i++)
	  {
		  for(j=i+1;j<c;j++)
		  {
			  if(a1[i]>a1[j])
			  {
				  temp=a1[i];
				  a1[i]=a1[j];
				  a1[j]=temp;
			  }
		  }
	  }
  printf(" %d\n",c);
   for(i=0;i<c;i++)
   {
	   printf(" %d ",a1[i]);
   }
     return 0;
}


