 #include<stdio.h>
 
 int findlargest(int*p,int size)
 {
    int largest=p[0];
    for(int i=0;i<size;i++)
    {
        if(p[i]>largest)
        {
            largest=p[i];
        }
    }
    return largest;
 }
 int main(void)
 {
    int numbers[6]={45,90,20,100,75,60};
    int result =findlargest(numbers,6);
    printf("The largest value in an array is=%d\n",result);
    return 0;

 }