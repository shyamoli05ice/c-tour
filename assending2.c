int main()
{
    int i,j,n,a;
    int x[100];
    printf("enter the valuee of n: ");
    scanf("%d",&n);
    printf("enter the numbers: ");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
    printf ("The number are arranged in ascending order:\n");
    for(i=0;i<n;i++)
        printf("%d\n", x[i]);
}
