#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void D2O();
void O2D();
void O2H();
void H2O();
void option();
int ch;
char ch1;
int n,i,count;

int main()
{
    home:
    system("cls");
    printf("     Number System Conversion\n\nEnter Choice as\n\n\n1.Decimal to Other Number System\n2.Other to Decimal Number System\n3.Octal to Hexadecimal\n4.Hexadecimal to Octal\n\n");
    start:
    scanf("%d",&ch);
    if(ch==1)
    {
        menu1:
        system("cls");
        D2O();
       printf("\n\nGo Home (press 'H')\nMain Menu (press 'M')\nExit (press 'X') : ");
        scanf(" %c",&ch1);
        if(ch1=='M'||ch1=='m')
            goto menu1;
        else if(ch1=='H'||ch1=='h')
            goto home;
        else if(ch1=='X'||ch1=='x')
            goto end;
    }

    else if(ch==2)
    {
        menu2:
        system("cls");
        O2D();
    printf("\n\nGo Home (press 'H')\nMain Menu (press 'M')\nExit (press 'X') : ");
        scanf(" %c",&ch1);
        if(ch1=='M'||ch1=='m')
            goto menu2;
        else if(ch1=='H'||ch1=='h')
            goto home;
        else if(ch1=='X'||ch1=='x')
            goto end;
    }
    else if(ch==3)
    {
        menu3:
        system("cls");
        O2H();
    printf("\n\nGo Home (press 'H')\nMain Menu (press 'M')\nExit (press 'X') : ");
        scanf(" %c",&ch1);
        if(ch1=='M'||ch1=='m')
            goto menu3;
        else if(ch1=='H'||ch1=='h')
            goto home;
        else if(ch1=='X'||ch1=='x')
            goto end;
    }
    else if(ch==4)
    {
        menu4:
        system("cls");
        H2O();
    printf("\n\nGo Home (press 'H')\nMain Menu (press 'M')\nExit (press 'X') : ");
        scanf(" %c",&ch1);
        if(ch1=='M'||ch1=='m')
            goto menu4;
        else if(ch1=='H'||ch1=='h')
            goto home;
        else if(ch1=='X'||ch1=='x')
            goto end;
    }
    else
        {
            printf("\n\a\a\aWrong Input. Please enter again.\n");
            goto start;
        }
    end:
    return 0;
}


void D2O()
{
    int res[100];
    n=0;i=0;count=0;
    printf("Decimal to Other Number System");
    printf("\n\n\a1.Decimal to Binary\n2.Decimal to Octal\n3.Decimal to Hexadecimal\n\n");
    start2:
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n\n\aEnter Decimal Number : ");
        scanf("%d",&n);
        while(n!=0)
        {
            res[i]=(n%2);
            n=n/2;
            i++;
            count++;

        }
        printf("\n\aBinary Form is ");
        for(i=count-1;i>=0;i--)
           {
               printf("%d",res[i]);
           }

    }
    else if(ch==2)
    {
        printf("\n\n\aEnter Decimal Number : ");
        scanf("%d",&n);
        while(n!=0)
        {
            res[i]=(n%8);
            n=n/8;
            i++;
            count++;

        }
        printf("\n\aOctal Form is ");
        for(i=count-1;i>=0;i--)
            printf("%d",res[i]);

    }
    else if(ch==3)
    {
        printf("\n\n\aEnter Decimal Number : ");
        scanf("%d",&n);
        while(n!=0)
        {
            res[i]=(n%16);
            n=n/16;
            i++;
            count++;

        }
        printf("\n\aHexadecimal Form is ");
        for(i=count-1;i>=0;i--)
        {
            if(res[i]==10)
                printf("A");
            else if(res[i]==11)
                printf("B");
            else if(res[i]==12)
                printf("C");
            else if(res[i]==13)
                printf("D");
            else if(res[i]==14)
                printf("E");
            else if(res[i]==15)
                printf("F");
            else
                printf("%d",res[i]);
        }
    }
    else
    {
      printf("\n\a\a\aWrong Input.Please enter again.\n");
      goto start2;
    }

}

void O2D()
{
    int res=0;
    n=0;i=0;
    printf("Other to Decimal Number System");
    printf("\n\n\a1.Binary to Decimal\n2.Octal to Decimal\n3.Hexadecimal to Decimal\n\n");
    start3:
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\n\aEnter Binary Number : ");
        scanf("%d",&n);
        while(n!=0)
        {
            res=res+(n%10)*pow(2,i);
            n=n/10;
            i++;
        }
        printf("\n\aDecimal Form is %d",res);
    }
    else if(ch==2)
    {
        printf("\n\aEnter Octal Number (0-7) : ");
        scanf("%d",&n);
        while(n!=0)
        {
            res=res+(n%10)*pow(8,i);
            n=n/10;
            i++;
        }
        printf("\n\aDecimal Form is %d",res);
    }
    else if(ch==3)
    {
        printf("\n\aEnter Hexadecimal Number : ");
        scanf("%X",&n);
        printf("\n\aDecimal Form is %d",n);
    }
    else
       {
           printf("\n\a\a\aWrong Input.Please enter again.\n");
           goto start3;
       }

}

void O2H()
{
    int res[65],t=0,rem;
    n=0;i=0;count=0;
    printf("Octal to Hexadecimal Number System");
    printf("\n\n\aEnter Octal Number (0-7) : ");
    start4:
    scanf("%d",&n);
    i=0;
    count=0;
    while(n!=0)
        {
            rem=n%10;
            if(rem!=8&&rem!=9)
            {
                t=t+rem*pow(8,i);
                n=n/10;
                i++;
            }
            else
            {
                printf("\n\a\a\aWrong Input.Please enter again.\n");
                goto start4;
            }
        }
        i=0;
        while(t!=0)
        {
            res[i]=(t%16);
            t=t/16;
            i++;
            count++;

        }
        printf("\n\aHexadecimal Form is ");
        for(i=count-1;i>=0;i--)
        {
            if(res[i]==10)
                printf("A");
            else if(res[i]==11)
                printf("B");
            else if(res[i]==12)
                printf("C");
            else if(res[i]==13)
                printf("D");
            else if(res[i]==14)
                printf("E");
            else if(res[i]==15)
                printf("F");
            else
                printf("%d",res[i]);
        }

}

void H2O()
{
    int res[]={};
    n=0;i=0;count=0;
    printf("Hexadecimal to Octal Number System");
    printf("\n\n\aEnter Hexadecimal Number : ");
    scanf("%X",&n);
    while(n!=0)
        {
            res[i]=(n%8);
            n=n/8;
            i++;
            count++;

        }
        printf("\n\aOctal Form is ");
        for(i=count-1;i>=0;i--)
            printf("%d",res[i]);
}


