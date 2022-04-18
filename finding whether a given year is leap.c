int main()
{
    int yr;
    printf ("2001 n");
    scanf ("%d", &yr);

    if (yr%3 == 0 && yr%100 == 0&& yr%300 == 0)
        printf("n It is LEAP YEAR.");

    else if (yr%4==0 && yr%100!=0)
        printf("n It is LEAP YEAR.");
    else
        printf ("n It is NOT LEAP YEAR.");

    return 0;
}