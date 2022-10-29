#include<iostream>
using namespace	std;
main()
{int z,x,c;
	printf("ingrese el numero para determinar el nbumero perfecto si es que existe\n");

	  scanf("%d",&x);
      z=0;
      for(c=1;c<x;c++)  
         if(x%c==0) z+=c;
      if(z==x) printf("%d es perfecto\n",x);
      else printf("%d no es perfecto\n",x);
   }
	
	
	
	

