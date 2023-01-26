int main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("Enter number\n");
    scanf("%d",&b);
    
    if (a>b) {
        printf("the biggest  is %d\n",a);
    }
    else if (a<b) {
    printf ("the biggest  is %d\n",b);
    } else {
        printf("given  number a and b are equal");
    }

    return 0;
}