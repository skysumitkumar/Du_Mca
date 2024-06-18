int main()
{
    int i;
    char num[2][5]={"even","odd"};
    scanf ("%d",&i);
    printf ("%s",num[i&1]);
    printf("%d",i&1);
    getch();
}
