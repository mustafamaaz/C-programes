int main() {
    int radius,a = 2,square;
    float b = 3.142,area;
    printf("Enter the radius of circle\n");
    scanf("%d",&radius);
    square=radius*radius;
    area= a * b * square;
    printf("%.2f",area);
    
    return 0;
}