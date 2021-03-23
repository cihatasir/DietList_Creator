#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>


const char* meatFoods[] = {"Tas Kebabi","Firinda Tavuk","Tavuklu Makarna","Et Sote","Alinazik","Kadinbudu Kofte","Kofte","Tavuk Sote","Haslama"};
const char* vegetablesFood[] = {"Patates Yemegi","Fasulye Yemegi","Bezelye Yemegi","Kabak Yemegi","Ispanak Yemegi","Brokoli Yemegi","Karnabahar"};
const char* saladVegetables[] = {"Kuru Fasulye Salatasi","Cokelek Salatasi","Peynir Ezmesi","Kuskus Salatasi","Coban Salatasi","Avokado Salatasi","Mevsim Salatasi"};
const char* sweets[] = {"Sufle","Sutlac","Tavuk Gogsu","Puding","Kadayif","Havuc Tatlisi","Irmik Helvasi","Muhallebi"};
const char* snack[] = {"Badem","Findik","Fistik","Kuru Kayisi","Ceviz","Mevsim Meyveleri","Meyveli Yogurt","Leblebi","Karisik Kuruyemis"};
const char* lowCalorieBreakfast[] = {"Nohutlu Pankek","Lor Peynirli Omlet","Mantarli Yumurta","Recelli Ekmek","Rafadan Yumurta","Muzlu Smoothie"};
const char* highCalorieBreakfast[] = {"Sucuklu Yumurta","Pastirmali Yumurta","Yulaf Ezmesi"}; 
const char* highCalorieBreakfast2[] = {"Omlet","Tahin Ekmek","Tereyagi Ekmek","Bal Ekmek","Kaymak Ekmek"};
const char* drinks[] = {"Meyve Suyu","Ayran","Sut","Limonata"};

void homeScreen(){
    
	printf("\t\t******************************************************************************************************");	
	printf("\n\n\t\t\t\t\t   ---> WELCOME TO DİET PROGRAM <---\n\n\t\t\t\t\t\n\n");
	printf("\n\t\t******************************************************************************************************");
	printf("\n\n\t\t\t\t\t\t | created by CIHAT ASIR |");
}

struct rudiments{
	
	char name[20];
	char surname[30];
	int age;
};

int getRudiments(struct rudiments *informationPtr)
{
		
	int i,isAlpha = 0;
		
	while(1){
			
		printf("\n\n\n\t--> Enter your name: ");
		fflush(stdin);
		scanf("%s",&informationPtr->name);
		
		for(i=0;i<strlen(informationPtr->name);i++){
			
				if(isalpha(informationPtr->name[i])){				
					
					isAlpha += 1;
				}
		}
		
		if(isAlpha != 0){
		
			isAlpha = 0;
			
			printf("\n\t--> Enter your surname: ");
			fflush(stdin);
			scanf("%s",&informationPtr->surname);
			
			for(i=0;i<strlen(informationPtr->surname);i++){			
			
				if(isalpha(informationPtr->surname[i])){				
					
					isAlpha += 1;	
				}
			
			}
			
			
			if(isAlpha != 0){
				
				isAlpha = 0;
				
				printf("\n\t--> Enter your age: ");
				fflush(stdin);
				scanf("%d",&informationPtr->age);
				
				if(informationPtr->age < 100 && informationPtr->age > 0){
					
					system("cls");						
					break;	
				}	
														
				}
					
				else
				{
					printf("\nIncorrect entry... Please try again\n");
					continue;
				}
			
			}			
			
			
			else
			{
				printf("\nIncorrect entry... Please try again\n");
				continue;
			}
			
	}
	
	
	
	printf("\n\n\t\t\t\t\t\t  Processing information into the system...\n");
	sleep(1);
	printf("\n\n\t\t\t\t********************");
	sleep(1);		                  	
	printf("********************");
	sleep(1);
	printf("*********************");
	sleep(1);
	printf("\n\n\t\t\t\t\t  Your rudiments has been successfully saved.\n\n");
			
			
			
	return 0;

}



struct indexResult{
	
	char index[20];
	int heights;
	int weights;
};

