




#include  <stdio.h>
#include <stdlib.h>
#include <string.h>



int n = 76;


extern int f;

int main()
{
	
	
	printf("Pi = %d\n", f);
	

	switch( n )
	{
		
		case  1:  printf("1\n");
		          break;

		case  4:  printf("4\n");
		          break;
		          
		case  7:  printf("7\n");
		          

		case  9:  printf("9\n");
		          
				  
		case 11:  printf("11\n");
		          break;

		case 14:  printf("14\n");
		          break;
				  
		default:  printf("Nichego ne poimal\n");
		        		  		  				  		
	}
}



















/*

		          


*/








































/*
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

 

 
 
struct myData
{
	
	   int old;
	
	
	   char szName[100];
	
} ;                                                                                             //  31 * 104
 
 
 
 
 
int              nArr[6677];                              ///  4 

struct myData    Pupils[31];                              // 104

 
 
void foo(struct myData*);



    
 
////////////////////////////////////////////////////////////////////////////////////
int main()                                                                        //
{
	
	
	Pupils[7].old = 12;
	
	strcpy(Pupils[7].szName, "Dima");
	
	int i; 
	
	
	printf("Pupils[%d].old = %s\n", 7, Pupils[7].szName);
    //printf("%d", 55);
    
	foo(&Pupils[7]);

    printf("Pupils[%d].old = %s\n", 7, Pupils[7].szName);

//	foo( Pupils);
//	foo(&Pupils[0]);	
}


////////////////////////////////////////////////////////////////////////////////////
void foo(struct myData *s)                                                                        //
{
	
    int mp;
   
    char tmp[32];
   
 //   mp = s->old;
  
    mp = (*s).old; 
   
    itoa(mp, tmp, 10);

	strcat((*s).szName, "_");
    strcat((*s).szName, tmp); 	
	
//	strcat(s -> szName, "_");
//	strcat(s -> szName, tmp); 
	
}




*/




















//   ������� �2
//  ------------
//   C������� �������, ������� ��������� ����� �������� ��������� myData.
//   ������ ������� ������ ���� ������������� ��� ������� (� ����� ��������� �������)
//   �������� ���: Dima_12 









/*
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

 

 
 
struct myData
{
	
	   int old;
	
	
	   char szName[100];
	
} ;                                                                                             //  31 * 104
 
 
 
 
 
int              nArr[6677];                              ///  4 

struct myData    Pupils[31];                              // 104

 
 
////////////////////////////////////////////////////////////////////////////////////
int main()                                                                        //
{
	
	
	Pupils[7].old = 12;
	
	strcpy(Pupils[7].szName, "Dima");
	
	int i; 
	
	
	printf("Pupils[%d].old = %s\n", 7, Pupils[8].szName);
	
	
	
    strcpy(Pupils[12].szName, "Daniil");
    Pupils[12].old = 13;
	
	
	strcpy(Pupils[ 4].szName, Pupils[ 7].szName);
	strcat(Pupils[ 7].szName, Pupils[12].szName);
	strcat(Pupils[12].szName, Pupils[ 4].szName);	
	
	printf("Pupils[%d].szName = %s\n", 7, Pupils[ 7].szName);
	printf("Pupils[%d].szName = %s\n",12, Pupils[12].szName);	
//    printf("%d", 55);
		
}

*/

























//  ��� ����� (������) �������:
//  ������� �1
//  ------------
//  1) ������������������ 12-�� ������� (������� � ���)
//  2) ��������� � ����� 7-�� ������� ��� 12-�� ������� 
//  3) � �������� � ����� 12-�� ������� ��������� ��� 7-�� �������

//  ������� �2
//  ------------
//  C������� �������, ������� ��������� ����� �������� ��������� myData.
//   ������ ������� ������ ���� ������������� ��� ������� (� ����� ��������� �������)
//   �������� ���: Dima_12 



/*


#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
 
 
 
struct myData
{
 
       int old;                                     //  31 * 100 = 3100
 
       char szName[96];
       
       //int Pupils[31];
 
} ;
 
int              nArr[6677];                              // ������������� ������ � ��������� �� 6677 ���������
 
struct myData    Pupils[31];                              // ������ � ��������� ������ Pupils 31 ���������
 
 

void   fsa(struct myData *);
 
 
 
 
 
 
 
////////////////////////////////////////////////////////////////////////////////////
int main()                                                                        //
{
 
 
    Pupils[7].old = 12;
   
    strcpy(Pupils[7].szName, "Dima");
 
    Pupils[12].old = 13;
   
    //strcpy(Pupils[12].szName, "Daniil");
   
 
    //printf("Pupil name: %s old [%d]\n", Pupils[12].szName, Pupils[12].old); //1
   
    //strcat(Pupils[7].szName, "Daniil");
   
    strcat(Pupils[7].szName, Pupils[12].szName);
   
    char tmp[128];
   
    //printf("Pupil  name: [%s]\n", Pupils[7].szName);
   
   
    //strcat(Pupils[12].szName, Pupils[7].szName); //2
   
    strcat(Pupils[12].szName, "Dima");
   
    //printf("Pupil  name: [%s]", Pupils[12].szName);
   
    fsa(Pupils);
   
   
   
 
}
 
/////////////////////////////////////////////////////////////////////////////////
void fsa(struct myData *Pupils1)   
{
	
    int mp;
   
    char tmp[32];
   
    mp = Pupils1[7].old;
   
    itoa(mp, tmp, 10);
   
    //printf("element [%s]\n ", tmp);
   
    strcat(Pupils[7].szName, "_ ");   
    strcat(Pupils[7].szName, tmp );
   
    printf("addres elementa [%d] \n", &Pupils[7].szName);
   
    printf("element [%s] ", Pupils[7].szName);
}
                                       
 */
 
