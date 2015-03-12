//
//  main.c
//  C_Ex
//
//  Created by Tim on 12/3/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//
//long int bin_to_dec(long int);
//int * dec_to_bin(long int);
//
//
////struct binStrLen {
////    int binStr[100];
////    int len;
////};
//
//int main(){
//    long int decNum1;
//    int * binNum1;
//    
//    printf("Enter any decimal number: ");
//    scanf("%ld", &decNum1);
//    
//    binNum1 = dec_to_bin(decNum1);
//
//    printf("Equivalent binary value of decimal number %ld: ", decNum1);
//    
//    for(int j = 0; j < sizeof(binNum1); j++){
//        printf("%d", binNum1[j]);
//    }
//    printf("\n");
//    
//    return 0;
//}
//
//
//int * dec_to_bin(long int decNum){
//    long int quotient;
//    int * binStr = (int *)malloc(100*sizeof(int));
//    int i = 0;
//    
//    quotient = decNum;
//    
//    while(quotient != 0){
//        binStr[i] = quotient % 2;
//        quotient = quotient / 2;
//        binStr++;
//        i++;
//    }
//    
//    return binStr;
//}
//
//long int bin_to_dec(long int binNum){
//
//    long int decNum=0,j=1,quotient,remainder;
//
//    quotient = binNum;
//    
//    while(quotient!=0){
//        remainder=quotient%10;
//        decNum=decNum+remainder*j;
//        j=j*2;
//        quotient=quotient/10;
//    }
//
//    return decNum;
//}

//Hex to Bin and Bin to Hex

//void binary_hex(int n, char hex[]);
//int hex_binary(char hex[]);
//void strrev(char *string);
//int string_length(char *pointer);

//int main()
//{
//    char hex[20],c;
//    int n;
//    printf("Instructions:\n");
//    printf("Enter h to convert binary to hexadecimal:\n");
//    printf("Enter b to hexadecimal number to binary:\n");
//    printf("Enter a character: ");
//    scanf("%c",&c);
//    if (c=='h' || c=='H')
//    {
//        printf("Enter binary number: ");
//        scanf("%d",&n);
//        binary_hex(n,hex);
//        printf("Hexadecimal number: %s",hex);
//    }
//    if (c=='b' || c=='B')
//    {
//        printf("Enter hexadecimal number: ");
//        scanf("%s",hex);
//        printf("Binary number: %d",hex_binary(hex));
//    }
//    return 0;
//}
//
//void binary_hex(int n, char hex[]) /* Function to convert binary to hexadecimal. */
//{
//    int i=0,decimal=0, rem;
//    while (n!=0)
//    {
//        decimal += (n%10)*pow(2,i);
//        n/=10;
//        ++i;
//    }
//    
//    /* At this point, variable decimal contains binary number in decimal format. */
//    i=0;
//    while (decimal!=0)
//    {
//        rem=decimal%16;
//        switch(rem)
//        {
//            case 10:
//                hex[i]='A';
//                break;
//            case 11:
//                hex[i]='B';
//                break;
//            case 12:
//                hex[i]='C';
//                break;
//            case 13:
//                hex[i]='D';
//                break;
//            case 14:
//                hex[i]='E';
//                break;
//            case 15:
//                hex[i]='F';
//                break;
//            default:
//                hex[i]=rem+'0';
//                break;
//        }
//        ++i;
//        decimal/=16;
//    }
//    hex[i]='\0';
//    strrev(hex);       /* Function to reverse string. */
//}
//
//int hex_binary(char hex[])   /* Function to convert hexadecimal to binary. */
//{
//    int i, length, decimal=0, binary=0;
//    for(length=0; hex[length]!='\0'; ++length);
//    for(i=0; hex[i]!='\0'; ++i, --length)
//    {
//        if(hex[i]>='0' && hex[i]<='9')
//            decimal+=(hex[i]-'0')*pow(16,length-1);
//        if(hex[i]>='A' && hex[i]<='F')
//            decimal+=(hex[i]-55)*pow(16,length-1);
//        if(hex[i]>='a' && hex[i]<='f')
//            decimal+=(hex[i]-87)*pow(16,length-1);
//    }
//    /* At this point, variable decimal contains the hexadecimal number in decimal format. */
//    
//    i=1;
//    while (decimal!=0)
//    {
//        binary+=(decimal%2)*i;
//        decimal/=2;
//        i*=10;
//    }
//    return binary;
//}
//
//void strrev(char *string)
//{
//    int length, c;
//    char *begin, *end, temp;
//    
//    length = string_length(string);
//    
//    begin = string;
//    end = string;
//    
//    for ( c = 0 ; c < ( length - 1 ) ; c++ )
//        end++;
//    
//    for ( c = 0 ; c < length/2 ; c++ )
//    {
//        temp = *end;
//        *end = *begin;
//        *begin = temp;
//        
//        begin++;
//        end--;
//    }
//}
//
//int string_length(char *pointer)
//{
//    int c = 0;
//    
//    while( *(pointer+c) != '\0' )
//        c++;
//    
//    return c;
//}


