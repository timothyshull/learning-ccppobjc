#include <stdio.h>

/*A program to see how diffent data types can be printed using printf
*See the conversion characters with % for the various data types
*/
int main()
{
    //Character strings
   char *message="Printing different data types";
   wchar_t *wmessage=L"Wide Character string";

   //Characters
   char ca='A';
   wchar_t wca=L'A';

   //Integer Data types
   unsigned short usa=65535; short ssb=-32768;
   unsigned int usi=4294967295; int ssi=-2147483648;
   unsigned long long int ulli=4294967295L;long long int lli=-2147483647L;

   //Floating point Data types
   float fa=1e+37,fb=1e-37;
   double da=1e+37,db=1e-37;
   long double lda=1e+37L,ldb=1e-37L;

   //Pointers
   int *p=&ssi;

   //Character strings
   printf("%s\n",message);
   printf("%ls\n\n",wmessage);

   //Character strings
   printf("%c\n",ca);
   printf("%lc\n\n",wca);

   printf("%hu %hi\n",usa,ssb); //short
   printf("%hx %hx\n\n",usa,ssb);

   printf("%u %i\n",usi,ssi); //integer/long integers
   printf("%x %x\n\n",usi,ssi);

   printf("%llu %lli\n",ulli,lli); //long long integers
   printf("%llx %llx\n\n",ulli,lli);

   printf("%f %f\n",fa,fb); //float

   printf("%f %f\n",da,db); //double
   printf("%e %e\n\n",da,db);

   printf("%llf %llf\n",lda,ldb); //long double
   printf("%lle %lle\n\n",lda,ldb);

   printf("%p\n\n",p); //pointer of any data type

}