#include<stdio.h>
int main()
{
int i,j,count=0;
int a[10]={1,1,1,3,5,6,7,8,8,9};

//printf("the the elements are",a[i]);
for (i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
        if(a[i]==a[j])
        {
            count++;
            if (count==1)
            {
                printf("%d \t",a[j]);
            }


        }

    }

}
}


