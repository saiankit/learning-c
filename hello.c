//supermarket money available slip
#include <stdio.h>
int main()
{
    char letternN1,letternN2,letter_3;
    int nN20000,nN500,nnN2000,nN100,nN50,nN20,nN10,nC100,nN5,nC5,nN2,nC2,nN1,nC1;
    int t2000,t500,t200,t100,t50,t20,t10,t5,t2,t1;
    int total;
                printf("WELCOME TO SAI SUPERMARKET ! \n");
                printf("YOU CAN GET A MONEY SLIP WITH US FOR BETTER SHOPPING \n");
                printf("PLEASE ENTER YOUR THREE LETTERED NAME INITIALS BELOW \n");
                scanf("%c%c%c",&letternN1,&letternN2,&letter_3);
                printf("WELCOME %c%c%c !! \n",letternN1,letternN2,letter_3);
                printf("PLEASE ENTER NUMBER OF 2000 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN20000);
                printf("PLEASE ENTER NUMBER OF 500 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN500);
                printf("PLEASE ENTER NUMBER OF 200 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nnN2000);
                printf("PLEASE ENTER NUMBER OF 100 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN100);
                printf("PLEASE ENTER NUMBER OF 50 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN50);
                printf("PLEASE ENTER NUMBER OF 20 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN20);
                printf("PLEASE ENTER NUMBER OF 10 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN10);
                printf("PLEASE ENTER NUMBER OF 10 Rs. COINS YOU HAVE \n");
                scanf("%d",&nC100);
                printf("PLEASE ENTER NUMBER OF 5 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN5);
                printf("PLEASE ENTER NUMBER OF 5 Rs. COINS YOU HAVE \n");
                scanf("%d",&nC5);
                printf("PLEASE ENTER NUMBER OF 2 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN2);
                printf("PLEASE ENTER NUMBER OF 2 Rs. COINS YOU HAVE \n");
                scanf("%d",&nC2);
                printf("PLEASE ENTER NUMBER OF 1 Rs. NOTES YOU HAVE \n");
                scanf("%d",&nN1);
                printf("PLEASE ENTER NUMBER OF 1 Rs. COINS YOU HAVE \n");
                scanf("%d",&nC1);
            t2000 = nN20000 * 2000;
            t500 = nN500 * 500;
            t200 = nnN2000 * 200;
            t100 = nN100 * 100;
            t50 = nN50 * 50;
            t20 = nN20 * 20;
            t10 = ( nN10 + nC10 ) * 10;
            t5 = ( nN5 + nC5 ) * 5;
            t2 = ( nN2 + nC2 ) * 2;
            t1 = ( nN1 + nC1 ) * 1;
            total = t2000 + t500 + t200 + t100 + t50 + t20 + t10 + t5 + t2 + t1;
                printf(" DEAR %c%c%c ! TOTAL MONEY AVAILABLE WITH YOU FOR SHOPPING IS %d \n",letternN1,letternN2,letter_3,total);
                printf("SHOP WISELY :-) \n");
}