#include<stdio.h>
int main()
{
    int year;
    ptintf("Enter the Year: ",year);
    scanf("%d",&year);
    
    if(year%4==0)
    {
       printf("Given year is Leap");            
      }
    else
    {
      printf("Given year is not Leap");   
        }
}