//Decimal to Hex

//int main(){
//    long int decimalNumber,remainder,quotient;
//    int i=1,j,temp;
//    char hexadecimalNumber[100];
//    
//    printf("Enter any decimal number: ");
//    scanf("%ld",&decimalNumber);
//    
//    quotient = decimalNumber;
//    
//    while(quotient!=0){
//        temp = quotient % 16;
//        
//        //To convert integer into character
//        if( temp < 10)
//            temp =temp + 48;
//        else
//            temp = temp + 55;
//        
//        hexadecimalNumber[i++]= temp;
//        quotient = quotient / 16;
//    }
//    
//    printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
//    for(j = i -1 ;j> 0;j--)
//        printf("%c",hexadecimalNumber[j]);
//    
//    return 0;
//}

//Decimal to Octal

//int main(){
//    
//    long int decimalNumber,remainder,quotient;
//    int octalNumber[100],i=1,j;
//    
//    printf("Enter any decimal number: ");
//    scanf("%ld",&decimalNumber);
//    
//    quotient = decimalNumber;
//    
//    while(quotient!=0){
//        octalNumber[i++]= quotient % 8;
//        quotient = quotient / 8;
//    }
//    
//    printf("Equivalent octal value of decimal number %d: ",decimalNumber);
//    for(j = i -1 ;j> 0;j--)
//        printf("%d",octalNumber[j]);
//    
//    return 0;
//}


//Decimal to Binary

//int main(){
//    
//    long int decimalNumber,remainder,quotient;
//    
//    int binaryNumber[100],i=1,j;
//    
//    
//    printf("Enter any decimal number: ");
//    
//    scanf("%ld",&decimalNumber);
//    
//    
//    quotient = decimalNumber;
//    
//    
//    while(quotient!=0){
//        
//        binaryNumber[i++]= quotient % 2;
//        
//        quotient = quotient / 2;
//        
//    }
//    
//    
//    printf("Equivalent binary value of decimal number %d: ",decimalNumber);
//    
//    for(j = i -1 ;j> 0;j--)
//        
//        printf("%d",binaryNumber[j]);
//    
//    
//    return 0;
//    
//}

//Binary to Decimal

//int main(){
//    
//    long int binaryNumber,decimalNumber=0,j=1,remainder;
//    
//    printf("Enter any number any binary number: ");
//    scanf("%ld",&binaryNumber);
//    
//    while(binaryNumber!=0){
//        remainder=binaryNumber%10;
//        decimalNumber=decimalNumber+remainder*j;
//        j=j*2;
//        binaryNumber=binaryNumber/10;
//    }
//    
//    printf("Equivalent decimal value: %ld",decimalNumber);
//    
//    return 0;
//}


//int powerfunc(int, int);
//int main()
//{
//    int d[100];
//    int n,decimalno=0;
//    int j,f;
//    j = 0;
//    printf("Enter number of bit places to be calculated \n");
//    scanf("%d",&n);
//    printf("Enter binary number one digit at a time, press enter after each digit has been entered \n");
//    for( int i=0;(i=0);i--)
//    {
//        int dec=(d[i]*power(2,j))+decimalno;
//        j++;
//    }
//    printf("The binary ouput of the input decimal number %d is",decimalno);
//    getchar();
//}
//int powerfunc(int x, int y)
//{
//    int power=1;
//    int i=1;
//    while(i<=y)
//    {
//        power=power*x;
//        i++;
//    }
//    return power;
//}

//int main(int argc, const char * argv[]) {
//    char c;
//    while ((c = getchar()) != EOF){
//        if (c == '\n'){
//            printf("return \n");
//        }
//    }
//}