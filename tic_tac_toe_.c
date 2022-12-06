#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int find_result (int n,int x, int result[])
{
	
	
	result[x]= n;
	
	
	
	
	if ((result[0] == result[1]) && (result[1] == result[2] )){
		return 1;
	}
	
	else if (result[3] == result[4] && result[4] == result[5]){
		return 1;
	}
	
	
	else if (result[6] == result[7] && result[7] == result[8]){
		return 1;
	}
	
	else if (result[0] == result[3] && result[3] == result[6]){
		return 1;
	}
	
	else if (result[1] == result[4] && result[4] == result[7]){
		return 1;
	}
	
	else if (result[2] == result[5] && result[5] == result[8]){
		return 1;
	}
	else if (result[0] == result[4] && result[4] == result[8]){
		return 1;
	}
	
	else if (result[2] == result[4] && result[4] == result[6]){
		return 1;
	}
	
	else {
	return 0;
	}
	
	
}

int main()
{
    int result[9];
    int resul[9];
    int array[9];        
    int selection,i,r,loser,sira=2,z=0,best_of,p1=0,p2=0;
    char block[10];
    char oyuncu1[50];
    char oyuncu2[50];
    
    
    printf("1. oyuncu isminizi giriniz: ");
    gets(oyuncu1);
    printf("2. oyuncu isminizi giriniz: ");
    gets(oyuncu2);
	
	printf("best of [1,3,5,7]: ");
	scanf("%d",&best_of);
	
	while (z<best_of){
	
		sira++;
	
		for(i=0;i<10;i++)
		{
			block[i] = (' ');
			}
			
		for(i=0;i<9;i++)
		{
			resul[i] = i+100;
			}
		for(i=0;i<9;i++)
		{
			result[i] = i+100;
			}
		for(i=0;i<9;i++)
		{
			array[i] = 0;
			}
	    i=0;        
	    				printf("_____________________\n");
					    printf("|   1  |   2  |   3  |\n");
					    printf("|   %c  |   %c  |   %c  |\n",block[0],block[1],block[2]);
					    printf("|______|______|______|\n");
					    printf("|   4  |   5  |   6  |\n");
					    printf("|   %c  |   %c  |   %c  |\n",block[3],block[4],block[5]);
					    printf("|______|______|______|\n");
					    printf("|   7  |   8  |   9  |\n");
					    printf("|   %c  |   %c  |   %c  |\n",block[6],block[7],block[8]);
					    printf("|______|______|______|\n");
	    while (i<9)
		{	
		printf("\nSelect your block: ");
		scanf("%d",&selection);
		
		
		
			
		if (selection >0 && selection <10)			
			{
			
				if (array[selection-1] != -1)
				{
					system("cls");
					array[selection-1]=-1;
					i+=1;
					sira++;
					
						
						if (sira%2 == 0)
						{
							block[selection-1]='X';
							resul[selection-1]=2;
							
						}
						else
						{
							block[selection-1]='O';
							resul[selection-1]=1;
						}
						
						
					    printf("_____________________\n");
					    printf("|   1  |   2  |   3  |\n");
					    printf("|   %c  |   %c  |   %c  |\n",block[0],block[1],block[2]);
					    printf("|______|______|______|\n");
					    printf("|   4  |   5  |   6  |\n");
					    printf("|   %c  |   %c  |   %c  |\n",block[3],block[4],block[5]);
					    printf("|______|______|______|\n");
					    printf("|   7  |   8  |   9  |\n");
					    printf("|   %c  |   %c  |   %c  |\n",block[6],block[7],block[8]);
					    printf("|______|______|______|\n");
						
						
						
						
						
						r= find_result(resul[selection-1],selection-1,result);
						
						if (r==1){
							if (block[selection-1]== 'X')
							{
								p1++;
							}
							else if (block[selection-1]== 'O')
							{							
								p2++;								
							}
							system("cls");
							printf("\nWINNER OF THE ROUND IS ==> %s <==",oyuncu1);
							printf("\nLOSER OF THE ROUND IS  ==> %s <== \n",oyuncu2);																					
							printf("\nSCORES");
							printf("\n%s ==> %d",oyuncu1,p1);
							printf("\n%s ==> %d",oyuncu2,p2);
							
							z++;
							getch();
							
							
							system("cls");
							
							
							break;
						}
						else{
						}
						loser=block[selection-1];
				}
				else {
					printf("\nblock already chosen, choose another block\n");
				}				
			}
			else
			{
				printf("\ninvalid block\n");
			}
			
			
			
		}
		
	    
	    if (find_result(resul[selection-1],selection-1,result)==0){
	    	printf("\nIt is DRAW\n\n");
	    	printf("\nSCORES");
			printf("\n%s ==> %d",oyuncu1,p1);
			printf("\n%s ==> %d",oyuncu2,p2);
			getch();
		    	z++;
			system("cls");
	    	
		}
		else{
		}
		
		
		sira++;
		
		
		
}


if (p1>p2){
	printf("WINNER OF THE GAME IS %s",oyuncu1);
}
else if (p1<p2){
	printf("WINNER OF THE GAME IS %s",oyuncu2);
}
else if (p1=p2){
	printf("GAME DRAW");
}


    
    return 0;
}