void whIndex(struct indexResult *indexPtr)
{

    int height;
    int weight;
    float index;

	while (1)
    {
        printf("Enter your weight(kg): ");
        scanf("%d",&indexPtr->weights);
		
        printf("\nEnter your height(cm): ");
        scanf("%d",&indexPtr->heights);
        
        if (indexPtr->weights <= 300 && indexPtr->heights <= 250) 
        {
            
            index = (indexPtr->weights / pow(indexPtr->heights,2))*10000; 
    
            if(index > 1.00 && index <= 18.5)
            {
                system("cls");
				printf("\n\n\t\t\t\t\t\tYour index result: Weak\n");
				strcpy(indexPtr->index,"weak");                      				
				break;                
            }
                 
            else if(index >18.5 && index <= 24.9)
            {
                system("cls");
				printf("\n\n\t\t\t\t\t\tYour index result: Normal");
               	strcpy(indexPtr->index,"normal");  
				break;
                    
            }
                
            else if(index > 24.9)
            {
                system("cls");
				printf("\n\n\t\t\t\t\t\t Your index result: Pounds");
                strcpy(indexPtr->index,"pounds");  
				break;              
            }
                   
                           
            else
            {
                printf("Incorrect entry.");
                continue;
            }
        }
        
        else
        {
            printf("Incorrect entry.");
            continue;
        }
    
    } 
	
	printf("\n\n\t\t\t\t     --------| Now it's time to learn your taste buds |--------\n");
	

}

void showBasicInfo(struct rudiments *informationPtr,struct indexResult *indexPtr)
{	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t  |*******														|");
	usleep(190000);
	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t  |*********************										|");
	usleep(190000);
	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t  |*******************************								|");
	usleep(190000);
	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t  |***************************************						|");
	usleep(190000);
	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t  |*************************************************			|");
	usleep(190000);
	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t  |***********************************************************	|");
	usleep(190000);
	
	system("cls");
	printf("\n\n\t\t\t\t\t\tCreating Your List...\n");
	printf("\n\t\t\t|***************************************************************|");
	
	system("cls");
	
	printf("\n\n\n\t\t\t\t\t      YOUR DIET LIST HAS BEEN SUCCESSFULLY CREATED !");
	printf("\n\n\t\t\t\t\t\t YOUR INFORMATION IS AS FOLLOWS.\n\n");
	printf("\t\t\t          ---------------------------------------------------------\n\n");
	printf("\n\n\t\t\t\t\t\tNAME: %s\n\n",informationPtr->name);
	printf("\t\t\t\t\t\tSURNAME: %s\n\n",informationPtr->surname);
	printf("\t\t\t\t\t\tAGE: %d\n\n",informationPtr->age);
	printf("\t\t\t\t\t\tH: %d cm\n\n",indexPtr->heights);
	printf("\t\t\t\t\t\tWEIGHT: %d kg\n\n",indexPtr->weights);
}


struct foodSelecionStr{
	
	char meatStr[2];
	char sweetStr[2];
};

void foodSelection(struct foodSelecionStr *foodSelectionPtr)
{
	char meat,sweet;
	
	while(1){
	
		printf("\nDo you like meat?[Y/N]: ");
		fflush(stdin);
		scanf("%c",&meat);
		
		if(meat == 'Y' || meat == 'y')
		{
			strcpy(foodSelectionPtr->meatStr,"y");
				
			printf("\nDo you like sweet[Y/N]: ");
			fflush(stdin);
			scanf("%c",&sweet);
				
			if(sweet == 'Y' || sweet == 'y')
			{
				strcpy(foodSelectionPtr->sweetStr,"y");
				break;
			}
				
			else if(sweet == 'N' || sweet == 'n')
			{
				strcpy(foodSelectionPtr->sweetStr,"n");
				break;
			}
				
			else
			{
				printf("\nIncorrect entry.");
				continue;
			}		
									
		}
			
			
		else if(meat == 'N' || meat == 'n')
		{
			
			strcpy(foodSelectionPtr->meatStr,"n");

			printf("\nDo you like swet[Y/N]: ");
			fflush(stdin);
			scanf("%c",&sweet);
			
			if(sweet == 'Y' || sweet == 'y')
			{
				strcpy(foodSelectionPtr->sweetStr,"y");
				break;
			}
				
			else if(sweet == 'N' || sweet == 'n')
			{
				strcpy(foodSelectionPtr->sweetStr,"n");
				break;
			}
				
			else
			{
				printf("\nIncorrect entry.");
				continue;
			}		
		}
			
	}
	
	
}


struct foodList{ 
	
	char breakfast1[20];
	char breakfast2[20];
	char mainLunch[20];
	char lunchSalad[20];
	char lunchSweet[20];
	char lunchDrink[20];
	char mainDinner[20];
	char dinnerSalad[20];
	char dinnerSweet[20];
	char dinnerDrink[20];
	char snack[20];
	
};


