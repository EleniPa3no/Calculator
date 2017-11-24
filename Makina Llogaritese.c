#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <time.h>

		
int main(){
	int nr1,nr2;
	int cmd;
	float a,b,c;
	
	printf("\n\t\t\tWelcome to my program\n\n");
	printf("\t\t\t\t  *  *\n\n\t\t\t\t*       *\n\t\t\t\t *     *\n\t\t\t\t   * *\n\n\n");
		Sleep (2000);
		
		
	  	
		for(;;){
		printf("\n> Per shumezim, shtypni 1.\n> Per pjesetim, shtypni 2.\n> Per mbledhje, shtypni 3.\n> Per zbritje, shtypni 4");
		printf("\n> Per fuqi, shtypni 5\n> Per mbetje, shtypni 6 \n> Per rrenje katrore, shtypni 7.\n\nPer te dale nga programi, shtypni 0.	");
		
		printf("\nJepni komanden: ");
		scanf("%d",&cmd);
		
		
		switch(cmd){
			
			case 1: 
				printf("\nJepni 2 numrat: ");
				scanf("%d %d",&nr1,&nr2);
				printf("\n%d * %d = %d",nr1,nr2,nr1*nr2);
				printf("\n\n");
				
				
				break;
				
			case 2:
				printf("\nJepni 2 numrat: ");
				scanf("%d %d",&nr1,&nr2);
				printf("\n%d / %d = %d",nr1,nr2,nr1/nr2);
				printf("\n\n");
				break;
				
			case 3:
				printf("\nJepni 2 numrat: ");
				scanf("%d %d",&nr1,&nr2);
				printf("\n%d + %d = %d",nr1,nr2,nr1+nr2);
				printf("\n\n");
				break;
				
			case 4:
				printf("\nJepni 2 numrat: ");
				scanf("%d %d",&nr1,&nr2);
				printf("\n%d - %d = %d",nr1,nr2,nr1-nr2);
				printf("\n\n");
				break;
				
			case 5:
				printf("\nJepni bazen dhe eksponentin: ");
				scanf("%f %f",&b,&c);
				printf("\n%1.f ne fuqi %1.f eshte: %1.f",b,c,pow(b,c));
				printf("\n\n");
				break;
				
			case 6:
				printf("\nJepni 2 numrat: ");
				scanf("%d %d",&nr1,&nr2);
				printf("\nMbetja e dy numrave te dhene eshte: %d",nr1%nr2);
				printf("\n\n");
				break;
				
			case 7:
				printf("\nJepni numrin: ");
				scanf("%f",&a);
				printf("Rrenja katrore e %1.f = %1.f",a,sqrt(a));
				printf("\n\n");
				break; 
				
			case 0:
				printf("\n Have a nice time :)");
				return 0;
				
			default:
				printf("Zgjedhje e gabuar! ");
				printf("\n\n");
			} 
		}
	
	
	}

