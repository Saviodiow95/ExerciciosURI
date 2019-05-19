#import <stdio.h>

void main()
{
    int l, c;

    scanf("%d",&l);
    scanf("%d",&c);

    if(l == c ||(l%2!=0 && c%2!=0) || (l%2==0 && c%2==0))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
