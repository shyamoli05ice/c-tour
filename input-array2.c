int main() {
    int x[100],i,j, a,n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter value %i: ", i+ 1);
        scanf("%d", &x[i]);
    }

    printf("Sorted list: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}