//  ��� ����� (������) �������:
//  ������� �1
//  ------------
//  1) ������������������ 12-�� ������� (������� � ���)
//  2) ��������� � ����� 7-�� ������� ��� 12-�� �������
//  3) � �������� � ����� 12-�� ������� ��������� ��� 7-�� �������
 
//  ������� �2
//  ------------
//   �������� �������, ������� ��������� ����� �������� ��������� myData.
//   ������ ������� ������ ���� ������������� ��� ������� (� ����� ��������� �������)
//   �������� ���: Dima_12

















/*


#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

 

 
 
struct myData
{
	
	   int old;
	
	
	   char szName[100];
	
} ;                                                                                             //  31 * 104
 
 
 
 
 
int              nArr[6677];                              ///  4 

struct myData    Pupils[31];                              // 104

 
 
////////////////////////////////////////////////////////////////////////////////////
int main()                                                                        //
{
	
	
	Pupils[7].old = 12;
	
	strcpy(Pupils[7].szName, "Dima");
	
	int i; 
	
	
	printf("Pupils[%d].old = %s\n", 7, Pupils[8].szName);
    printf("%d", 55);
		
}





*/





















//  ��� ����� (������) �������:
//  ������� �1
//  ------------
//  1) ������������������ 12-�� ������� (������� � ���)
//  2) ��������� � ����� 7-�� ������� ��� 12-�� ������� 
//  3) � �������� � ����� 12-�� ������� ��������� ��� 7-�� �������

//  ������� �2
//  ------------
//  C������� �������, ������� ��������� ����� �������� ��������� myData.
//   ������ ������� ������ ���� ������������� ��� ������� (� ����� ��������� �������)
//   �������� ���: Dima_12 

















/*

int foo()
{
	
return 99;	
}



*/


















//	for(i = 3; i < 14; i++) printf("Pupils[%d].old = %d\n", i, Pupils[i].old);


















/*
#include <stdio.h>
#include <stdlib.h>
 
#define STRDIST 128
 
 
 
 
 
int StrLen(const char[]); //read char read only
 
 
 
 
 
////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])                                                  //
{
	
    char str [STRDIST];
   
    printf("input string: ");
   
    scanf("%s", &str);
    
    printf("dlina str = %d", StrLen(str));
         
return 0;
}
 
 
 
 
 
////////////////////////////////////////////////////////////////////////////////////
int StrLen(const char str[])                                                      //                 
{
	
    int i; 
   
    for(i=0; str[i]; i++);
   
return i;
}
*/




















/*

#include <stdio.h>
#include <stdlib.h>
 
 
void StrCatf(char *, char *);
 
///////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])                                         //
{  
	
    char str[128], str2[128];
   
    printf("input string1: ");
   
    scanf("%s", &str);
   
    printf("input string2: ");
   
    scanf("%s", &str2);
   
    StrCatf(str, str2);
   
    printf("str = %s", str);   
   
return 0;
}
 
//////////////////////////////////////////////////////////////////////////
void StrCatf(char *str_1, char *str_2)                                  //
{  
	
    int i,j;
   
    for (i = 0; str_1[i] > 0; i++ ); //���������� ����� ������ ������
   
    i-=2;
   
    for (j = 0 ; str_2[j] >0; j++) str_1[i++] + str_2[j]; //��������� ������� � ����� ������ ������ ��������� ������ ������ ��� ����� ������ ������
}




*/














/*



#include <stdio.h>
#include <stdlib.h>
 
 
char sz1[100] = "SONY ";
 
char sz2[100] = "Pictures"; 
 
void  str_cat(char *, char *); 
void  StrCatf(char *, char *); 
 
 
 
/////////////////////////////////////////////////////
int main()                                         //
{  
	
//	str_cat(sz1, sz2);
	StrCatf(sz1, sz2);
	printf("sz1 = %s", sz1); 
}




/////////////////////////////////////////////////////
void  str_cat(char *sz1, char *sz2)                //  
{
	
	  
    int i, j;
   
    for (i = 0; sz1[i] != 0; i++);                                                  // ���������� ����� ������ ������	
	
	printf("i = %d\n", i);
	
	
	for(j = 0; sz2[j] != 0; j++)
	{
		
	 	sz1[i++] = sz2[j];
	}
	
}



void StrCatf(char *str_1, char *str_2)
{  
    int i, j;
   
    for (i = 0; str_1[i] > 0; i++ );                                                 //���������� ����� ������ ������
   
   
    for (j = 0 ; str_2[j] >0; j++) str_1[i++] = str_2[j]; //��������� ������� � ����� ������ ������ ��������� ������ ������ ��� ����� ������ ������
}





*/



























/*
#include  <stdio.h>
#include <stdlib.h>







int main() 
{
	
	
	
	
	
return 0;
}



*/
