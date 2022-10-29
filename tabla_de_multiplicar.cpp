#include <iostream>
using namespace std;
int t(int n);
main()


{  int n;
	 printf("\t******TABLA DE MULTIPLICAR ******\n\n\n");
	 printf("ingrese el numero que desea ver la tabla de multiplicar: ");
	 scanf("%d",&n);
	 t(n);
	
}
 
int t(int n)
{
	 int e[10];
	 int i;
 
	 for(i=0; i< 10; i++)
	 e[i] = n*(i+1);
 
	 printf("\n\n la tabla del %d es: \n",n);
	 for(i=0; i < 10; i++)
	 printf("%d x %d = %d\n",n, (i+1), e[i]);
}