void creatingList(struct rudiments *informationPtr, struct indexResult *indexPtr,struct foodSelecionStr *foodSelectionPtr,struct foodList *foodPtr)
{
	
	int random,i=0,n;
	int hmDays,hmWeek;
		
	while(1)
	{
		
		printf("\n\n--> 1 WEEK\n--> 2 WEEK\n--> 3 WEEK\n--> 4 WEEK");
		printf("\n\nHow Many Weeks Will Your Diet List That We Will Create For You: "); 
		scanf("%d",&hmWeek);

		if(hmWeek == 1){
			hmDays = 7;
			break;
		}
		
		else if (hmWeek == 2){
			hmDays = 14;
			break;
		}
		
		if(hmWeek == 3){
			hmDays = 21;
			break;
		}
		
		if(hmWeek == 4){
			hmDays = 28;
			break;
		}
		else{
			printf("\n\n\tIncorrect entry.");
			continue;
		}

	}
			
		srand(time(0));						
				
		while(hmDays != 0)
		{
			i++;
			
			FILE *filE = fopen("Diet_List.txt","a+");	
						
				if(strstr(indexPtr->index,"weak"))
				{					

					n = rand()%2; 
					strcpy(foodPtr->breakfast1, highCalorieBreakfast[n]);
					
					n = rand()%4;
					strcpy(foodPtr->breakfast2, highCalorieBreakfast2[n]);
		
					if(strstr(foodSelectionPtr->meatStr,"y"))
					{
						n = rand()%8;
						strcpy(foodPtr->mainLunch,meatFoods[n]);
																	
						n = rand()%6;
						strcpy(foodPtr->lunchSalad,saladVegetables[n]);
						
																															
						if(strstr(foodSelectionPtr->sweetStr,"y"))
						{
						
							n = rand()%7;
							strcpy(foodPtr->lunchSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);
							
							n = rand()%8;
							strcpy(foodPtr->mainDinner,meatFoods[n]);			
									
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);			
							
							n = rand()%7;
							strcpy(foodPtr->dinnerSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);	
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast:%s %s\n\nLunch: %s %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->lunchSweet,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink,foodPtr->dinnerSweet);
							fclose(filE);
							continue;
						}	
				
						if(strstr(foodSelectionPtr->sweetStr,"n"))
						{
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);			
							
							n = rand()%8;
							strcpy(foodPtr->mainDinner,meatFoods[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);		
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);	
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink);
							fclose(filE);
							continue;
																
						}	
						
						else{

							continue;
						}
						
								
					}
					
					if(strstr(foodSelectionPtr->meatStr,"n"))
					{
					
						n = rand()%6;
						strcpy(foodPtr->mainLunch,vegetablesFood[n]);
																	
						n = rand()%6;
						strcpy(foodPtr->lunchSalad,saladVegetables[n]);
					
						if(strstr(foodSelectionPtr->sweetStr,"y"))
						{
							
							n = rand()%7;
							strcpy(foodPtr->lunchSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);	
											 
											 
							n = rand()%6;
							strcpy(foodPtr->mainDinner,vegetablesFood[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
							
							n = rand()%7;
							strcpy(foodPtr->dinnerSweet,sweets[n]);
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->lunchSweet,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink,foodPtr->dinnerSweet);
							fclose(filE);
							continue;
							
						}
					
						if(strstr(foodSelectionPtr->sweetStr,"n"))
						{
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);		
							
							n = rand()%6;
							strcpy(foodPtr->mainDinner,vegetablesFood[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink);
							fclose(filE);
							continue;							
						
						}
						
						else{

							continue;
						}
						
						
					
					}
					
					else{

							continue;
						}
			
			
				}	
				
			
			///////////////////////////////////////////////////////////////////////////////////
			
				
				if(strstr(indexPtr->index,"normal"))
				{
					
					n = rand()%2;
					strcpy(foodPtr->breakfast1,highCalorieBreakfast[n]);

					n = rand()%4;
					strcpy(foodPtr->breakfast2, highCalorieBreakfast2[n]);
		
					if(strstr(foodSelectionPtr->meatStr,"y"))
					{
						n = rand()%8;
						strcpy(foodPtr->mainLunch,meatFoods[n]);
																	
						n = rand()%6;
						strcpy(foodPtr->lunchSalad,saladVegetables[n]);
						
																																				
						if(strstr(foodSelectionPtr->sweetStr,"y"))
						{
						
							n = rand()%7;
							strcpy(foodPtr->lunchSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);
							
							n = rand()%8;
							strcpy(foodPtr->mainDinner,meatFoods[n]);		
									
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);		
							
							n = rand()%7;
							strcpy(foodPtr->dinnerSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->lunchSweet,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink,foodPtr->dinnerSweet);
							fclose(filE);
							continue;
							
						}	
				
						if(strstr(foodSelectionPtr->sweetStr,"n"))
						{
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);			
							
							n = rand()%8;
							strcpy(foodPtr->mainDinner,meatFoods[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);		
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);	
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink);
							fclose(filE);
							continue;
																
						}	
						
						else{
							
							continue;
							
						}
						
								
					}
					
					if(strstr(foodSelectionPtr->meatStr,"n"))
					{
					
						n = rand()%6;
						strcpy(foodPtr->mainLunch,vegetablesFood[n]);
																	
						n = rand()%6;
						strcpy(foodPtr->lunchSalad,saladVegetables[n]);
					
						if(strstr(foodSelectionPtr->sweetStr,"y"))
						{
							
							n = rand()%7;
							strcpy(foodPtr->lunchSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);
											 
											 //
											 
							n = rand()%6;
							strcpy(foodPtr->mainDinner,vegetablesFood[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
							
							n = rand()%7;
							strcpy(foodPtr->dinnerSweet,sweets[n]);
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s %s\n\nSnack: %s\n\nLunch: %s %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->lunchSweet,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink,foodPtr->dinnerSweet);
							fclose(filE);
							continue;
							
							
						}
					
						if(strstr(foodSelectionPtr->sweetStr,"h"))
						{
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
							n = rand()%8;
							strcpy(foodPtr->snack,snack[n]);		
							
												//
							
							n = rand()%6;
							strcpy(foodPtr->mainDinner,vegetablesFood[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
														
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s\n\nSnack: %s\n\nDinner: %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->snack,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink);
							fclose(filE);
							continue;
													
						}
						
						else{
							
							continue;
							
						}

					}
					
					else{
							
							continue;
							
						}
				
				
				}
						
				if(strstr(indexPtr->index,"pounds"))
				{
				
					n = rand()%5;
					strcpy(foodPtr->breakfast1,lowCalorieBreakfast[n]);

					if(strstr(foodSelectionPtr->meatStr,"y"))
					{
						n = rand()%8;
						strcpy(foodPtr->mainLunch,meatFoods[n]);
																	
						n = rand()%6;
						strcpy(foodPtr->lunchSalad,saladVegetables[n]);
						
																																				
						if(strstr(foodSelectionPtr->sweetStr,"y"))
						{
						
							n = rand()%7;
							strcpy(foodPtr->lunchSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
													
							n = rand()%8;
							strcpy(foodPtr->mainDinner,meatFoods[n]);		
									
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);			
													
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s %s\n\nDinner: %s %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->lunchSweet,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink,foodPtr->dinnerSweet);
							fclose(filE);
							continue;
						}	
				
						if(strstr(foodSelectionPtr->sweetStr,"n"))
						{
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);	
							
							n = rand()%8;
							strcpy(foodPtr->mainDinner,meatFoods[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);		
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);
							
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s\n\nDinner: %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink);
							fclose(filE);
							continue;									
						}	
						
						else
						{
							continue;
						}
						
								
					}
					
					if(strstr(foodSelectionPtr->meatStr,"n"))
					{
					
						n = rand()%6;
						strcpy(foodPtr->mainLunch,vegetablesFood[n]);
																	
						n = rand()%6;
						strcpy(foodPtr->lunchSalad,saladVegetables[n]);
					
						if(strstr(foodSelectionPtr->sweetStr,"y"))
						{
							
							n = rand()%7;
							strcpy(foodPtr->lunchSweet,sweets[n]);
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
							
									 
											 //
											 
							n = rand()%6;
							strcpy(foodPtr->mainDinner,vegetablesFood[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);

							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s %s\n\nDinner: %s %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->lunchSweet,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink,foodPtr->dinnerSweet);
							fclose(filE);
							continue;
						}
					
						if(strstr(foodSelectionPtr->sweetStr,"n"))
						{
							
							n = rand()%3;
							strcpy(foodPtr->lunchDrink,drinks[n]);
													
												//
							
							n = rand()%6;
							strcpy(foodPtr->mainDinner,vegetablesFood[n]);
							
							n = rand()%6;
							strcpy(foodPtr->dinnerSalad,saladVegetables[n]);
							
							n = rand()%3;
							strcpy(foodPtr->dinnerDrink,drinks[n]);	
														
							hmDays--;
							fprintf(filE,"\n\t\t%d.Day\n\nBreakfast: %s %s\n\nLunch: %s %s %s\n\nDinner: %s %s %s\n\n",i,foodPtr->breakfast1,foodPtr->breakfast2,foodPtr->mainLunch,foodPtr->lunchSalad,foodPtr->lunchDrink,foodPtr->mainDinner,foodPtr->dinnerSalad,foodPtr->dinnerDrink);
							fclose(filE);
							continue;
						}
						
						else
						{
							continue;
						}
						
											
					}
					
					else{
							continue;
						}
			
	
				}

	}

}
	

int main(int argc, char** argv) {
    
   
    system("color 3");
    
	homeScreen();
    
    struct rudiments infoMain;
	getRudiments(&infoMain);
		
	struct indexResult indexMain;
	whIndex(&indexMain);
	
	struct foodSelecionStr foodMain;
	foodSelection(&foodMain);
	
	struct foodList eatMain;
	creatingList(&infoMain,&indexMain,&foodMain,&eatMain);
		
	showBasicInfo(&infoMain,&indexMain);
	
	return 0;

}







