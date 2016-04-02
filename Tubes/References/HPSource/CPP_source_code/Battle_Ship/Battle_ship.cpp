/* - Battle Ship - */
/* - By Michael Marques - */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void checkShips();
void quitGame();
void targeting();

	int check[128];
	int target, hit = 0, i;
	int airpone, airptwo, airpthree, airpfour, airpfive;
	int destroypone, destroyptwo, destroypthree, destroypfour;
	int battlepone, battleptwo, battlepthree;
	int subpone, subptwo, subpthree;
	int patrolpone, patrolptwo;

	char rowone[50] = "11 12 13 14 15 16 17 18\n"; 
	char rowtwo[50] = "21 22 23 24 25 26 27 28\n";
	char rowthree[50] = "31 32 33 34 35 36 37 38\n";
	char rowfour[50] = "41 42 43 44 45 46 47 48\n";
	char rowfive[50] = "51 52 53 54 55 56 57 58\n";
	char rowsix[50] = "61 62 63 64 65 66 67 68\n";
	char rowseven[50] = "71 72 73 74 75 76 77 78\n";
	char roweight[50] = "81 82 83 84 85 86 87 88\n";
	char e;

	int airponetwo, airptwotwo, airpthreetwo, airpfourtwo, airpfivetwo;
	int destroyponetwo, destroyptwotwo, destroypthreetwo, destroypfourtwo;
	int battleponetwo, battleptwotwo, battlepthreetwo;
	int subponetwo, subptwotwo, subpthreetwo;
	int patrolponetwo, patrolptwotwo;

	char rowonetwo[50] = "11 12 13 14 15 16 17 18\n"; 
	char rowtwotwo[50] = "21 22 23 24 25 26 27 28\n";
	char rowthreetwo[50] = "31 32 33 34 35 36 37 38\n";
	char rowfourtwo[50] = "41 42 43 44 45 46 47 48\n";
	char rowfivetwo[50] = "51 52 53 54 55 56 57 58\n";
	char rowsixtwo[50] = "61 62 63 64 65 66 67 68\n";
	char rowseventwo[50] = "71 72 73 74 75 76 77 78\n";
	char roweighttwo[50] = "81 82 83 84 85 86 87 88\n";

main() {
	printf("Battle Ship\nBy Michael Marques\n");
	printf("These are the posible positions: \n");
	printf("11 ,12 ,13 ,14 ,15 ,16 ,17 ,18\n"); /* Displays posible ship positions */
	printf("21 ,22 ,23 ,24 ,25 ,26 ,27 ,28\n");
	printf("31 ,32 ,33 ,34 ,35 ,36 ,37 ,38\n");
	printf("41 ,42 ,43 ,44 ,45 ,46 ,47 ,48\n");
	printf("51 ,52 ,53 ,54 ,55 ,56 ,57 ,58\n");
	printf("61 ,62 ,63 ,64 ,65 ,66 ,67 ,68\n");
	printf("71 ,72 ,73 ,74 ,75 ,76 ,77 ,78\n");
	printf("81 ,82 ,83 ,84 ,85 ,86 ,87 ,88\n");
	printf("(3 spaces)Player 1 enter your Battle ship's poition: \n");
	printf("position1: ");          /* Gets you ships positions */
	scanf("%d", &battlepone);
	printf("position2: ");
	scanf("%d", &battleptwo);
	printf("position3: ");
	scanf("%d", &battlepthree);
	printf("(2 spaces)Enter your Patrol boat's poition: \n");
	printf("position1: ");
	scanf("%d", &patrolpone);
	printf("position2: ");
	scanf("%d", &patrolptwo);
	printf("(3 spaces)Enter your Subs's poition: \n");
	printf("position1: ");
	scanf("%d", &subpone);
	printf("position2: ");
	scanf("%d", &subptwo);
	printf("position3: ");
	scanf("%d", &subpthree);
	printf("(4 spaces)Enter your Destroyers's poition: \n");
	printf("position1: ");
	scanf("%d", &destroypone);
	printf("position2: ");
	scanf("%d", &destroyptwo);
	printf("position3: ");
	scanf("%d", &destroypthree);
	printf("position4: ");
	scanf("%d", &destroypfour);
	printf("(5 spaces)Enter your Air craft carier's poition: \n");
	printf("position1: ");
	scanf("%d", &airpone);
	printf("position2: ");
	scanf("%d", &airptwo);
	printf("position3: ");
	scanf("%d", &airpthree);
	printf("position4: ");
	scanf("%d", &airpfour);
	printf("position5: ");
	scanf("%d", &airpfive);
	printf("Here is your board: \n");
	checkShips();
	targeting();
}
void targeting(){ /* Checks if target is hit or not and if youv destroyed all enemy ships */
	for(i=0; i<64; i++) {
	getche();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("P1 here is your status: \n");
	printf("Boats position list: \n");
	printf(rowone);
	printf(rowtwo);
	printf(rowthree);
	printf(rowfour);
	printf(rowfive);
	printf(rowsix);
	printf(rowseven);
	printf(roweight);
	printf("Target: ");
	scanf("%d", &target);
	switch(target){
	case 11:
		switch(destroyponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 12:
		switch(destroyponetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 13:
		switch(destroyponetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 14:
		switch(destroyponetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 15:
		switch(destroyponetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 16:
		switch(destroyponetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 17:
		switch(destroyponetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 18:
		switch(destroyponetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 21:
		switch(destroyponetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 22:
		switch(destroyponetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 23:
		switch(destroyponetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 24:
		switch(destroyponetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 25:
		switch(destroyponetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 26:
		switch(destroyponetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 27:
		switch(destroyponetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 28:
		switch(destroyponetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 31:
		switch(destroyponetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 32:
		switch(destroyponetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 33:
		switch(destroyponetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 34:
		switch(destroyponetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 35:
		switch(destroyponetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 36:
		switch(destroyponetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 37:
		switch(destroyponetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 38:
		switch(destroyponetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 41:
		switch(destroyponetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 42:
		switch(destroyponetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 43:
		switch(destroyponetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 44:
		switch(destroyponetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 45:
		switch(destroyponetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 46:
		switch(destroyponetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 47:
		switch(destroyponetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 48:
		switch(destroyponetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 51:
		switch(destroyponetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 52:
		switch(destroyponetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 53:
		switch(destroyponetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 54:
		switch(destroyponetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 55:
		switch(destroyponetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 56:
		switch(destroyponetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 57:
		switch(destroyponetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 58:
		switch(destroyponetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 61:
		switch(destroyponetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 62:
		switch(destroyponetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 63:
		switch(destroyponetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 64:
		switch(destroyponetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 65:
		switch(destroyponetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 66:
		switch(destroyponetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 67:
		switch(destroyponetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 68:
		switch(destroyponetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 71:
		switch(destroyponetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 72:
		switch(destroyponetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 73:
		switch(destroyponetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 74:
		switch(destroyponetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 75:
		switch(destroyponetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 76:
		switch(destroyponetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 77:
		switch(destroyponetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 78:
		switch(destroyponetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 81:
		switch(destroyponetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 82:
		switch(destroyponetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 83:
		switch(destroyponetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 84:
		switch(destroyponetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 85:
		switch(destroyponetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 86:
		switch(destroyponetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 87:
		switch(destroyponetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 88:
		switch(destroyponetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwotwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthreetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfourtwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleponetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwotwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthreetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subponetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwotwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthreetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airponetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwotwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthreetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfourtwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfivetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolponetwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwotwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	}
	quitGame();
	getche();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("P2 here is your status: \n");
	printf("Boats position list: \n");
	printf(rowonetwo);
	printf(rowtwotwo);
	printf(rowthreetwo);
	printf(rowfourtwo);
	printf(rowfivetwo);
	printf(rowsixtwo);
	printf(rowseventwo);
	printf(roweighttwo);
	printf("Target: ");
	scanf("%d", &target);
	switch(target){
	case 11:
		switch(destroypone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 12:
		switch(destroypone) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 12:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 13:
		switch(destroypone) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 13:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 14:
		switch(destroypone) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 11:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 14:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 15:
		switch(destroypone) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 15:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 16:
		switch(destroypone) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 16:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 17:
		switch(destroypone) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 17:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 18:
		switch(destroypone) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 18:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 21:
		switch(destroypone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 21:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 22:
		switch(destroypone) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 22:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 23:
		switch(destroypone) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 23:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 24:
		switch(destroypone) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 24:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 25:
		switch(destroypone) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 25:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 26:
		switch(destroypone) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 26:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 27:
		switch(destroypone) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 27:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 28:
		switch(destroypone) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 28:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 31:
		switch(destroypone) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 31:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 32:
		switch(destroypone) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 32:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 33:
		switch(destroypone) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 33:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 34:
		switch(destroypone) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 34:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 35:
		switch(destroypone) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 35:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 36:
		switch(destroypone) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 36:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 37:
		switch(destroypone) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 37:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 38:
		switch(destroypone) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 38:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 41:
		switch(destroypone) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 41:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 42:
		switch(destroypone) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 42:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 43:
		switch(destroypone) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 43:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 44:
		switch(destroypone) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 44:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 45:
		switch(destroypone) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 45:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 46:
		switch(destroypone) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 46:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 47:
		switch(destroypone) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 47:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 48:
		switch(destroypone) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 48:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 51:
		switch(destroypone) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 51:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 52:
		switch(destroypone) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 52:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 53:
		switch(destroypone) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 53:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 54:
		switch(destroypone) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 54:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 55:
		switch(destroypone) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 55:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 56:
		switch(destroypone) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 56:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 57:
		switch(destroypone) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 57:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 58:
		switch(destroypone) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 58:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 61:
		switch(destroypone) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 61:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 62:
		switch(destroypone) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 62:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 63:
		switch(destroypone) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 63:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 64:
		switch(destroypone) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 64:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 65:
		switch(destroypone) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 65:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 66:
		switch(destroypone) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 66:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 67:
		switch(destroypone) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 67:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 68:
		switch(destroypone) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 68:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 71:
		switch(destroypone) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 71:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 72:
		switch(destroypone) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 72:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 73:
		switch(destroypone) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 73:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 74:
		switch(destroypone) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 74:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 75:
		switch(destroypone) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 75:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 76:
		switch(destroypone) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 76:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 77:
		switch(destroypone) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 77:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 78:
		switch(destroypone) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 78:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 81:
		switch(destroypone) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 81:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 82:
		switch(destroypone) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 82:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 83:
		switch(destroypone) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 83:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 84:
		switch(destroypone) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 84:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 85:
		switch(destroypone) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 85:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 86:
		switch(destroypone) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 86:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 87:
		switch(destroypone) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 87:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	case 88:
		switch(destroypone) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroyptwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypthree) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(destroypfour) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepone) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battleptwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(battlepthree) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpone) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subptwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(subpthree) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpone) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airptwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpthree) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfour) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(airpfive) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolpone) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		switch(patrolptwo) {
		case 88:
			printf("Hit!!!\n");
			hit = hit + 1;
			break;
		
			
		}
		break;
	}
	void quitGame();
	}
}
void quitGame() {   /* Quit game when won */
		if(hit >= 18) {
		printf("Player 2 is the winner!!!\nType somthing to quit: ");
		getche();
		exit(0);
	}
	}
void checkShips() {   /* Charts ships position */
	switch(battlepone) {
	case 11:
		rowone[0] = 'B';
		rowone[1] = 'A';
		break;
	case 12:
		rowone[3] = 'B';
		rowone[4] = 'A';
		break;
	case 13:
		rowone[6] = 'B';
		rowone[7] = 'A';
		break;
	case 14:
		rowone[9] = 'B';
		rowone[10] = 'A';
		break;
	case 15:
		rowone[12] = 'B';
		rowone[13] = 'A';
		break;
	case 16:
		rowone[15] = 'B';
		rowone[16] = 'A';
		break;
	case 17:
		rowone[18] = 'B';
		rowone[19] = 'A';
		break;
	case 18:
		rowone[21] = 'B';
		rowone[22] = 'A';
		break;
	case 21:
		rowtwo[0] = 'B';
		rowtwo[1] = 'A';
		break;
	case 22:
		rowtwo[3] = 'B';
		rowtwo[4] = 'A';
		break;
	case 23:
		rowtwo[6] = 'B';
		rowtwo[7] = 'A';
		break;
	case 24:
		rowtwo[9] = 'B';
		rowtwo[10] = 'A';
		break;
	case 25:
		rowtwo[12] = 'B';
		rowtwo[13] = 'A';
		break;
	case 26:
		rowtwo[15] = 'B';
		rowtwo[16] = 'A';
		break;
	case 27:
		rowtwo[18] = 'B';
		rowtwo[19] = 'A';
		break;
	case 28:
		rowtwo[21] = 'B';
		rowtwo[22] = 'A';
		break;
	case 31:
		rowthree[0] = 'B';
		rowthree[1] = 'A';
		break;
	case 32:
		rowthree[3] = 'B';
		rowthree[4] = 'A';
		break;
	case 33:
		rowthree[6] = 'B';
		rowthree[7] = 'A';
		break;
	case 34:
		rowthree[9] = 'B';
		rowthree[10] = 'A';
		break;
	case 35:
		rowthree[12] = 'B';
		rowthree[13] = 'A';
		break;
	case 36:
		rowthree[15] = 'B';
		rowthree[16] = 'A';
		break;
	case 37:
		rowthree[18] = 'B';
		rowthree[19] = 'A';
		break;
	case 38:
		rowthree[21] = 'B';
		rowthree[22] = 'A';
		break;
	case 41:
		rowfour[0] = 'B';
		rowfour[1] = 'A';
		break;
	case 42:
		rowfour[3] = 'B';
		rowfour[4] = 'A';
		break;
	case 43:
		rowfour[6] = 'B';
		rowfour[7] = 'A';
		break;
	case 44:
		rowfour[9] = 'B';
		rowfour[10] = 'A';
		break;
	case 45:
		rowfour[12] = 'B';
		rowfour[13] = 'A';
		break;
	case 46:
		rowfour[15] = 'B';
		rowfour[16] = 'A';
		break;
	case 47:
		rowfour[18] = 'B';
		rowfour[19] = 'A';
		break;
	case 48:
		rowfour[21] = 'B';
		rowfour[22] = 'A';
		break;
	case 51:
		rowfive[0] = 'B';
		rowfive[1] = 'A';
		break;
	case 52:
		rowfive[3] = 'B';
		rowfive[4] = 'A';
		break;
	case 53:
		rowfive[6] = 'B';
		rowfive[7] = 'A';
		break;
	case 54:
		rowfive[9] = 'B';
		rowfive[10] = 'A';
		break;
	case 55:
		rowfive[12] = 'B';
		rowfive[13] = 'A';
		break;
	case 56:
		rowfive[15] = 'B';
		rowfive[16] = 'A';
		break;
	case 57:
		rowfive[18] = 'B';
		rowfive[19] = 'A';
		break;
	case 58:
		rowfive[21] = 'B';
		rowfive[22] = 'A';
		break;
	case 61:
		rowsix[0] = 'B';
		rowsix[1] = 'A';
		break;
	case 62:
		rowsix[3] = 'B';
		rowsix[4] = 'A';
		break;
	case 63:
		rowsix[6] = 'B';
		rowsix[7] = 'A';
		break;
	case 64:
		rowsix[9] = 'B';
		rowsix[10] = 'A';
		break;
	case 65:
		rowsix[12] = 'B';
		rowsix[13] = 'A';
		break;
	case 66:
		rowsix[15] = 'B';
		rowsix[16] = 'A';
		break;
	case 67:
		rowsix[18] = 'B';
		rowsix[19] = 'A';
		break;
	case 68:
		rowsix[21] = 'B';
		rowsix[22] = 'A';
		break;
	case 71:
		rowseven[0] = 'B';
		rowseven[1] = 'A';
		break;
	case 72:
		rowseven[3] = 'B';
		rowseven[4] = 'A';
		break;
	case 73:
		rowseven[6] = 'B';
		rowseven[7] = 'A';
		break;
	case 74:
		rowseven[9] = 'B';
		rowseven[10] = 'A';
		break;
	case 75:
		rowseven[12] = 'B';
		rowseven[13] = 'A';
		break;
	case 76:
		rowseven[15] = 'B';
		rowseven[16] = 'A';
		break;
	case 77:
		rowseven[18] = 'B';
		rowseven[19] = 'A';
		break;
	case 78:
		rowseven[21] = 'B';
		rowseven[22] = 'A';
		break;
	case 81:
		roweight[0] = 'B';
		roweight[1] = 'A';
		break;
	case 82:
		roweight[3] = 'B';
		roweight[4] = 'A';
		break;
	case 83:
		roweight[6] = 'B';
		roweight[7] = 'A';
		break;
	case 84:
		roweight[9] = 'B';
		roweight[10] = 'A';
		break;
	case 85:
		roweight[12] = 'B';
		roweight[13] = 'A';
		break;
	case 86:
		roweight[15] = 'B';
		roweight[16] = 'A';
		break;
	case 87:
		roweight[18] = 'B';
		roweight[19] = 'A';
		break;
	case 88:
		roweight[21] = 'B';
		roweight[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(battlepthree) {
	case 11:
		rowone[0] = 'B';
		rowone[1] = 'A';
		break;
	case 12:
		rowone[3] = 'B';
		rowone[4] = 'A';
		break;
	case 13:
		rowone[6] = 'B';
		rowone[7] = 'A';
		break;
	case 14:
		rowone[9] = 'B';
		rowone[10] = 'A';
		break;
	case 15:
		rowone[12] = 'B';
		rowone[13] = 'A';
		break;
	case 16:
		rowone[15] = 'B';
		rowone[16] = 'A';
		break;
	case 17:
		rowone[18] = 'B';
		rowone[19] = 'A';
		break;
	case 18:
		rowone[21] = 'B';
		rowone[22] = 'A';
		break;
	case 21:
		rowtwo[0] = 'B';
		rowtwo[1] = 'A';
		break;
	case 22:
		rowtwo[3] = 'B';
		rowtwo[4] = 'A';
		break;
	case 23:
		rowtwo[6] = 'B';
		rowtwo[7] = 'A';
		break;
	case 24:
		rowtwo[9] = 'B';
		rowtwo[10] = 'A';
		break;
	case 25:
		rowtwo[12] = 'B';
		rowtwo[13] = 'A';
		break;
	case 26:
		rowtwo[15] = 'B';
		rowtwo[16] = 'A';
		break;
	case 27:
		rowtwo[18] = 'B';
		rowtwo[19] = 'A';
		break;
	case 28:
		rowtwo[21] = 'B';
		rowtwo[22] = 'A';
		break;
	case 31:
		rowthree[0] = 'B';
		rowthree[1] = 'A';
		break;
	case 32:
		rowthree[3] = 'B';
		rowthree[4] = 'A';
		break;
	case 33:
		rowthree[6] = 'B';
		rowthree[7] = 'A';
		break;
	case 34:
		rowthree[9] = 'B';
		rowthree[10] = 'A';
		break;
	case 35:
		rowthree[12] = 'B';
		rowthree[13] = 'A';
		break;
	case 36:
		rowthree[15] = 'B';
		rowthree[16] = 'A';
		break;
	case 37:
		rowthree[18] = 'B';
		rowthree[19] = 'A';
		break;
	case 38:
		rowthree[21] = 'B';
		rowthree[22] = 'A';
		break;
	case 41:
		rowfour[0] = 'B';
		rowfour[1] = 'A';
		break;
	case 42:
		rowfour[3] = 'B';
		rowfour[4] = 'A';
		break;
	case 43:
		rowfour[6] = 'B';
		rowfour[7] = 'A';
		break;
	case 44:
		rowfour[9] = 'B';
		rowfour[10] = 'A';
		break;
	case 45:
		rowfour[12] = 'B';
		rowfour[13] = 'A';
		break;
	case 46:
		rowfour[15] = 'B';
		rowfour[16] = 'A';
		break;
	case 47:
		rowfour[18] = 'B';
		rowfour[19] = 'A';
		break;
	case 48:
		rowfour[21] = 'B';
		rowfour[22] = 'A';
		break;
	case 51:
		rowfive[0] = 'B';
		rowfive[1] = 'A';
		break;
	case 52:
		rowfive[3] = 'B';
		rowfive[4] = 'A';
		break;
	case 53:
		rowfive[6] = 'B';
		rowfive[7] = 'A';
		break;
	case 54:
		rowfive[9] = 'B';
		rowfive[10] = 'A';
		break;
	case 55:
		rowfive[12] = 'B';
		rowfive[13] = 'A';
		break;
	case 56:
		rowfive[15] = 'B';
		rowfive[16] = 'A';
		break;
	case 57:
		rowfive[18] = 'B';
		rowfive[19] = 'A';
		break;
	case 58:
		rowfive[21] = 'B';
		rowfive[22] = 'A';
		break;
	case 61:
		rowsix[0] = 'B';
		rowsix[1] = 'A';
		break;
	case 62:
		rowsix[3] = 'B';
		rowsix[4] = 'A';
		break;
	case 63:
		rowsix[6] = 'B';
		rowsix[7] = 'A';
		break;
	case 64:
		rowsix[9] = 'B';
		rowsix[10] = 'A';
		break;
	case 65:
		rowsix[12] = 'B';
		rowsix[13] = 'A';
		break;
	case 66:
		rowsix[15] = 'B';
		rowsix[16] = 'A';
		break;
	case 67:
		rowsix[18] = 'B';
		rowsix[19] = 'A';
		break;
	case 68:
		rowsix[21] = 'B';
		rowsix[22] = 'A';
		break;
	case 71:
		rowseven[0] = 'B';
		rowseven[1] = 'A';
		break;
	case 72:
		rowseven[3] = 'B';
		rowseven[4] = 'A';
		break;
	case 73:
		rowseven[6] = 'B';
		rowseven[7] = 'A';
		break;
	case 74:
		rowseven[9] = 'B';
		rowseven[10] = 'A';
		break;
	case 75:
		rowseven[12] = 'B';
		rowseven[13] = 'A';
		break;
	case 76:
		rowseven[15] = 'B';
		rowseven[16] = 'A';
		break;
	case 77:
		rowseven[18] = 'B';
		rowseven[19] = 'A';
		break;
	case 78:
		rowseven[21] = 'B';
		rowseven[22] = 'A';
		break;
	case 81:
		roweight[0] = 'B';
		roweight[1] = 'A';
		break;
	case 82:
		roweight[3] = 'B';
		roweight[4] = 'A';
		break;
	case 83:
		roweight[6] = 'B';
		roweight[7] = 'A';
		break;
	case 84:
		roweight[9] = 'B';
		roweight[10] = 'A';
		break;
	case 85:
		roweight[12] = 'B';
		roweight[13] = 'A';
		break;
	case 86:
		roweight[15] = 'B';
		roweight[16] = 'A';
		break;
	case 87:
		roweight[18] = 'B';
		roweight[19] = 'A';
		break;
	case 88:
		roweight[21] = 'B';
		roweight[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(battleptwo) {
	case 11:
		rowone[0] = 'B';
		rowone[1] = 'A';
		break;
	case 12:
		rowone[3] = 'B';
		rowone[4] = 'A';
		break;
	case 13:
		rowone[6] = 'B';
		rowone[7] = 'A';
		break;
	case 14:
		rowone[9] = 'B';
		rowone[10] = 'A';
		break;
	case 15:
		rowone[12] = 'B';
		rowone[13] = 'A';
		break;
	case 16:
		rowone[15] = 'B';
		rowone[16] = 'A';
		break;
	case 17:
		rowone[18] = 'B';
		rowone[19] = 'A';
		break;
	case 18:
		rowone[21] = 'B';
		rowone[22] = 'A';
		break;
	case 21:
		rowtwo[0] = 'B';
		rowtwo[1] = 'A';
		break;
	case 22:
		rowtwo[3] = 'B';
		rowtwo[4] = 'A';
		break;
	case 23:
		rowtwo[6] = 'B';
		rowtwo[7] = 'A';
		break;
	case 24:
		rowtwo[9] = 'B';
		rowtwo[10] = 'A';
		break;
	case 25:
		rowtwo[12] = 'B';
		rowtwo[13] = 'A';
		break;
	case 26:
		rowtwo[15] = 'B';
		rowtwo[16] = 'A';
		break;
	case 27:
		rowtwo[18] = 'B';
		rowtwo[19] = 'A';
		break;
	case 28:
		rowtwo[21] = 'B';
		rowtwo[22] = 'A';
		break;
	case 31:
		rowthree[0] = 'B';
		rowthree[1] = 'A';
		break;
	case 32:
		rowthree[3] = 'B';
		rowthree[4] = 'A';
		break;
	case 33:
		rowthree[6] = 'B';
		rowthree[7] = 'A';
		break;
	case 34:
		rowthree[9] = 'B';
		rowthree[10] = 'A';
		break;
	case 35:
		rowthree[12] = 'B';
		rowthree[13] = 'A';
		break;
	case 36:
		rowthree[15] = 'B';
		rowthree[16] = 'A';
		break;
	case 37:
		rowthree[18] = 'B';
		rowthree[19] = 'A';
		break;
	case 38:
		rowthree[21] = 'B';
		rowthree[22] = 'A';
		break;
	case 41:
		rowfour[0] = 'B';
		rowfour[1] = 'A';
		break;
	case 42:
		rowfour[3] = 'B';
		rowfour[4] = 'A';
		break;
	case 43:
		rowfour[6] = 'B';
		rowfour[7] = 'A';
		break;
	case 44:
		rowfour[9] = 'B';
		rowfour[10] = 'A';
		break;
	case 45:
		rowfour[12] = 'B';
		rowfour[13] = 'A';
		break;
	case 46:
		rowfour[15] = 'B';
		rowfour[16] = 'A';
		break;
	case 47:
		rowfour[18] = 'B';
		rowfour[19] = 'A';
		break;
	case 48:
		rowfour[21] = 'B';
		rowfour[22] = 'A';
		break;
	case 51:
		rowfive[0] = 'B';
		rowfive[1] = 'A';
		break;
	case 52:
		rowfive[3] = 'B';
		rowfive[4] = 'A';
		break;
	case 53:
		rowfive[6] = 'B';
		rowfive[7] = 'A';
		break;
	case 54:
		rowfive[9] = 'B';
		rowfive[10] = 'A';
		break;
	case 55:
		rowfive[12] = 'B';
		rowfive[13] = 'A';
		break;
	case 56:
		rowfive[15] = 'B';
		rowfive[16] = 'A';
		break;
	case 57:
		rowfive[18] = 'B';
		rowfive[19] = 'A';
		break;
	case 58:
		rowfive[21] = 'B';
		rowfive[22] = 'A';
		break;
	case 61:
		rowsix[0] = 'B';
		rowsix[1] = 'A';
		break;
	case 62:
		rowsix[3] = 'B';
		rowsix[4] = 'A';
		break;
	case 63:
		rowsix[6] = 'B';
		rowsix[7] = 'A';
		break;
	case 64:
		rowsix[9] = 'B';
		rowsix[10] = 'A';
		break;
	case 65:
		rowsix[12] = 'B';
		rowsix[13] = 'A';
		break;
	case 66:
		rowsix[15] = 'B';
		rowsix[16] = 'A';
		break;
	case 67:
		rowsix[18] = 'B';
		rowsix[19] = 'A';
		break;
	case 68:
		rowsix[21] = 'B';
		rowsix[22] = 'A';
		break;
	case 71:
		rowseven[0] = 'B';
		rowseven[1] = 'A';
		break;
	case 72:
		rowseven[3] = 'B';
		rowseven[4] = 'A';
		break;
	case 73:
		rowseven[6] = 'B';
		rowseven[7] = 'A';
		break;
	case 74:
		rowseven[9] = 'B';
		rowseven[10] = 'A';
		break;
	case 75:
		rowseven[12] = 'B';
		rowseven[13] = 'A';
		break;
	case 76:
		rowseven[15] = 'B';
		rowseven[16] = 'A';
		break;
	case 77:
		rowseven[18] = 'B';
		rowseven[19] = 'A';
		break;
	case 78:
		rowseven[21] = 'B';
		rowseven[22] = 'A';
		break;
	case 81:
		roweight[0] = 'B';
		roweight[1] = 'A';
		break;
	case 82:
		roweight[3] = 'B';
		roweight[4] = 'A';
		break;
	case 83:
		roweight[6] = 'B';
		roweight[7] = 'A';
		break;
	case 84:
		roweight[9] = 'B';
		roweight[10] = 'A';
		break;
	case 85:
		roweight[12] = 'B';
		roweight[13] = 'A';
		break;
	case 86:
		roweight[15] = 'B';
		roweight[16] = 'A';
		break;
	case 87:
		roweight[18] = 'B';
		roweight[19] = 'A';
		break;
	case 88:
		roweight[21] = 'B';
		roweight[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(subpthree) {
	case 11:
		rowone[0] = 'S';
		rowone[1] = 'U';
		break;
	case 12:
		rowone[3] = 'S';
		rowone[4] = 'U';
		break;
	case 13:
		rowone[6] = 'S';
		rowone[7] = 'U';
		break;
	case 14:
		rowone[9] = 'S';
		rowone[10] = 'U';
		break;
	case 15:
		rowone[12] = 'S';
		rowone[13] = 'U';
		break;
	case 16:
		rowone[15] = 'S';
		rowone[16] = 'U';
		break;
	case 17:
		rowone[18] = 'S';
		rowone[19] = 'U';
		break;
	case 18:
		rowone[21] = 'S';
		rowone[22] = 'U';
		break;
	case 21:
		rowtwo[0] = 'S';
		rowtwo[1] = 'U';
		break;
	case 22:
		rowtwo[3] = 'S';
		rowtwo[4] = 'U';
		break;
	case 23:
		rowtwo[6] = 'S';
		rowtwo[7] = 'U';
		break;
	case 24:
		rowtwo[9] = 'S';
		rowtwo[10] = 'U';
		break;
	case 25:
		rowtwo[12] = 'S';
		rowtwo[13] = 'U';
		break;
	case 26:
		rowtwo[15] = 'S';
		rowtwo[16] = 'U';
		break;
	case 27:
		rowtwo[18] = 'S';
		rowtwo[19] = 'U';
		break;
	case 28:
		rowtwo[21] = 'S';
		rowtwo[22] = 'U';
		break;
	case 31:
		rowthree[0] = 'S';
		rowthree[1] = 'U';
		break;
	case 32:
		rowthree[3] = 'S';
		rowthree[4] = 'U';
		break;
	case 33:
		rowthree[6] = 'S';
		rowthree[7] = 'U';
		break;
	case 34:
		rowthree[9] = 'S';
		rowthree[10] = 'U';
		break;
	case 35:
		rowthree[12] = 'S';
		rowthree[13] = 'U';
		break;
	case 36:
		rowthree[15] = 'S';
		rowthree[16] = 'U';
		break;
	case 37:
		rowthree[18] = 'S';
		rowthree[19] = 'U';
		break;
	case 38:
		rowthree[21] = 'S';
		rowthree[22] = 'U';
		break;
	case 41:
		rowfour[0] = 'S';
		rowfour[1] = 'U';
		break;
	case 42:
		rowfour[3] = 'S';
		rowfour[4] = 'U';
		break;
	case 43:
		rowfour[6] = 'S';
		rowfour[7] = 'U';
		break;
	case 44:
		rowfour[9] = 'S';
		rowfour[10] = 'U';
		break;
	case 45:
		rowfour[12] = 'S';
		rowfour[13] = 'U';
		break;
	case 46:
		rowfour[15] = 'S';
		rowfour[16] = 'U';
		break;
	case 47:
		rowfour[18] = 'S';
		rowfour[19] = 'U';
		break;
	case 48:
		rowfour[21] = 'S';
		rowfour[22] = 'U';
		break;
	case 51:
		rowfive[0] = 'S';
		rowfive[1] = 'U';
		break;
	case 52:
		rowfive[3] = 'S';
		rowfive[4] = 'U';
		break;
	case 53:
		rowfive[6] = 'S';
		rowfive[7] = 'U';
		break;
	case 54:
		rowfive[9] = 'S';
		rowfive[10] = 'U';
		break;
	case 55:
		rowfive[12] = 'S';
		rowfive[13] = 'U';
		break;
	case 56:
		rowfive[15] = 'S';
		rowfive[16] = 'U';
		break;
	case 57:
		rowfive[18] = 'S';
		rowfive[19] = 'U';
		break;
	case 58:
		rowfive[21] = 'S';
		rowfive[22] = 'U';
		break;
	case 61:
		rowsix[0] = 'S';
		rowsix[1] = 'U';
		break;
	case 62:
		rowsix[3] = 'S';
		rowsix[4] = 'U';
		break;
	case 63:
		rowsix[6] = 'S';
		rowsix[7] = 'U';
		break;
	case 64:
		rowsix[9] = 'S';
		rowsix[10] = 'U';
		break;
	case 65:
		rowsix[12] = 'S';
		rowsix[13] = 'U';
		break;
	case 66:
		rowsix[15] = 'S';
		rowsix[16] = 'U';
		break;
	case 67:
		rowsix[18] = 'S';
		rowsix[19] = 'U';
		break;
	case 68:
		rowsix[21] = 'S';
		rowsix[22] = 'U';
		break;
	case 71:
		rowseven[0] = 'S';
		rowseven[1] = 'U';
		break;
	case 72:
		rowseven[3] = 'S';
		rowseven[4] = 'U';
		break;
	case 73:
		rowseven[6] = 'S';
		rowseven[7] = 'U';
		break;
	case 74:
		rowseven[9] = 'S';
		rowseven[10] = 'U';
		break;
	case 75:
		rowseven[12] = 'S';
		rowseven[13] = 'U';
		break;
	case 76:
		rowseven[15] = 'S';
		rowseven[16] = 'U';
		break;
	case 77:
		rowseven[18] = 'S';
		rowseven[19] = 'U';
		break;
	case 78:
		rowseven[21] = 'S';
		rowseven[22] = 'U';
		break;
	case 81:
		roweight[0] = 'S';
		roweight[1] = 'U';
		break;
	case 82:
		roweight[3] = 'S';
		roweight[4] = 'U';
		break;
	case 83:
		roweight[6] = 'S';
		roweight[7] = 'U';
		break;
	case 84:
		roweight[9] = 'S';
		roweight[10] = 'U';
		break;
	case 85:
		roweight[12] = 'S';
		roweight[13] = 'U';
		break;
	case 86:
		roweight[15] = 'S';
		roweight[16] = 'U';
		break;
	case 87:
		roweight[18] = 'S';
		roweight[19] = 'U';
		break;
	case 88:
		roweight[21] = 'S';
		roweight[22] = 'U';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(subptwo) {
	case 11:
		rowone[0] = 'S';
		rowone[1] = 'U';
		break;
	case 12:
		rowone[3] = 'S';
		rowone[4] = 'U';
		break;
	case 13:
		rowone[6] = 'S';
		rowone[7] = 'U';
		break;
	case 14:
		rowone[9] = 'S';
		rowone[10] = 'U';
		break;
	case 15:
		rowone[12] = 'S';
		rowone[13] = 'U';
		break;
	case 16:
		rowone[15] = 'S';
		rowone[16] = 'U';
		break;
	case 17:
		rowone[18] = 'S';
		rowone[19] = 'U';
		break;
	case 18:
		rowone[21] = 'S';
		rowone[22] = 'U';
		break;
	case 21:
		rowtwo[0] = 'S';
		rowtwo[1] = 'U';
		break;
	case 22:
		rowtwo[3] = 'S';
		rowtwo[4] = 'U';
		break;
	case 23:
		rowtwo[6] = 'S';
		rowtwo[7] = 'U';
		break;
	case 24:
		rowtwo[9] = 'S';
		rowtwo[10] = 'U';
		break;
	case 25:
		rowtwo[12] = 'S';
		rowtwo[13] = 'U';
		break;
	case 26:
		rowtwo[15] = 'S';
		rowtwo[16] = 'U';
		break;
	case 27:
		rowtwo[18] = 'S';
		rowtwo[19] = 'U';
		break;
	case 28:
		rowtwo[21] = 'S';
		rowtwo[22] = 'U';
		break;
	case 31:
		rowthree[0] = 'S';
		rowthree[1] = 'U';
		break;
	case 32:
		rowthree[3] = 'S';
		rowthree[4] = 'U';
		break;
	case 33:
		rowthree[6] = 'S';
		rowthree[7] = 'U';
		break;
	case 34:
		rowthree[9] = 'S';
		rowthree[10] = 'U';
		break;
	case 35:
		rowthree[12] = 'S';
		rowthree[13] = 'U';
		break;
	case 36:
		rowthree[15] = 'S';
		rowthree[16] = 'U';
		break;
	case 37:
		rowthree[18] = 'S';
		rowthree[19] = 'U';
		break;
	case 38:
		rowthree[21] = 'S';
		rowthree[22] = 'U';
		break;
	case 41:
		rowfour[0] = 'S';
		rowfour[1] = 'U';
		break;
	case 42:
		rowfour[3] = 'S';
		rowfour[4] = 'U';
		break;
	case 43:
		rowfour[6] = 'S';
		rowfour[7] = 'U';
		break;
	case 44:
		rowfour[9] = 'S';
		rowfour[10] = 'U';
		break;
	case 45:
		rowfour[12] = 'S';
		rowfour[13] = 'U';
		break;
	case 46:
		rowfour[15] = 'S';
		rowfour[16] = 'U';
		break;
	case 47:
		rowfour[18] = 'S';
		rowfour[19] = 'U';
		break;
	case 48:
		rowfour[21] = 'S';
		rowfour[22] = 'U';
		break;
	case 51:
		rowfive[0] = 'S';
		rowfive[1] = 'U';
		break;
	case 52:
		rowfive[3] = 'S';
		rowfive[4] = 'U';
		break;
	case 53:
		rowfive[6] = 'S';
		rowfive[7] = 'U';
		break;
	case 54:
		rowfive[9] = 'S';
		rowfive[10] = 'U';
		break;
	case 55:
		rowfive[12] = 'S';
		rowfive[13] = 'U';
		break;
	case 56:
		rowfive[15] = 'S';
		rowfive[16] = 'U';
		break;
	case 57:
		rowfive[18] = 'S';
		rowfive[19] = 'U';
		break;
	case 58:
		rowfive[21] = 'S';
		rowfive[22] = 'U';
		break;
	case 61:
		rowsix[0] = 'S';
		rowsix[1] = 'U';
		break;
	case 62:
		rowsix[3] = 'S';
		rowsix[4] = 'U';
		break;
	case 63:
		rowsix[6] = 'S';
		rowsix[7] = 'U';
		break;
	case 64:
		rowsix[9] = 'S';
		rowsix[10] = 'U';
		break;
	case 65:
		rowsix[12] = 'S';
		rowsix[13] = 'U';
		break;
	case 66:
		rowsix[15] = 'S';
		rowsix[16] = 'U';
		break;
	case 67:
		rowsix[18] = 'S';
		rowsix[19] = 'U';
		break;
	case 68:
		rowsix[21] = 'S';
		rowsix[22] = 'U';
		break;
	case 71:
		rowseven[0] = 'S';
		rowseven[1] = 'U';
		break;
	case 72:
		rowseven[3] = 'S';
		rowseven[4] = 'U';
		break;
	case 73:
		rowseven[6] = 'S';
		rowseven[7] = 'U';
		break;
	case 74:
		rowseven[9] = 'S';
		rowseven[10] = 'U';
		break;
	case 75:
		rowseven[12] = 'S';
		rowseven[13] = 'U';
		break;
	case 76:
		rowseven[15] = 'S';
		rowseven[16] = 'U';
		break;
	case 77:
		rowseven[18] = 'S';
		rowseven[19] = 'U';
		break;
	case 78:
		rowseven[21] = 'S';
		rowseven[22] = 'U';
		break;
	case 81:
		roweight[0] = 'S';
		roweight[1] = 'U';
		break;
	case 82:
		roweight[3] = 'S';
		roweight[4] = 'U';
		break;
	case 83:
		roweight[6] = 'S';
		roweight[7] = 'U';
		break;
	case 84:
		roweight[9] = 'S';
		roweight[10] = 'U';
		break;
	case 85:
		roweight[12] = 'S';
		roweight[13] = 'U';
		break;
	case 86:
		roweight[15] = 'S';
		roweight[16] = 'U';
		break;
	case 87:
		roweight[18] = 'S';
		roweight[19] = 'U';
		break;
	case 88:
		roweight[21] = 'S';
		roweight[22] = 'U';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(subpone) {
	case 11:
		rowone[0] = 'S';
		rowone[1] = 'U';
		break;
	case 12:
		rowone[3] = 'S';
		rowone[4] = 'U';
		break;
	case 13:
		rowone[6] = 'S';
		rowone[7] = 'U';
		break;
	case 14:
		rowone[9] = 'S';
		rowone[10] = 'U';
		break;
	case 15:
		rowone[12] = 'S';
		rowone[13] = 'U';
		break;
	case 16:
		rowone[15] = 'S';
		rowone[16] = 'U';
		break;
	case 17:
		rowone[18] = 'S';
		rowone[19] = 'U';
		break;
	case 18:
		rowone[21] = 'S';
		rowone[22] = 'U';
		break;
	case 21:
		rowtwo[0] = 'S';
		rowtwo[1] = 'U';
		break;
	case 22:
		rowtwo[3] = 'S';
		rowtwo[4] = 'U';
		break;
	case 23:
		rowtwo[6] = 'S';
		rowtwo[7] = 'U';
		break;
	case 24:
		rowtwo[9] = 'S';
		rowtwo[10] = 'U';
		break;
	case 25:
		rowtwo[12] = 'S';
		rowtwo[13] = 'U';
		break;
	case 26:
		rowtwo[15] = 'S';
		rowtwo[16] = 'U';
		break;
	case 27:
		rowtwo[18] = 'S';
		rowtwo[19] = 'U';
		break;
	case 28:
		rowtwo[21] = 'S';
		rowtwo[22] = 'U';
		break;
	case 31:
		rowthree[0] = 'S';
		rowthree[1] = 'U';
		break;
	case 32:
		rowthree[3] = 'S';
		rowthree[4] = 'U';
		break;
	case 33:
		rowthree[6] = 'S';
		rowthree[7] = 'U';
		break;
	case 34:
		rowthree[9] = 'S';
		rowthree[10] = 'U';
		break;
	case 35:
		rowthree[12] = 'S';
		rowthree[13] = 'U';
		break;
	case 36:
		rowthree[15] = 'S';
		rowthree[16] = 'U';
		break;
	case 37:
		rowthree[18] = 'S';
		rowthree[19] = 'U';
		break;
	case 38:
		rowthree[21] = 'S';
		rowthree[22] = 'U';
		break;
	case 41:
		rowfour[0] = 'S';
		rowfour[1] = 'U';
		break;
	case 42:
		rowfour[3] = 'S';
		rowfour[4] = 'U';
		break;
	case 43:
		rowfour[6] = 'S';
		rowfour[7] = 'U';
		break;
	case 44:
		rowfour[9] = 'S';
		rowfour[10] = 'U';
		break;
	case 45:
		rowfour[12] = 'S';
		rowfour[13] = 'U';
		break;
	case 46:
		rowfour[15] = 'S';
		rowfour[16] = 'U';
		break;
	case 47:
		rowfour[18] = 'S';
		rowfour[19] = 'U';
		break;
	case 48:
		rowfour[21] = 'S';
		rowfour[22] = 'U';
		break;
	case 51:
		rowfive[0] = 'S';
		rowfive[1] = 'U';
		break;
	case 52:
		rowfive[3] = 'S';
		rowfive[4] = 'U';
		break;
	case 53:
		rowfive[6] = 'S';
		rowfive[7] = 'U';
		break;
	case 54:
		rowfive[9] = 'S';
		rowfive[10] = 'U';
		break;
	case 55:
		rowfive[12] = 'S';
		rowfive[13] = 'U';
		break;
	case 56:
		rowfive[15] = 'S';
		rowfive[16] = 'U';
		break;
	case 57:
		rowfive[18] = 'S';
		rowfive[19] = 'U';
		break;
	case 58:
		rowfive[21] = 'S';
		rowfive[22] = 'U';
		break;
	case 61:
		rowsix[0] = 'S';
		rowsix[1] = 'U';
		break;
	case 62:
		rowsix[3] = 'S';
		rowsix[4] = 'U';
		break;
	case 63:
		rowsix[6] = 'S';
		rowsix[7] = 'U';
		break;
	case 64:
		rowsix[9] = 'S';
		rowsix[10] = 'U';
		break;
	case 65:
		rowsix[12] = 'S';
		rowsix[13] = 'U';
		break;
	case 66:
		rowsix[15] = 'S';
		rowsix[16] = 'U';
		break;
	case 67:
		rowsix[18] = 'S';
		rowsix[19] = 'U';
		break;
	case 68:
		rowsix[21] = 'S';
		rowsix[22] = 'U';
		break;
	case 71:
		rowseven[0] = 'S';
		rowseven[1] = 'U';
		break;
	case 72:
		rowseven[3] = 'S';
		rowseven[4] = 'U';
		break;
	case 73:
		rowseven[6] = 'S';
		rowseven[7] = 'U';
		break;
	case 74:
		rowseven[9] = 'S';
		rowseven[10] = 'U';
		break;
	case 75:
		rowseven[12] = 'S';
		rowseven[13] = 'U';
		break;
	case 76:
		rowseven[15] = 'S';
		rowseven[16] = 'U';
		break;
	case 77:
		rowseven[18] = 'S';
		rowseven[19] = 'U';
		break;
	case 78:
		rowseven[21] = 'S';
		rowseven[22] = 'U';
		break;
	case 81:
		roweight[0] = 'S';
		roweight[1] = 'U';
		break;
	case 82:
		roweight[3] = 'S';
		roweight[4] = 'U';
		break;
	case 83:
		roweight[6] = 'S';
		roweight[7] = 'U';
		break;
	case 84:
		roweight[9] = 'S';
		roweight[10] = 'U';
		break;
	case 85:
		roweight[12] = 'S';
		roweight[13] = 'U';
		break;
	case 86:
		roweight[15] = 'S';
		roweight[16] = 'U';
		break;
	case 87:
		roweight[18] = 'S';
		roweight[19] = 'U';
		break;
	case 88:
		roweight[21] = 'S';
		roweight[22] = 'U';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(patrolptwo) {
	case 11:
		rowone[0] = 'P';
		rowone[1] = 'A';
		break;
	case 12:
		rowone[3] = 'P';
		rowone[4] = 'A';
		break;
	case 13:
		rowone[6] = 'P';
		rowone[7] = 'A';
		break;
	case 14:
		rowone[9] = 'P';
		rowone[10] = 'A';
		break;
	case 15:
		rowone[12] = 'P';
		rowone[13] = 'A';
		break;
	case 16:
		rowone[15] = 'P';
		rowone[16] = 'A';
		break;
	case 17:
		rowone[18] = 'P';
		rowone[19] = 'A';
		break;
	case 18:
		rowone[21] = 'P';
		rowone[22] = 'A';
		break;
	case 21:
		rowtwo[0] = 'P';
		rowtwo[1] = 'A';
		break;
	case 22:
		rowtwo[3] = 'P';
		rowtwo[4] = 'A';
		break;
	case 23:
		rowtwo[6] = 'P';
		rowtwo[7] = 'A';
		break;
	case 24:
		rowtwo[9] = 'P';
		rowtwo[10] = 'A';
		break;
	case 25:
		rowtwo[12] = 'P';
		rowtwo[13] = 'A';
		break;
	case 26:
		rowtwo[15] = 'P';
		rowtwo[16] = 'A';
		break;
	case 27:
		rowtwo[18] = 'P';
		rowtwo[19] = 'A';
		break;
	case 28:
		rowtwo[21] = 'P';
		rowtwo[22] = 'A';
		break;
	case 31:
		rowthree[0] = 'P';
		rowthree[1] = 'A';
		break;
	case 32:
		rowthree[3] = 'P';
		rowthree[4] = 'A';
		break;
	case 33:
		rowthree[6] = 'P';
		rowthree[7] = 'A';
		break;
	case 34:
		rowthree[9] = 'P';
		rowthree[10] = 'A';
		break;
	case 35:
		rowthree[12] = 'P';
		rowthree[13] = 'A';
		break;
	case 36:
		rowthree[15] = 'P';
		rowthree[16] = 'A';
		break;
	case 37:
		rowthree[18] = 'P';
		rowthree[19] = 'A';
		break;
	case 38:
		rowthree[21] = 'P';
		rowthree[22] = 'A';
		break;
	case 41:
		rowfour[0] = 'P';
		rowfour[1] = 'A';
		break;
	case 42:
		rowfour[3] = 'P';
		rowfour[4] = 'A';
		break;
	case 43:
		rowfour[6] = 'P';
		rowfour[7] = 'A';
		break;
	case 44:
		rowfour[9] = 'P';
		rowfour[10] = 'A';
		break;
	case 45:
		rowfour[12] = 'P';
		rowfour[13] = 'A';
		break;
	case 46:
		rowfour[15] = 'P';
		rowfour[16] = 'A';
		break;
	case 47:
		rowfour[18] = 'P';
		rowfour[19] = 'A';
		break;
	case 48:
		rowfour[21] = 'P';
		rowfour[22] = 'A';
		break;
	case 51:
		rowfive[0] = 'P';
		rowfive[1] = 'A';
		break;
	case 52:
		rowfive[3] = 'P';
		rowfive[4] = 'A';
		break;
	case 53:
		rowfive[6] = 'P';
		rowfive[7] = 'A';
		break;
	case 54:
		rowfive[9] = 'P';
		rowfive[10] = 'A';
		break;
	case 55:
		rowfive[12] = 'P';
		rowfive[13] = 'A';
		break;
	case 56:
		rowfive[15] = 'P';
		rowfive[16] = 'A';
		break;
	case 57:
		rowfive[18] = 'P';
		rowfive[19] = 'A';
		break;
	case 58:
		rowfive[21] = 'P';
		rowfive[22] = 'A';
		break;
	case 61:
		rowsix[0] = 'P';
		rowsix[1] = 'A';
		break;
	case 62:
		rowsix[3] = 'P';
		rowsix[4] = 'A';
		break;
	case 63:
		rowsix[6] = 'P';
		rowsix[7] = 'A';
		break;
	case 64:
		rowsix[9] = 'P';
		rowsix[10] = 'A';
		break;
	case 65:
		rowsix[12] = 'P';
		rowsix[13] = 'A';
		break;
	case 66:
		rowsix[15] = 'P';
		rowsix[16] = 'A';
		break;
	case 67:
		rowsix[18] = 'P';
		rowsix[19] = 'A';
		break;
	case 68:
		rowsix[21] = 'P';
		rowsix[22] = 'A';
		break;
	case 71:
		rowseven[0] = 'P';
		rowseven[1] = 'A';
		break;
	case 72:
		rowseven[3] = 'P';
		rowseven[4] = 'A';
		break;
	case 73:
		rowseven[6] = 'P';
		rowseven[7] = 'A';
		break;
	case 74:
		rowseven[9] = 'P';
		rowseven[10] = 'A';
		break;
	case 75:
		rowseven[12] = 'P';
		rowseven[13] = 'A';
		break;
	case 76:
		rowseven[15] = 'P';
		rowseven[16] = 'A';
		break;
	case 77:
		rowseven[18] = 'P';
		rowseven[19] = 'A';
		break;
	case 78:
		rowseven[21] = 'P';
		rowseven[22] = 'A';
		break;
	case 81:
		roweight[0] = 'P';
		roweight[1] = 'A';
		break;
	case 82:
		roweight[3] = 'P';
		roweight[4] = 'A';
		break;
	case 83:
		roweight[6] = 'P';
		roweight[7] = 'A';
		break;
	case 84:
		roweight[9] = 'P';
		roweight[10] = 'A';
		break;
	case 85:
		roweight[12] = 'P';
		roweight[13] = 'A';
		break;
	case 86:
		roweight[15] = 'P';
		roweight[16] = 'A';
		break;
	case 87:
		roweight[18] = 'P';
		roweight[19] = 'A';
		break;
	case 88:
		roweight[21] = 'P';
		roweight[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(patrolpone) {
	case 11:
		rowone[0] = 'P';
		rowone[1] = 'A';
		break;
	case 12:
		rowone[3] = 'P';
		rowone[4] = 'A';
		break;
	case 13:
		rowone[6] = 'P';
		rowone[7] = 'A';
		break;
	case 14:
		rowone[9] = 'P';
		rowone[10] = 'A';
		break;
	case 15:
		rowone[12] = 'P';
		rowone[13] = 'A';
		break;
	case 16:
		rowone[15] = 'P';
		rowone[16] = 'A';
		break;
	case 17:
		rowone[18] = 'P';
		rowone[19] = 'A';
		break;
	case 18:
		rowone[21] = 'P';
		rowone[22] = 'A';
		break;
	case 21:
		rowtwo[0] = 'P';
		rowtwo[1] = 'A';
		break;
	case 22:
		rowtwo[3] = 'P';
		rowtwo[4] = 'A';
		break;
	case 23:
		rowtwo[6] = 'P';
		rowtwo[7] = 'A';
		break;
	case 24:
		rowtwo[9] = 'P';
		rowtwo[10] = 'A';
		break;
	case 25:
		rowtwo[12] = 'P';
		rowtwo[13] = 'A';
		break;
	case 26:
		rowtwo[15] = 'P';
		rowtwo[16] = 'A';
		break;
	case 27:
		rowtwo[18] = 'P';
		rowtwo[19] = 'A';
		break;
	case 28:
		rowtwo[21] = 'P';
		rowtwo[22] = 'A';
		break;
	case 31:
		rowthree[0] = 'P';
		rowthree[1] = 'A';
		break;
	case 32:
		rowthree[3] = 'P';
		rowthree[4] = 'A';
		break;
	case 33:
		rowthree[6] = 'P';
		rowthree[7] = 'A';
		break;
	case 34:
		rowthree[9] = 'P';
		rowthree[10] = 'A';
		break;
	case 35:
		rowthree[12] = 'P';
		rowthree[13] = 'A';
		break;
	case 36:
		rowthree[15] = 'P';
		rowthree[16] = 'A';
		break;
	case 37:
		rowthree[18] = 'P';
		rowthree[19] = 'A';
		break;
	case 38:
		rowthree[21] = 'P';
		rowthree[22] = 'A';
		break;
	case 41:
		rowfour[0] = 'P';
		rowfour[1] = 'A';
		break;
	case 42:
		rowfour[3] = 'P';
		rowfour[4] = 'A';
		break;
	case 43:
		rowfour[6] = 'P';
		rowfour[7] = 'A';
		break;
	case 44:
		rowfour[9] = 'P';
		rowfour[10] = 'A';
		break;
	case 45:
		rowfour[12] = 'P';
		rowfour[13] = 'A';
		break;
	case 46:
		rowfour[15] = 'P';
		rowfour[16] = 'A';
		break;
	case 47:
		rowfour[18] = 'P';
		rowfour[19] = 'A';
		break;
	case 48:
		rowfour[21] = 'P';
		rowfour[22] = 'A';
		break;
	case 51:
		rowfive[0] = 'P';
		rowfive[1] = 'A';
		break;
	case 52:
		rowfive[3] = 'P';
		rowfive[4] = 'A';
		break;
	case 53:
		rowfive[6] = 'P';
		rowfive[7] = 'A';
		break;
	case 54:
		rowfive[9] = 'P';
		rowfive[10] = 'A';
		break;
	case 55:
		rowfive[12] = 'P';
		rowfive[13] = 'A';
		break;
	case 56:
		rowfive[15] = 'P';
		rowfive[16] = 'A';
		break;
	case 57:
		rowfive[18] = 'P';
		rowfive[19] = 'A';
		break;
	case 58:
		rowfive[21] = 'P';
		rowfive[22] = 'A';
		break;
	case 61:
		rowsix[0] = 'P';
		rowsix[1] = 'A';
		break;
	case 62:
		rowsix[3] = 'P';
		rowsix[4] = 'A';
		break;
	case 63:
		rowsix[6] = 'P';
		rowsix[7] = 'A';
		break;
	case 64:
		rowsix[9] = 'P';
		rowsix[10] = 'A';
		break;
	case 65:
		rowsix[12] = 'P';
		rowsix[13] = 'A';
		break;
	case 66:
		rowsix[15] = 'P';
		rowsix[16] = 'A';
		break;
	case 67:
		rowsix[18] = 'P';
		rowsix[19] = 'A';
		break;
	case 68:
		rowsix[21] = 'P';
		rowsix[22] = 'A';
		break;
	case 71:
		rowseven[0] = 'P';
		rowseven[1] = 'A';
		break;
	case 72:
		rowseven[3] = 'P';
		rowseven[4] = 'A';
		break;
	case 73:
		rowseven[6] = 'P';
		rowseven[7] = 'A';
		break;
	case 74:
		rowseven[9] = 'P';
		rowseven[10] = 'A';
		break;
	case 75:
		rowseven[12] = 'P';
		rowseven[13] = 'A';
		break;
	case 76:
		rowseven[15] = 'P';
		rowseven[16] = 'A';
		break;
	case 77:
		rowseven[18] = 'P';
		rowseven[19] = 'A';
		break;
	case 78:
		rowseven[21] = 'P';
		rowseven[22] = 'A';
		break;
	case 81:
		roweight[0] = 'P';
		roweight[1] = 'A';
		break;
	case 82:
		roweight[3] = 'P';
		roweight[4] = 'A';
		break;
	case 83:
		roweight[6] = 'P';
		roweight[7] = 'A';
		break;
	case 84:
		roweight[9] = 'P';
		roweight[10] = 'A';
		break;
	case 85:
		roweight[12] = 'P';
		roweight[13] = 'A';
		break;
	case 86:
		roweight[15] = 'P';
		roweight[16] = 'A';
		break;
	case 87:
		roweight[18] = 'P';
		roweight[19] = 'A';
		break;
	case 88:
		roweight[21] = 'P';
		roweight[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(airpone) {
	case 11:
		rowone[0] = 'A';
		rowone[1] = 'C';
		break;
	case 12:
		rowone[3] = 'A';
		rowone[4] = 'C';
		break;
	case 13:
		rowone[6] = 'A';
		rowone[7] = 'C';
		break;
	case 14:
		rowone[9] = 'A';
		rowone[10] = 'C';
		break;
	case 15:
		rowone[12] = 'A';
		rowone[13] = 'C';
		break;
	case 16:
		rowone[15] = 'A';
		rowone[16] = 'C';
		break;
	case 17:
		rowone[18] = 'A';
		rowone[19] = 'C';
		break;
	case 18:
		rowone[21] = 'A';
		rowone[22] = 'C';
		break;
	case 21:
		rowtwo[0] = 'A';
		rowtwo[1] = 'C';
		break;
	case 22:
		rowtwo[3] = 'A';
		rowtwo[4] = 'C';
		break;
	case 23:
		rowtwo[6] = 'A';
		rowtwo[7] = 'C';
		break;
	case 24:
		rowtwo[9] = 'A';
		rowtwo[10] = 'C';
		break;
	case 25:
		rowtwo[12] = 'A';
		rowtwo[13] = 'C';
		break;
	case 26:
		rowtwo[15] = 'A';
		rowtwo[16] = 'C';
		break;
	case 27:
		rowtwo[18] = 'A';
		rowtwo[19] = 'C';
		break;
	case 28:
		rowtwo[21] = 'A';
		rowtwo[22] = 'C';
		break;
	case 31:
		rowthree[0] = 'A';
		rowthree[1] = 'C';
		break;
	case 32:
		rowthree[3] = 'A';
		rowthree[4] = 'C';
		break;
	case 33:
		rowthree[6] = 'A';
		rowthree[7] = 'C';
		break;
	case 34:
		rowthree[9] = 'A';
		rowthree[10] = 'C';
		break;
	case 35:
		rowthree[12] = 'A';
		rowthree[13] = 'C';
		break;
	case 36:
		rowthree[15] = 'A';
		rowthree[16] = 'C';
		break;
	case 37:
		rowthree[18] = 'A';
		rowthree[19] = 'C';
		break;
	case 38:
		rowthree[21] = 'A';
		rowthree[22] = 'C';
		break;
	case 41:
		rowfour[0] = 'A';
		rowfour[1] = 'C';
		break;
	case 42:
		rowfour[3] = 'A';
		rowfour[4] = 'C';
		break;
	case 43:
		rowfour[6] = 'A';
		rowfour[7] = 'C';
		break;
	case 44:
		rowfour[9] = 'A';
		rowfour[10] = 'C';
		break;
	case 45:
		rowfour[12] = 'A';
		rowfour[13] = 'C';
		break;
	case 46:
		rowfour[15] = 'A';
		rowfour[16] = 'C';
		break;
	case 47:
		rowfour[18] = 'A';
		rowfour[19] = 'C';
		break;
	case 48:
		rowfour[21] = 'A';
		rowfour[22] = 'C';
		break;
	case 51:
		rowfive[0] = 'A';
		rowfive[1] = 'C';
		break;
	case 52:
		rowfive[3] = 'A';
		rowfive[4] = 'C';
		break;
	case 53:
		rowfive[6] = 'A';
		rowfive[7] = 'C';
		break;
	case 54:
		rowfive[9] = 'A';
		rowfive[10] = 'C';
		break;
	case 55:
		rowfive[12] = 'A';
		rowfive[13] = 'C';
		break;
	case 56:
		rowfive[15] = 'A';
		rowfive[16] = 'C';
		break;
	case 57:
		rowfive[18] = 'A';
		rowfive[19] = 'C';
		break;
	case 58:
		rowfive[21] = 'A';
		rowfive[22] = 'C';
		break;
	case 61:
		rowsix[0] = 'A';
		rowsix[1] = 'C';
		break;
	case 62:
		rowsix[3] = 'A';
		rowsix[4] = 'C';
		break;
	case 63:
		rowsix[6] = 'A';
		rowsix[7] = 'C';
		break;
	case 64:
		rowsix[9] = 'A';
		rowsix[10] = 'C';
		break;
	case 65:
		rowsix[12] = 'A';
		rowsix[13] = 'C';
		break;
	case 66:
		rowsix[15] = 'A';
		rowsix[16] = 'C';
		break;
	case 67:
		rowsix[18] = 'A';
		rowsix[19] = 'C';
		break;
	case 68:
		rowsix[21] = 'A';
		rowsix[22] = 'C';
		break;
	case 71:
		rowseven[0] = 'A';
		rowseven[1] = 'C';
		break;
	case 72:
		rowseven[3] = 'A';
		rowseven[4] = 'C';
		break;
	case 73:
		rowseven[6] = 'A';
		rowseven[7] = 'C';
		break;
	case 74:
		rowseven[9] = 'A';
		rowseven[10] = 'C';
		break;
	case 75:
		rowseven[12] = 'A';
		rowseven[13] = 'C';
		break;
	case 76:
		rowseven[15] = 'A';
		rowseven[16] = 'C';
		break;
	case 77:
		rowseven[18] = 'A';
		rowseven[19] = 'C';
		break;
	case 78:
		rowseven[21] = 'A';
		rowseven[22] = 'C';
		break;
	case 81:
		roweight[0] = 'A';
		roweight[1] = 'C';
		break;
	case 82:
		roweight[3] = 'A';
		roweight[4] = 'C';
		break;
	case 83:
		roweight[6] = 'A';
		roweight[7] = 'C';
		break;
	case 84:
		roweight[9] = 'A';
		roweight[10] = 'C';
		break;
	case 85:
		roweight[12] = 'A';
		roweight[13] = 'C';
		break;
	case 86:
		roweight[15] = 'A';
		roweight[16] = 'C';
		break;
	case 87:
		roweight[18] = 'A';
		roweight[19] = 'C';
		break;
	case 88:
		roweight[21] = 'A';
		roweight[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airptwo) {
	case 11:
		rowone[0] = 'A';
		rowone[1] = 'C';
		break;
	case 12:
		rowone[3] = 'A';
		rowone[4] = 'C';
		break;
	case 13:
		rowone[6] = 'A';
		rowone[7] = 'C';
		break;
	case 14:
		rowone[9] = 'A';
		rowone[10] = 'C';
		break;
	case 15:
		rowone[12] = 'A';
		rowone[13] = 'C';
		break;
	case 16:
		rowone[15] = 'A';
		rowone[16] = 'C';
		break;
	case 17:
		rowone[18] = 'A';
		rowone[19] = 'C';
		break;
	case 18:
		rowone[21] = 'A';
		rowone[22] = 'C';
		break;
	case 21:
		rowtwo[0] = 'A';
		rowtwo[1] = 'C';
		break;
	case 22:
		rowtwo[3] = 'A';
		rowtwo[4] = 'C';
		break;
	case 23:
		rowtwo[6] = 'A';
		rowtwo[7] = 'C';
		break;
	case 24:
		rowtwo[9] = 'A';
		rowtwo[10] = 'C';
		break;
	case 25:
		rowtwo[12] = 'A';
		rowtwo[13] = 'C';
		break;
	case 26:
		rowtwo[15] = 'A';
		rowtwo[16] = 'C';
		break;
	case 27:
		rowtwo[18] = 'A';
		rowtwo[19] = 'C';
		break;
	case 28:
		rowtwo[21] = 'A';
		rowtwo[22] = 'C';
		break;
	case 31:
		rowthree[0] = 'A';
		rowthree[1] = 'C';
		break;
	case 32:
		rowthree[3] = 'A';
		rowthree[4] = 'C';
		break;
	case 33:
		rowthree[6] = 'A';
		rowthree[7] = 'C';
		break;
	case 34:
		rowthree[9] = 'A';
		rowthree[10] = 'C';
		break;
	case 35:
		rowthree[12] = 'A';
		rowthree[13] = 'C';
		break;
	case 36:
		rowthree[15] = 'A';
		rowthree[16] = 'C';
		break;
	case 37:
		rowthree[18] = 'A';
		rowthree[19] = 'C';
		break;
	case 38:
		rowthree[21] = 'A';
		rowthree[22] = 'C';
		break;
	case 41:
		rowfour[0] = 'A';
		rowfour[1] = 'C';
		break;
	case 42:
		rowfour[3] = 'A';
		rowfour[4] = 'C';
		break;
	case 43:
		rowfour[6] = 'A';
		rowfour[7] = 'C';
		break;
	case 44:
		rowfour[9] = 'A';
		rowfour[10] = 'C';
		break;
	case 45:
		rowfour[12] = 'A';
		rowfour[13] = 'C';
		break;
	case 46:
		rowfour[15] = 'A';
		rowfour[16] = 'C';
		break;
	case 47:
		rowfour[18] = 'A';
		rowfour[19] = 'C';
		break;
	case 48:
		rowfour[21] = 'A';
		rowfour[22] = 'C';
		break;
	case 51:
		rowfive[0] = 'A';
		rowfive[1] = 'C';
		break;
	case 52:
		rowfive[3] = 'A';
		rowfive[4] = 'C';
		break;
	case 53:
		rowfive[6] = 'A';
		rowfive[7] = 'C';
		break;
	case 54:
		rowfive[9] = 'A';
		rowfive[10] = 'C';
		break;
	case 55:
		rowfive[12] = 'A';
		rowfive[13] = 'C';
		break;
	case 56:
		rowfive[15] = 'A';
		rowfive[16] = 'C';
		break;
	case 57:
		rowfive[18] = 'A';
		rowfive[19] = 'C';
		break;
	case 58:
		rowfive[21] = 'A';
		rowfive[22] = 'C';
		break;
	case 61:
		rowsix[0] = 'A';
		rowsix[1] = 'C';
		break;
	case 62:
		rowsix[3] = 'A';
		rowsix[4] = 'C';
		break;
	case 63:
		rowsix[6] = 'A';
		rowsix[7] = 'C';
		break;
	case 64:
		rowsix[9] = 'A';
		rowsix[10] = 'C';
		break;
	case 65:
		rowsix[12] = 'A';
		rowsix[13] = 'C';
		break;
	case 66:
		rowsix[15] = 'A';
		rowsix[16] = 'C';
		break;
	case 67:
		rowsix[18] = 'A';
		rowsix[19] = 'C';
		break;
	case 68:
		rowsix[21] = 'A';
		rowsix[22] = 'C';
		break;
	case 71:
		rowseven[0] = 'A';
		rowseven[1] = 'C';
		break;
	case 72:
		rowseven[3] = 'A';
		rowseven[4] = 'C';
		break;
	case 73:
		rowseven[6] = 'A';
		rowseven[7] = 'C';
		break;
	case 74:
		rowseven[9] = 'A';
		rowseven[10] = 'C';
		break;
	case 75:
		rowseven[12] = 'A';
		rowseven[13] = 'C';
		break;
	case 76:
		rowseven[15] = 'A';
		rowseven[16] = 'C';
		break;
	case 77:
		rowseven[18] = 'A';
		rowseven[19] = 'C';
		break;
	case 78:
		rowseven[21] = 'A';
		rowseven[22] = 'C';
		break;
	case 81:
		roweight[0] = 'A';
		roweight[1] = 'C';
		break;
	case 82:
		roweight[3] = 'A';
		roweight[4] = 'C';
		break;
	case 83:
		roweight[6] = 'A';
		roweight[7] = 'C';
		break;
	case 84:
		roweight[9] = 'A';
		roweight[10] = 'C';
		break;
	case 85:
		roweight[12] = 'A';
		roweight[13] = 'C';
		break;
	case 86:
		roweight[15] = 'A';
		roweight[16] = 'C';
		break;
	case 87:
		roweight[18] = 'A';
		roweight[19] = 'C';
		break;
	case 88:
		roweight[21] = 'A';
		roweight[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airpone) {
	case 11:
		rowone[0] = 'A';
		rowone[1] = 'C';
		break;
	case 12:
		rowone[3] = 'A';
		rowone[4] = 'C';
		break;
	case 13:
		rowone[6] = 'A';
		rowone[7] = 'C';
		break;
	case 14:
		rowone[9] = 'A';
		rowone[10] = 'C';
		break;
	case 15:
		rowone[12] = 'A';
		rowone[13] = 'C';
		break;
	case 16:
		rowone[15] = 'A';
		rowone[16] = 'C';
		break;
	case 17:
		rowone[18] = 'A';
		rowone[19] = 'C';
		break;
	case 18:
		rowone[21] = 'A';
		rowone[22] = 'C';
		break;
	case 21:
		rowtwo[0] = 'A';
		rowtwo[1] = 'C';
		break;
	case 22:
		rowtwo[3] = 'A';
		rowtwo[4] = 'C';
		break;
	case 23:
		rowtwo[6] = 'A';
		rowtwo[7] = 'C';
		break;
	case 24:
		rowtwo[9] = 'A';
		rowtwo[10] = 'C';
		break;
	case 25:
		rowtwo[12] = 'A';
		rowtwo[13] = 'C';
		break;
	case 26:
		rowtwo[15] = 'A';
		rowtwo[16] = 'C';
		break;
	case 27:
		rowtwo[18] = 'A';
		rowtwo[19] = 'C';
		break;
	case 28:
		rowtwo[21] = 'A';
		rowtwo[22] = 'C';
		break;
	case 31:
		rowthree[0] = 'A';
		rowthree[1] = 'C';
		break;
	case 32:
		rowthree[3] = 'A';
		rowthree[4] = 'C';
		break;
	case 33:
		rowthree[6] = 'A';
		rowthree[7] = 'C';
		break;
	case 34:
		rowthree[9] = 'A';
		rowthree[10] = 'C';
		break;
	case 35:
		rowthree[12] = 'A';
		rowthree[13] = 'C';
		break;
	case 36:
		rowthree[15] = 'A';
		rowthree[16] = 'C';
		break;
	case 37:
		rowthree[18] = 'A';
		rowthree[19] = 'C';
		break;
	case 38:
		rowthree[21] = 'A';
		rowthree[22] = 'C';
		break;
	case 41:
		rowfour[0] = 'A';
		rowfour[1] = 'C';
		break;
	case 42:
		rowfour[3] = 'A';
		rowfour[4] = 'C';
		break;
	case 43:
		rowfour[6] = 'A';
		rowfour[7] = 'C';
		break;
	case 44:
		rowfour[9] = 'A';
		rowfour[10] = 'C';
		break;
	case 45:
		rowfour[12] = 'A';
		rowfour[13] = 'C';
		break;
	case 46:
		rowfour[15] = 'A';
		rowfour[16] = 'C';
		break;
	case 47:
		rowfour[18] = 'A';
		rowfour[19] = 'C';
		break;
	case 48:
		rowfour[21] = 'A';
		rowfour[22] = 'C';
		break;
	case 51:
		rowfive[0] = 'A';
		rowfive[1] = 'C';
		break;
	case 52:
		rowfive[3] = 'A';
		rowfive[4] = 'C';
		break;
	case 53:
		rowfive[6] = 'A';
		rowfive[7] = 'C';
		break;
	case 54:
		rowfive[9] = 'A';
		rowfive[10] = 'C';
		break;
	case 55:
		rowfive[12] = 'A';
		rowfive[13] = 'C';
		break;
	case 56:
		rowfive[15] = 'A';
		rowfive[16] = 'C';
		break;
	case 57:
		rowfive[18] = 'A';
		rowfive[19] = 'C';
		break;
	case 58:
		rowfive[21] = 'A';
		rowfive[22] = 'C';
		break;
	case 61:
		rowsix[0] = 'A';
		rowsix[1] = 'C';
		break;
	case 62:
		rowsix[3] = 'A';
		rowsix[4] = 'C';
		break;
	case 63:
		rowsix[6] = 'A';
		rowsix[7] = 'C';
		break;
	case 64:
		rowsix[9] = 'A';
		rowsix[10] = 'C';
		break;
	case 65:
		rowsix[12] = 'A';
		rowsix[13] = 'C';
		break;
	case 66:
		rowsix[15] = 'A';
		rowsix[16] = 'C';
		break;
	case 67:
		rowsix[18] = 'A';
		rowsix[19] = 'C';
		break;
	case 68:
		rowsix[21] = 'A';
		rowsix[22] = 'C';
		break;
	case 71:
		rowseven[0] = 'A';
		rowseven[1] = 'C';
		break;
	case 72:
		rowseven[3] = 'A';
		rowseven[4] = 'C';
		break;
	case 73:
		rowseven[6] = 'A';
		rowseven[7] = 'C';
		break;
	case 74:
		rowseven[9] = 'A';
		rowseven[10] = 'C';
		break;
	case 75:
		rowseven[12] = 'A';
		rowseven[13] = 'C';
		break;
	case 76:
		rowseven[15] = 'A';
		rowseven[16] = 'C';
		break;
	case 77:
		rowseven[18] = 'A';
		rowseven[19] = 'C';
		break;
	case 78:
		rowseven[21] = 'A';
		rowseven[22] = 'C';
		break;
	case 81:
		roweight[0] = 'A';
		roweight[1] = 'C';
		break;
	case 82:
		roweight[3] = 'A';
		roweight[4] = 'C';
		break;
	case 83:
		roweight[6] = 'A';
		roweight[7] = 'C';
		break;
	case 84:
		roweight[9] = 'A';
		roweight[10] = 'C';
		break;
	case 85:
		roweight[12] = 'A';
		roweight[13] = 'C';
		break;
	case 86:
		roweight[15] = 'A';
		roweight[16] = 'C';
		break;
	case 87:
		roweight[18] = 'A';
		roweight[19] = 'C';
		break;
	case 88:
		roweight[21] = 'A';
		roweight[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airpfour) {
	case 11:
		rowone[0] = 'A';
		rowone[1] = 'C';
		break;
	case 12:
		rowone[3] = 'A';
		rowone[4] = 'C';
		break;
	case 13:
		rowone[6] = 'A';
		rowone[7] = 'C';
		break;
	case 14:
		rowone[9] = 'A';
		rowone[10] = 'C';
		break;
	case 15:
		rowone[12] = 'A';
		rowone[13] = 'C';
		break;
	case 16:
		rowone[15] = 'A';
		rowone[16] = 'C';
		break;
	case 17:
		rowone[18] = 'A';
		rowone[19] = 'C';
		break;
	case 18:
		rowone[21] = 'A';
		rowone[22] = 'C';
		break;
	case 21:
		rowtwo[0] = 'A';
		rowtwo[1] = 'C';
		break;
	case 22:
		rowtwo[3] = 'A';
		rowtwo[4] = 'C';
		break;
	case 23:
		rowtwo[6] = 'A';
		rowtwo[7] = 'C';
		break;
	case 24:
		rowtwo[9] = 'A';
		rowtwo[10] = 'C';
		break;
	case 25:
		rowtwo[12] = 'A';
		rowtwo[13] = 'C';
		break;
	case 26:
		rowtwo[15] = 'A';
		rowtwo[16] = 'C';
		break;
	case 27:
		rowtwo[18] = 'A';
		rowtwo[19] = 'C';
		break;
	case 28:
		rowtwo[21] = 'A';
		rowtwo[22] = 'C';
		break;
	case 31:
		rowthree[0] = 'A';
		rowthree[1] = 'C';
		break;
	case 32:
		rowthree[3] = 'A';
		rowthree[4] = 'C';
		break;
	case 33:
		rowthree[6] = 'A';
		rowthree[7] = 'C';
		break;
	case 34:
		rowthree[9] = 'A';
		rowthree[10] = 'C';
		break;
	case 35:
		rowthree[12] = 'A';
		rowthree[13] = 'C';
		break;
	case 36:
		rowthree[15] = 'A';
		rowthree[16] = 'C';
		break;
	case 37:
		rowthree[18] = 'A';
		rowthree[19] = 'C';
		break;
	case 38:
		rowthree[21] = 'A';
		rowthree[22] = 'C';
		break;
	case 41:
		rowfour[0] = 'A';
		rowfour[1] = 'C';
		break;
	case 42:
		rowfour[3] = 'A';
		rowfour[4] = 'C';
		break;
	case 43:
		rowfour[6] = 'A';
		rowfour[7] = 'C';
		break;
	case 44:
		rowfour[9] = 'A';
		rowfour[10] = 'C';
		break;
	case 45:
		rowfour[12] = 'A';
		rowfour[13] = 'C';
		break;
	case 46:
		rowfour[15] = 'A';
		rowfour[16] = 'C';
		break;
	case 47:
		rowfour[18] = 'A';
		rowfour[19] = 'C';
		break;
	case 48:
		rowfour[21] = 'A';
		rowfour[22] = 'C';
		break;
	case 51:
		rowfive[0] = 'A';
		rowfive[1] = 'C';
		break;
	case 52:
		rowfive[3] = 'A';
		rowfive[4] = 'C';
		break;
	case 53:
		rowfive[6] = 'A';
		rowfive[7] = 'C';
		break;
	case 54:
		rowfive[9] = 'A';
		rowfive[10] = 'C';
		break;
	case 55:
		rowfive[12] = 'A';
		rowfive[13] = 'C';
		break;
	case 56:
		rowfive[15] = 'A';
		rowfive[16] = 'C';
		break;
	case 57:
		rowfive[18] = 'A';
		rowfive[19] = 'C';
		break;
	case 58:
		rowfive[21] = 'A';
		rowfive[22] = 'C';
		break;
	case 61:
		rowsix[0] = 'A';
		rowsix[1] = 'C';
		break;
	case 62:
		rowsix[3] = 'A';
		rowsix[4] = 'C';
		break;
	case 63:
		rowsix[6] = 'A';
		rowsix[7] = 'C';
		break;
	case 64:
		rowsix[9] = 'A';
		rowsix[10] = 'C';
		break;
	case 65:
		rowsix[12] = 'A';
		rowsix[13] = 'C';
		break;
	case 66:
		rowsix[15] = 'A';
		rowsix[16] = 'C';
		break;
	case 67:
		rowsix[18] = 'A';
		rowsix[19] = 'C';
		break;
	case 68:
		rowsix[21] = 'A';
		rowsix[22] = 'C';
		break;
	case 71:
		rowseven[0] = 'A';
		rowseven[1] = 'C';
		break;
	case 72:
		rowseven[3] = 'A';
		rowseven[4] = 'C';
		break;
	case 73:
		rowseven[6] = 'A';
		rowseven[7] = 'C';
		break;
	case 74:
		rowseven[9] = 'A';
		rowseven[10] = 'C';
		break;
	case 75:
		rowseven[12] = 'A';
		rowseven[13] = 'C';
		break;
	case 76:
		rowseven[15] = 'A';
		rowseven[16] = 'C';
		break;
	case 77:
		rowseven[18] = 'A';
		rowseven[19] = 'C';
		break;
	case 78:
		rowseven[21] = 'A';
		rowseven[22] = 'C';
		break;
	case 81:
		roweight[0] = 'A';
		roweight[1] = 'C';
		break;
	case 82:
		roweight[3] = 'A';
		roweight[4] = 'C';
		break;
	case 83:
		roweight[6] = 'A';
		roweight[7] = 'C';
		break;
	case 84:
		roweight[9] = 'A';
		roweight[10] = 'C';
		break;
	case 85:
		roweight[12] = 'A';
		roweight[13] = 'C';
		break;
	case 86:
		roweight[15] = 'A';
		roweight[16] = 'C';
		break;
	case 87:
		roweight[18] = 'A';
		roweight[19] = 'C';
		break;
	case 88:
		roweight[21] = 'A';
		roweight[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airpfive) {
	case 11:
		rowone[0] = 'A';
		rowone[1] = 'C';
		break;
	case 12:
		rowone[3] = 'A';
		rowone[4] = 'C';
		break;
	case 13:
		rowone[6] = 'A';
		rowone[7] = 'C';
		break;
	case 14:
		rowone[9] = 'A';
		rowone[10] = 'C';
		break;
	case 15:
		rowone[12] = 'A';
		rowone[13] = 'C';
		break;
	case 16:
		rowone[15] = 'A';
		rowone[16] = 'C';
		break;
	case 17:
		rowone[18] = 'A';
		rowone[19] = 'C';
		break;
	case 18:
		rowone[21] = 'A';
		rowone[22] = 'C';
		break;
	case 21:
		rowtwo[0] = 'A';
		rowtwo[1] = 'C';
		break;
	case 22:
		rowtwo[3] = 'A';
		rowtwo[4] = 'C';
		break;
	case 23:
		rowtwo[6] = 'A';
		rowtwo[7] = 'C';
		break;
	case 24:
		rowtwo[9] = 'A';
		rowtwo[10] = 'C';
		break;
	case 25:
		rowtwo[12] = 'A';
		rowtwo[13] = 'C';
		break;
	case 26:
		rowtwo[15] = 'A';
		rowtwo[16] = 'C';
		break;
	case 27:
		rowtwo[18] = 'A';
		rowtwo[19] = 'C';
		break;
	case 28:
		rowtwo[21] = 'A';
		rowtwo[22] = 'C';
		break;
	case 31:
		rowthree[0] = 'A';
		rowthree[1] = 'C';
		break;
	case 32:
		rowthree[3] = 'A';
		rowthree[4] = 'C';
		break;
	case 33:
		rowthree[6] = 'A';
		rowthree[7] = 'C';
		break;
	case 34:
		rowthree[9] = 'A';
		rowthree[10] = 'C';
		break;
	case 35:
		rowthree[12] = 'A';
		rowthree[13] = 'C';
		break;
	case 36:
		rowthree[15] = 'A';
		rowthree[16] = 'C';
		break;
	case 37:
		rowthree[18] = 'A';
		rowthree[19] = 'C';
		break;
	case 38:
		rowthree[21] = 'A';
		rowthree[22] = 'C';
		break;
	case 41:
		rowfour[0] = 'A';
		rowfour[1] = 'C';
		break;
	case 42:
		rowfour[3] = 'A';
		rowfour[4] = 'C';
		break;
	case 43:
		rowfour[6] = 'A';
		rowfour[7] = 'C';
		break;
	case 44:
		rowfour[9] = 'A';
		rowfour[10] = 'C';
		break;
	case 45:
		rowfour[12] = 'A';
		rowfour[13] = 'C';
		break;
	case 46:
		rowfour[15] = 'A';
		rowfour[16] = 'C';
		break;
	case 47:
		rowfour[18] = 'A';
		rowfour[19] = 'C';
		break;
	case 48:
		rowfour[21] = 'A';
		rowfour[22] = 'C';
		break;
	case 51:
		rowfive[0] = 'A';
		rowfive[1] = 'C';
		break;
	case 52:
		rowfive[3] = 'A';
		rowfive[4] = 'C';
		break;
	case 53:
		rowfive[6] = 'A';
		rowfive[7] = 'C';
		break;
	case 54:
		rowfive[9] = 'A';
		rowfive[10] = 'C';
		break;
	case 55:
		rowfive[12] = 'A';
		rowfive[13] = 'C';
		break;
	case 56:
		rowfive[15] = 'A';
		rowfive[16] = 'C';
		break;
	case 57:
		rowfive[18] = 'A';
		rowfive[19] = 'C';
		break;
	case 58:
		rowfive[21] = 'A';
		rowfive[22] = 'C';
		break;
	case 61:
		rowsix[0] = 'A';
		rowsix[1] = 'C';
		break;
	case 62:
		rowsix[3] = 'A';
		rowsix[4] = 'C';
		break;
	case 63:
		rowsix[6] = 'A';
		rowsix[7] = 'C';
		break;
	case 64:
		rowsix[9] = 'A';
		rowsix[10] = 'C';
		break;
	case 65:
		rowsix[12] = 'A';
		rowsix[13] = 'C';
		break;
	case 66:
		rowsix[15] = 'A';
		rowsix[16] = 'C';
		break;
	case 67:
		rowsix[18] = 'A';
		rowsix[19] = 'C';
		break;
	case 68:
		rowsix[21] = 'A';
		rowsix[22] = 'C';
		break;
	case 71:
		rowseven[0] = 'A';
		rowseven[1] = 'C';
		break;
	case 72:
		rowseven[3] = 'A';
		rowseven[4] = 'C';
		break;
	case 73:
		rowseven[6] = 'A';
		rowseven[7] = 'C';
		break;
	case 74:
		rowseven[9] = 'A';
		rowseven[10] = 'C';
		break;
	case 75:
		rowseven[12] = 'A';
		rowseven[13] = 'C';
		break;
	case 76:
		rowseven[15] = 'A';
		rowseven[16] = 'C';
		break;
	case 77:
		rowseven[18] = 'A';
		rowseven[19] = 'C';
		break;
	case 78:
		rowseven[21] = 'A';
		rowseven[22] = 'C';
		break;
	case 81:
		roweight[0] = 'A';
		roweight[1] = 'C';
		break;
	case 82:
		roweight[3] = 'A';
		roweight[4] = 'C';
		break;
	case 83:
		roweight[6] = 'A';
		roweight[7] = 'C';
		break;
	case 84:
		roweight[9] = 'A';
		roweight[10] = 'C';
		break;
	case 85:
		roweight[12] = 'A';
		roweight[13] = 'C';
		break;
	case 86:
		roweight[15] = 'A';
		roweight[16] = 'C';
		break;
	case 87:
		roweight[18] = 'A';
		roweight[19] = 'C';
		break;
	case 88:
		roweight[21] = 'A';
		roweight[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(airpthree) {
	case 11:
		rowone[0] = 'A';
		rowone[1] = 'C';
		break;
	case 12:
		rowone[3] = 'A';
		rowone[4] = 'C';
		break;
	case 13:
		rowone[6] = 'A';
		rowone[7] = 'C';
		break;
	case 14:
		rowone[9] = 'A';
		rowone[10] = 'C';
		break;
	case 15:
		rowone[12] = 'A';
		rowone[13] = 'C';
		break;
	case 16:
		rowone[15] = 'A';
		rowone[16] = 'C';
		break;
	case 17:
		rowone[18] = 'A';
		rowone[19] = 'C';
		break;
	case 18:
		rowone[21] = 'A';
		rowone[22] = 'C';
		break;
	case 21:
		rowtwo[0] = 'A';
		rowtwo[1] = 'C';
		break;
	case 22:
		rowtwo[3] = 'A';
		rowtwo[4] = 'C';
		break;
	case 23:
		rowtwo[6] = 'A';
		rowtwo[7] = 'C';
		break;
	case 24:
		rowtwo[9] = 'A';
		rowtwo[10] = 'C';
		break;
	case 25:
		rowtwo[12] = 'A';
		rowtwo[13] = 'C';
		break;
	case 26:
		rowtwo[15] = 'A';
		rowtwo[16] = 'C';
		break;
	case 27:
		rowtwo[18] = 'A';
		rowtwo[19] = 'C';
		break;
	case 28:
		rowtwo[21] = 'A';
		rowtwo[22] = 'C';
		break;
	case 31:
		rowthree[0] = 'A';
		rowthree[1] = 'C';
		break;
	case 32:
		rowthree[3] = 'A';
		rowthree[4] = 'C';
		break;
	case 33:
		rowthree[6] = 'A';
		rowthree[7] = 'C';
		break;
	case 34:
		rowthree[9] = 'A';
		rowthree[10] = 'C';
		break;
	case 35:
		rowthree[12] = 'A';
		rowthree[13] = 'C';
		break;
	case 36:
		rowthree[15] = 'A';
		rowthree[16] = 'C';
		break;
	case 37:
		rowthree[18] = 'A';
		rowthree[19] = 'C';
		break;
	case 38:
		rowthree[21] = 'A';
		rowthree[22] = 'C';
		break;
	case 41:
		rowfour[0] = 'A';
		rowfour[1] = 'C';
		break;
	case 42:
		rowfour[3] = 'A';
		rowfour[4] = 'C';
		break;
	case 43:
		rowfour[6] = 'A';
		rowfour[7] = 'C';
		break;
	case 44:
		rowfour[9] = 'A';
		rowfour[10] = 'C';
		break;
	case 45:
		rowfour[12] = 'A';
		rowfour[13] = 'C';
		break;
	case 46:
		rowfour[15] = 'A';
		rowfour[16] = 'C';
		break;
	case 47:
		rowfour[18] = 'A';
		rowfour[19] = 'C';
		break;
	case 48:
		rowfour[21] = 'A';
		rowfour[22] = 'C';
		break;
	case 51:
		rowfive[0] = 'A';
		rowfive[1] = 'C';
		break;
	case 52:
		rowfive[3] = 'A';
		rowfive[4] = 'C';
		break;
	case 53:
		rowfive[6] = 'A';
		rowfive[7] = 'C';
		break;
	case 54:
		rowfive[9] = 'A';
		rowfive[10] = 'C';
		break;
	case 55:
		rowfive[12] = 'A';
		rowfive[13] = 'C';
		break;
	case 56:
		rowfive[15] = 'A';
		rowfive[16] = 'C';
		break;
	case 57:
		rowfive[18] = 'A';
		rowfive[19] = 'C';
		break;
	case 58:
		rowfive[21] = 'A';
		rowfive[22] = 'C';
		break;
	case 61:
		rowsix[0] = 'A';
		rowsix[1] = 'C';
		break;
	case 62:
		rowsix[3] = 'A';
		rowsix[4] = 'C';
		break;
	case 63:
		rowsix[6] = 'A';
		rowsix[7] = 'C';
		break;
	case 64:
		rowsix[9] = 'A';
		rowsix[10] = 'C';
		break;
	case 65:
		rowsix[12] = 'A';
		rowsix[13] = 'C';
		break;
	case 66:
		rowsix[15] = 'A';
		rowsix[16] = 'C';
		break;
	case 67:
		rowsix[18] = 'A';
		rowsix[19] = 'C';
		break;
	case 68:
		rowsix[21] = 'A';
		rowsix[22] = 'C';
		break;
	case 71:
		rowseven[0] = 'A';
		rowseven[1] = 'C';
		break;
	case 72:
		rowseven[3] = 'A';
		rowseven[4] = 'C';
		break;
	case 73:
		rowseven[6] = 'A';
		rowseven[7] = 'C';
		break;
	case 74:
		rowseven[9] = 'A';
		rowseven[10] = 'C';
		break;
	case 75:
		rowseven[12] = 'A';
		rowseven[13] = 'C';
		break;
	case 76:
		rowseven[15] = 'A';
		rowseven[16] = 'C';
		break;
	case 77:
		rowseven[18] = 'A';
		rowseven[19] = 'C';
		break;
	case 78:
		rowseven[21] = 'A';
		rowseven[22] = 'C';
		break;
	case 81:
		roweight[0] = 'A';
		roweight[1] = 'C';
		break;
	case 82:
		roweight[3] = 'A';
		roweight[4] = 'C';
		break;
	case 83:
		roweight[6] = 'A';
		roweight[7] = 'C';
		break;
	case 84:
		roweight[9] = 'A';
		roweight[10] = 'C';
		break;
	case 85:
		roweight[12] = 'A';
		roweight[13] = 'C';
		break;
	case 86:
		roweight[15] = 'A';
		roweight[16] = 'C';
		break;
	case 87:
		roweight[18] = 'A';
		roweight[19] = 'C';
		break;
	case 88:
		roweight[21] = 'A';
		roweight[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
				switch(destroypfour) {
	case 11:
		rowone[0] = 'D';
		rowone[1] = 'E';
		break;
	case 12:
		rowone[3] = 'D';
		rowone[4] = 'E';
		break;
	case 13:
		rowone[6] = 'D';
		rowone[7] = 'E';
		break;
	case 14:
		rowone[9] = 'D';
		rowone[10] = 'E';
		break;
	case 15:
		rowone[12] = 'D';
		rowone[13] = 'E';
		break;
	case 16:
		rowone[15] = 'D';
		rowone[16] = 'E';
		break;
	case 17:
		rowone[18] = 'D';
		rowone[19] = 'E';
		break;
	case 18:
		rowone[21] = 'D';
		rowone[22] = 'E';
		break;
	case 21:
		rowtwo[0] = 'D';
		rowtwo[1] = 'E';
		break;
	case 22:
		rowtwo[3] = 'D';
		rowtwo[4] = 'E';
		break;
	case 23:
		rowtwo[6] = 'D';
		rowtwo[7] = 'E';
		break;
	case 24:
		rowtwo[9] = 'D';
		rowtwo[10] = 'E';
		break;
	case 25:
		rowtwo[12] = 'D';
		rowtwo[13] = 'E';
		break;
	case 26:
		rowtwo[15] = 'D';
		rowtwo[16] = 'E';
		break;
	case 27:
		rowtwo[18] = 'D';
		rowtwo[19] = 'E';
		break;
	case 28:
		rowtwo[21] = 'D';
		rowtwo[22] = 'E';
		break;
	case 31:
		rowthree[0] = 'D';
		rowthree[1] = 'E';
		break;
	case 32:
		rowthree[3] = 'D';
		rowthree[4] = 'E';
		break;
	case 33:
		rowthree[6] = 'D';
		rowthree[7] = 'E';
		break;
	case 34:
		rowthree[9] = 'D';
		rowthree[10] = 'E';
		break;
	case 35:
		rowthree[12] = 'D';
		rowthree[13] = 'E';
		break;
	case 36:
		rowthree[15] = 'D';
		rowthree[16] = 'E';
		break;
	case 37:
		rowthree[18] = 'D';
		rowthree[19] = 'E';
		break;
	case 38:
		rowthree[21] = 'D';
		rowthree[22] = 'E';
		break;
	case 41:
		rowfour[0] = 'D';
		rowfour[1] = 'E';
		break;
	case 42:
		rowfour[3] = 'D';
		rowfour[4] = 'E';
		break;
	case 43:
		rowfour[6] = 'D';
		rowfour[7] = 'E';
		break;
	case 44:
		rowfour[9] = 'D';
		rowfour[10] = 'E';
		break;
	case 45:
		rowfour[12] = 'D';
		rowfour[13] = 'E';
		break;
	case 46:
		rowfour[15] = 'D';
		rowfour[16] = 'E';
		break;
	case 47:
		rowfour[18] = 'D';
		rowfour[19] = 'E';
		break;
	case 48:
		rowfour[21] = 'D';
		rowfour[22] = 'E';
		break;
	case 51:
		rowfive[0] = 'D';
		rowfive[1] = 'E';
		break;
	case 52:
		rowfive[3] = 'D';
		rowfive[4] = 'E';
		break;
	case 53:
		rowfive[6] = 'D';
		rowfive[7] = 'E';
		break;
	case 54:
		rowfive[9] = 'D';
		rowfive[10] = 'E';
		break;
	case 55:
		rowfive[12] = 'D';
		rowfive[13] = 'E';
		break;
	case 56:
		rowfive[15] = 'D';
		rowfive[16] = 'E';
		break;
	case 57:
		rowfive[18] = 'D';
		rowfive[19] = 'E';
		break;
	case 58:
		rowfive[21] = 'D';
		rowfive[22] = 'E';
		break;
	case 61:
		rowsix[0] = 'D';
		rowsix[1] = 'E';
		break;
	case 62:
		rowsix[3] = 'D';
		rowsix[4] = 'E';
		break;
	case 63:
		rowsix[6] = 'D';
		rowsix[7] = 'E';
		break;
	case 64:
		rowsix[9] = 'D';
		rowsix[10] = 'E';
		break;
	case 65:
		rowsix[12] = 'D';
		rowsix[13] = 'E';
		break;
	case 66:
		rowsix[15] = 'D';
		rowsix[16] = 'E';
		break;
	case 67:
		rowsix[18] = 'D';
		rowsix[19] = 'E';
		break;
	case 68:
		rowsix[21] = 'D';
		rowsix[22] = 'E';
		break;
	case 71:
		rowseven[0] = 'D';
		rowseven[1] = 'E';
		break;
	case 72:
		rowseven[3] = 'D';
		rowseven[4] = 'E';
		break;
	case 73:
		rowseven[6] = 'D';
		rowseven[7] = 'E';
		break;
	case 74:
		rowseven[9] = 'D';
		rowseven[10] = 'E';
		break;
	case 75:
		rowseven[12] = 'D';
		rowseven[13] = 'E';
		break;
	case 76:
		rowseven[15] = 'D';
		rowseven[16] = 'E';
		break;
	case 77:
		rowseven[18] = 'D';
		rowseven[19] = 'E';
		break;
	case 78:
		rowseven[21] = 'D';
		rowseven[22] = 'E';
		break;
	case 81:
		roweight[0] = 'D';
		roweight[1] = 'E';
		break;
	case 82:
		roweight[3] = 'D';
		roweight[4] = 'E';
		break;
	case 83:
		roweight[6] = 'D';
		roweight[7] = 'E';
		break;
	case 84:
		roweight[9] = 'D';
		roweight[10] = 'E';
		break;
	case 85:
		roweight[12] = 'D';
		roweight[13] = 'E';
		break;
	case 86:
		roweight[15] = 'D';
		roweight[16] = 'E';
		break;
	case 87:
		roweight[18] = 'D';
		roweight[19] = 'E';
		break;
	case 88:
		roweight[21] = 'D';
		roweight[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
				switch(destroypthree) {
	case 11:
		rowone[0] = 'D';
		rowone[1] = 'E';
		break;
	case 12:
		rowone[3] = 'D';
		rowone[4] = 'E';
		break;
	case 13:
		rowone[6] = 'D';
		rowone[7] = 'E';
		break;
	case 14:
		rowone[9] = 'D';
		rowone[10] = 'E';
		break;
	case 15:
		rowone[12] = 'D';
		rowone[13] = 'E';
		break;
	case 16:
		rowone[15] = 'D';
		rowone[16] = 'E';
		break;
	case 17:
		rowone[18] = 'D';
		rowone[19] = 'E';
		break;
	case 18:
		rowone[21] = 'D';
		rowone[22] = 'E';
		break;
	case 21:
		rowtwo[0] = 'D';
		rowtwo[1] = 'E';
		break;
	case 22:
		rowtwo[3] = 'D';
		rowtwo[4] = 'E';
		break;
	case 23:
		rowtwo[6] = 'D';
		rowtwo[7] = 'E';
		break;
	case 24:
		rowtwo[9] = 'D';
		rowtwo[10] = 'E';
		break;
	case 25:
		rowtwo[12] = 'D';
		rowtwo[13] = 'E';
		break;
	case 26:
		rowtwo[15] = 'D';
		rowtwo[16] = 'E';
		break;
	case 27:
		rowtwo[18] = 'D';
		rowtwo[19] = 'E';
		break;
	case 28:
		rowtwo[21] = 'D';
		rowtwo[22] = 'E';
		break;
	case 31:
		rowthree[0] = 'D';
		rowthree[1] = 'E';
		break;
	case 32:
		rowthree[3] = 'D';
		rowthree[4] = 'E';
		break;
	case 33:
		rowthree[6] = 'D';
		rowthree[7] = 'E';
		break;
	case 34:
		rowthree[9] = 'D';
		rowthree[10] = 'E';
		break;
	case 35:
		rowthree[12] = 'D';
		rowthree[13] = 'E';
		break;
	case 36:
		rowthree[15] = 'D';
		rowthree[16] = 'E';
		break;
	case 37:
		rowthree[18] = 'D';
		rowthree[19] = 'E';
		break;
	case 38:
		rowthree[21] = 'D';
		rowthree[22] = 'E';
		break;
	case 41:
		rowfour[0] = 'D';
		rowfour[1] = 'E';
		break;
	case 42:
		rowfour[3] = 'D';
		rowfour[4] = 'E';
		break;
	case 43:
		rowfour[6] = 'D';
		rowfour[7] = 'E';
		break;
	case 44:
		rowfour[9] = 'D';
		rowfour[10] = 'E';
		break;
	case 45:
		rowfour[12] = 'D';
		rowfour[13] = 'E';
		break;
	case 46:
		rowfour[15] = 'D';
		rowfour[16] = 'E';
		break;
	case 47:
		rowfour[18] = 'D';
		rowfour[19] = 'E';
		break;
	case 48:
		rowfour[21] = 'D';
		rowfour[22] = 'E';
		break;
	case 51:
		rowfive[0] = 'D';
		rowfive[1] = 'E';
		break;
	case 52:
		rowfive[3] = 'D';
		rowfive[4] = 'E';
		break;
	case 53:
		rowfive[6] = 'D';
		rowfive[7] = 'E';
		break;
	case 54:
		rowfive[9] = 'D';
		rowfive[10] = 'E';
		break;
	case 55:
		rowfive[12] = 'D';
		rowfive[13] = 'E';
		break;
	case 56:
		rowfive[15] = 'D';
		rowfive[16] = 'E';
		break;
	case 57:
		rowfive[18] = 'D';
		rowfive[19] = 'E';
		break;
	case 58:
		rowfive[21] = 'D';
		rowfive[22] = 'E';
		break;
	case 61:
		rowsix[0] = 'D';
		rowsix[1] = 'E';
		break;
	case 62:
		rowsix[3] = 'D';
		rowsix[4] = 'E';
		break;
	case 63:
		rowsix[6] = 'D';
		rowsix[7] = 'E';
		break;
	case 64:
		rowsix[9] = 'D';
		rowsix[10] = 'E';
		break;
	case 65:
		rowsix[12] = 'D';
		rowsix[13] = 'E';
		break;
	case 66:
		rowsix[15] = 'D';
		rowsix[16] = 'E';
		break;
	case 67:
		rowsix[18] = 'D';
		rowsix[19] = 'E';
		break;
	case 68:
		rowsix[21] = 'D';
		rowsix[22] = 'E';
		break;
	case 71:
		rowseven[0] = 'D';
		rowseven[1] = 'E';
		break;
	case 72:
		rowseven[3] = 'D';
		rowseven[4] = 'E';
		break;
	case 73:
		rowseven[6] = 'D';
		rowseven[7] = 'E';
		break;
	case 74:
		rowseven[9] = 'D';
		rowseven[10] = 'E';
		break;
	case 75:
		rowseven[12] = 'D';
		rowseven[13] = 'E';
		break;
	case 76:
		rowseven[15] = 'D';
		rowseven[16] = 'E';
		break;
	case 77:
		rowseven[18] = 'D';
		rowseven[19] = 'E';
		break;
	case 78:
		rowseven[21] = 'D';
		rowseven[22] = 'E';
		break;
	case 81:
		roweight[0] = 'D';
		roweight[1] = 'E';
		break;
	case 82:
		roweight[3] = 'D';
		roweight[4] = 'E';
		break;
	case 83:
		roweight[6] = 'D';
		roweight[7] = 'E';
		break;
	case 84:
		roweight[9] = 'D';
		roweight[10] = 'E';
		break;
	case 85:
		roweight[12] = 'D';
		roweight[13] = 'E';
		break;
	case 86:
		roweight[15] = 'D';
		roweight[16] = 'E';
		break;
	case 87:
		roweight[18] = 'D';
		roweight[19] = 'E';
		break;
	case 88:
		roweight[21] = 'D';
		roweight[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
				switch(destroyptwo) {
	case 11:
		rowone[0] = 'D';
		rowone[1] = 'E';
		break;
	case 12:
		rowone[3] = 'D';
		rowone[4] = 'E';
		break;
	case 13:
		rowone[6] = 'D';
		rowone[7] = 'E';
		break;
	case 14:
		rowone[9] = 'D';
		rowone[10] = 'E';
		break;
	case 15:
		rowone[12] = 'D';
		rowone[13] = 'E';
		break;
	case 16:
		rowone[15] = 'D';
		rowone[16] = 'E';
		break;
	case 17:
		rowone[18] = 'D';
		rowone[19] = 'E';
		break;
	case 18:
		rowone[21] = 'D';
		rowone[22] = 'E';
		break;
	case 21:
		rowtwo[0] = 'D';
		rowtwo[1] = 'E';
		break;
	case 22:
		rowtwo[3] = 'D';
		rowtwo[4] = 'E';
		break;
	case 23:
		rowtwo[6] = 'D';
		rowtwo[7] = 'E';
		break;
	case 24:
		rowtwo[9] = 'D';
		rowtwo[10] = 'E';
		break;
	case 25:
		rowtwo[12] = 'D';
		rowtwo[13] = 'E';
		break;
	case 26:
		rowtwo[15] = 'D';
		rowtwo[16] = 'E';
		break;
	case 27:
		rowtwo[18] = 'D';
		rowtwo[19] = 'E';
		break;
	case 28:
		rowtwo[21] = 'D';
		rowtwo[22] = 'E';
		break;
	case 31:
		rowthree[0] = 'D';
		rowthree[1] = 'E';
		break;
	case 32:
		rowthree[3] = 'D';
		rowthree[4] = 'E';
		break;
	case 33:
		rowthree[6] = 'D';
		rowthree[7] = 'E';
		break;
	case 34:
		rowthree[9] = 'D';
		rowthree[10] = 'E';
		break;
	case 35:
		rowthree[12] = 'D';
		rowthree[13] = 'E';
		break;
	case 36:
		rowthree[15] = 'D';
		rowthree[16] = 'E';
		break;
	case 37:
		rowthree[18] = 'D';
		rowthree[19] = 'E';
		break;
	case 38:
		rowthree[21] = 'D';
		rowthree[22] = 'E';
		break;
	case 41:
		rowfour[0] = 'D';
		rowfour[1] = 'E';
		break;
	case 42:
		rowfour[3] = 'D';
		rowfour[4] = 'E';
		break;
	case 43:
		rowfour[6] = 'D';
		rowfour[7] = 'E';
		break;
	case 44:
		rowfour[9] = 'D';
		rowfour[10] = 'E';
		break;
	case 45:
		rowfour[12] = 'D';
		rowfour[13] = 'E';
		break;
	case 46:
		rowfour[15] = 'D';
		rowfour[16] = 'E';
		break;
	case 47:
		rowfour[18] = 'D';
		rowfour[19] = 'E';
		break;
	case 48:
		rowfour[21] = 'D';
		rowfour[22] = 'E';
		break;
	case 51:
		rowfive[0] = 'D';
		rowfive[1] = 'E';
		break;
	case 52:
		rowfive[3] = 'D';
		rowfive[4] = 'E';
		break;
	case 53:
		rowfive[6] = 'D';
		rowfive[7] = 'E';
		break;
	case 54:
		rowfive[9] = 'D';
		rowfive[10] = 'E';
		break;
	case 55:
		rowfive[12] = 'D';
		rowfive[13] = 'E';
		break;
	case 56:
		rowfive[15] = 'D';
		rowfive[16] = 'E';
		break;
	case 57:
		rowfive[18] = 'D';
		rowfive[19] = 'E';
		break;
	case 58:
		rowfive[21] = 'D';
		rowfive[22] = 'E';
		break;
	case 61:
		rowsix[0] = 'D';
		rowsix[1] = 'E';
		break;
	case 62:
		rowsix[3] = 'D';
		rowsix[4] = 'E';
		break;
	case 63:
		rowsix[6] = 'D';
		rowsix[7] = 'E';
		break;
	case 64:
		rowsix[9] = 'D';
		rowsix[10] = 'E';
		break;
	case 65:
		rowsix[12] = 'D';
		rowsix[13] = 'E';
		break;
	case 66:
		rowsix[15] = 'D';
		rowsix[16] = 'E';
		break;
	case 67:
		rowsix[18] = 'D';
		rowsix[19] = 'E';
		break;
	case 68:
		rowsix[21] = 'D';
		rowsix[22] = 'E';
		break;
	case 71:
		rowseven[0] = 'D';
		rowseven[1] = 'E';
		break;
	case 72:
		rowseven[3] = 'D';
		rowseven[4] = 'E';
		break;
	case 73:
		rowseven[6] = 'D';
		rowseven[7] = 'E';
		break;
	case 74:
		rowseven[9] = 'D';
		rowseven[10] = 'E';
		break;
	case 75:
		rowseven[12] = 'D';
		rowseven[13] = 'E';
		break;
	case 76:
		rowseven[15] = 'D';
		rowseven[16] = 'E';
		break;
	case 77:
		rowseven[18] = 'D';
		rowseven[19] = 'E';
		break;
	case 78:
		rowseven[21] = 'D';
		rowseven[22] = 'E';
		break;
	case 81:
		roweight[0] = 'D';
		roweight[1] = 'E';
		break;
	case 82:
		roweight[3] = 'D';
		roweight[4] = 'E';
		break;
	case 83:
		roweight[6] = 'D';
		roweight[7] = 'E';
		break;
	case 84:
		roweight[9] = 'D';
		roweight[10] = 'E';
		break;
	case 85:
		roweight[12] = 'D';
		roweight[13] = 'E';
		break;
	case 86:
		roweight[15] = 'D';
		roweight[16] = 'E';
		break;
	case 87:
		roweight[18] = 'D';
		roweight[19] = 'E';
		break;
	case 88:
		roweight[21] = 'D';
		roweight[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(destroypone) {
	case 11:
		rowone[0] = 'D';
		rowone[1] = 'E';
		break;
	case 12:
		rowone[3] = 'D';
		rowone[4] = 'E';
		break;
	case 13:
		rowone[6] = 'D';
		rowone[7] = 'E';
		break;
	case 14:
		rowone[9] = 'D';
		rowone[10] = 'E';
		break;
	case 15:
		rowone[12] = 'D';
		rowone[13] = 'E';
		break;
	case 16:
		rowone[15] = 'D';
		rowone[16] = 'E';
		break;
	case 17:
		rowone[18] = 'D';
		rowone[19] = 'E';
		break;
	case 18:
		rowone[21] = 'D';
		rowone[22] = 'E';
		break;
	case 21:
		rowtwo[0] = 'D';
		rowtwo[1] = 'E';
		break;
	case 22:
		rowtwo[3] = 'D';
		rowtwo[4] = 'E';
		break;
	case 23:
		rowtwo[6] = 'D';
		rowtwo[7] = 'E';
		break;
	case 24:
		rowtwo[9] = 'D';
		rowtwo[10] = 'E';
		break;
	case 25:
		rowtwo[12] = 'D';
		rowtwo[13] = 'E';
		break;
	case 26:
		rowtwo[15] = 'D';
		rowtwo[16] = 'E';
		break;
	case 27:
		rowtwo[18] = 'D';
		rowtwo[19] = 'E';
		break;
	case 28:
		rowtwo[21] = 'D';
		rowtwo[22] = 'E';
		break;
	case 31:
		rowthree[0] = 'D';
		rowthree[1] = 'E';
		break;
	case 32:
		rowthree[3] = 'D';
		rowthree[4] = 'E';
		break;
	case 33:
		rowthree[6] = 'D';
		rowthree[7] = 'E';
		break;
	case 34:
		rowthree[9] = 'D';
		rowthree[10] = 'E';
		break;
	case 35:
		rowthree[12] = 'D';
		rowthree[13] = 'E';
		break;
	case 36:
		rowthree[15] = 'D';
		rowthree[16] = 'E';
		break;
	case 37:
		rowthree[18] = 'D';
		rowthree[19] = 'E';
		break;
	case 38:
		rowthree[21] = 'D';
		rowthree[22] = 'E';
		break;
	case 41:
		rowfour[0] = 'D';
		rowfour[1] = 'E';
		break;
	case 42:
		rowfour[3] = 'D';
		rowfour[4] = 'E';
		break;
	case 43:
		rowfour[6] = 'D';
		rowfour[7] = 'E';
		break;
	case 44:
		rowfour[9] = 'D';
		rowfour[10] = 'E';
		break;
	case 45:
		rowfour[12] = 'D';
		rowfour[13] = 'E';
		break;
	case 46:
		rowfour[15] = 'D';
		rowfour[16] = 'E';
		break;
	case 47:
		rowfour[18] = 'D';
		rowfour[19] = 'E';
		break;
	case 48:
		rowfour[21] = 'D';
		rowfour[22] = 'E';
		break;
	case 51:
		rowfive[0] = 'D';
		rowfive[1] = 'E';
		break;
	case 52:
		rowfive[3] = 'D';
		rowfive[4] = 'E';
		break;
	case 53:
		rowfive[6] = 'D';
		rowfive[7] = 'E';
		break;
	case 54:
		rowfive[9] = 'D';
		rowfive[10] = 'E';
		break;
	case 55:
		rowfive[12] = 'D';
		rowfive[13] = 'E';
		break;
	case 56:
		rowfive[15] = 'D';
		rowfive[16] = 'E';
		break;
	case 57:
		rowfive[18] = 'D';
		rowfive[19] = 'E';
		break;
	case 58:
		rowfive[21] = 'D';
		rowfive[22] = 'E';
		break;
	case 61:
		rowsix[0] = 'D';
		rowsix[1] = 'E';
		break;
	case 62:
		rowsix[3] = 'D';
		rowsix[4] = 'E';
		break;
	case 63:
		rowsix[6] = 'D';
		rowsix[7] = 'E';
		break;
	case 64:
		rowsix[9] = 'D';
		rowsix[10] = 'E';
		break;
	case 65:
		rowsix[12] = 'D';
		rowsix[13] = 'E';
		break;
	case 66:
		rowsix[15] = 'D';
		rowsix[16] = 'E';
		break;
	case 67:
		rowsix[18] = 'D';
		rowsix[19] = 'E';
		break;
	case 68:
		rowsix[21] = 'D';
		rowsix[22] = 'E';
		break;
	case 71:
		rowseven[0] = 'D';
		rowseven[1] = 'E';
		break;
	case 72:
		rowseven[3] = 'D';
		rowseven[4] = 'E';
		break;
	case 73:
		rowseven[6] = 'D';
		rowseven[7] = 'E';
		break;
	case 74:
		rowseven[9] = 'D';
		rowseven[10] = 'E';
		break;
	case 75:
		rowseven[12] = 'D';
		rowseven[13] = 'E';
		break;
	case 76:
		rowseven[15] = 'D';
		rowseven[16] = 'E';
		break;
	case 77:
		rowseven[18] = 'D';
		rowseven[19] = 'E';
		break;
	case 78:
		rowseven[21] = 'D';
		rowseven[22] = 'E';
		break;
	case 81:
		roweight[0] = 'D';
		roweight[1] = 'E';
		break;
	case 82:
		roweight[3] = 'D';
		roweight[4] = 'E';
		break;
	case 83:
		roweight[6] = 'D';
		roweight[7] = 'E';
		break;
	case 84:
		roweight[9] = 'D';
		roweight[10] = 'E';
		break;
	case 85:
		roweight[12] = 'D';
		roweight[13] = 'E';
		break;
	case 86:
		roweight[15] = 'D';
		roweight[16] = 'E';
		break;
	case 87:
		roweight[18] = 'D';
		roweight[19] = 'E';
		break;
	case 88:
		roweight[21] = 'D';
		roweight[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	printf(rowone);  /* Displays P1s ships positions */
	printf(rowtwo);
	printf(rowthree);
	printf(rowfour);
	printf(rowfive);
	printf(rowsix);
	printf(rowseven);
	printf(roweight);
	getche();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("These are the posible positions: \n");
	printf("11 ,12 ,13 ,14 ,15 ,16 ,17 ,18\n");
	printf("21 ,22 ,23 ,24 ,25 ,26 ,27 ,28\n");
	printf("31 ,32 ,33 ,34 ,35 ,36 ,37 ,38\n");
	printf("41 ,42 ,43 ,44 ,45 ,46 ,47 ,48\n");
	printf("51 ,52 ,53 ,54 ,55 ,56 ,57 ,58\n");
	printf("61 ,62 ,63 ,64 ,65 ,66 ,67 ,68\n");
	printf("71 ,72 ,73 ,74 ,75 ,76 ,77 ,78\n");
	printf("81 ,82 ,83 ,84 ,85 ,86 ,87 ,88\n");
	printf("(3 spaces)Player 2 enter your Battle ship's poition: \n");
	printf("position1: ");    /* gets P2s ships positions */
	scanf("%d", &battleponetwo);
	printf("position2: ");
	scanf("%d", &battleptwotwo);
	printf("position3: ");
	scanf("%d", &battlepthreetwo);
	printf("(2 spaces)Enter your Patrol boat's poition: \n");
	printf("position1: ");
	scanf("%d", &patrolponetwo);
	printf("position2: ");
	scanf("%d", &patrolptwotwo);
	printf("(3 spaces)Enter your Subs's poition: \n");
	printf("position1: ");
	scanf("%d", &subponetwo);
	printf("position2: ");
	scanf("%d", &subptwotwo);
	printf("position3: ");
	scanf("%d", &subpthreetwo);
	printf("(4 spaces)Enter your Destroyers's poition: \n");
	printf("position1: ");
	scanf("%d", &destroyponetwo);
	printf("position2: ");
	scanf("%d", &destroyptwotwo);
	printf("position3: ");
	scanf("%d", &destroypthreetwo);
	printf("position4: ");
	scanf("%d", &destroypfourtwo);
	printf("(5 spaces)Enter your Air craft carier's poition: \n");
	printf("position1: ");
	scanf("%d", &airponetwo);
	printf("position2: ");
	scanf("%d", &airptwotwo);
	printf("position3: ");
	scanf("%d", &airpthreetwo);
	printf("position4: ");
	scanf("%d", &airpfourtwo);
	printf("position5: ");
	scanf("%d", &airpfivetwo);
	printf("Here is your board: \n");
			switch(battleponetwo) {
	case 11:
		rowonetwo[0] = 'B';
		rowonetwo[1] = 'A';
		break;
	case 12:
		rowonetwo[3] = 'B';
		rowonetwo[4] = 'A';
		break;
	case 13:
		rowonetwo[6] = 'B';
		rowonetwo[7] = 'A';
		break;
	case 14:
		rowonetwo[9] = 'B';
		rowonetwo[10] = 'A';
		break;
	case 15:
		rowonetwo[12] = 'B';
		rowonetwo[13] = 'A';
		break;
	case 16:
		rowonetwo[15] = 'B';
		rowonetwo[16] = 'A';
		break;
	case 17:
		rowonetwo[18] = 'B';
		rowonetwo[19] = 'A';
		break;
	case 18:
		rowonetwo[21] = 'B';
		rowonetwo[22] = 'A';
		break;
	case 21:
		rowtwotwo[0] = 'B';
		rowtwotwo[1] = 'A';
		break;
	case 22:
		rowtwotwo[3] = 'B';
		rowtwotwo[4] = 'A';
		break;
	case 23:
		rowtwotwo[6] = 'B';
		rowtwotwo[7] = 'A';
		break;
	case 24:
		rowtwotwo[9] = 'B';
		rowtwotwo[10] = 'A';
		break;
	case 25:
		rowtwotwo[12] = 'B';
		rowtwotwo[13] = 'A';
		break;
	case 26:
		rowtwotwo[15] = 'B';
		rowtwotwo[16] = 'A';
		break;
	case 27:
		rowtwotwo[18] = 'B';
		rowtwotwo[19] = 'A';
		break;
	case 28:
		rowtwotwo[21] = 'B';
		rowtwotwo[22] = 'A';
		break;
	case 31:
		rowthreetwo[0] = 'B';
		rowthreetwo[1] = 'A';
		break;
	case 32:
		rowthreetwo[3] = 'B';
		rowthreetwo[4] = 'A';
		break;
	case 33:
		rowthreetwo[6] = 'B';
		rowthreetwo[7] = 'A';
		break;
	case 34:
		rowthreetwo[9] = 'B';
		rowthreetwo[10] = 'A';
		break;
	case 35:
		rowthreetwo[12] = 'B';
		rowthreetwo[13] = 'A';
		break;
	case 36:
		rowthreetwo[15] = 'B';
		rowthreetwo[16] = 'A';
		break;
	case 37:
		rowthreetwo[18] = 'B';
		rowthreetwo[19] = 'A';
		break;
	case 38:
		rowthreetwo[21] = 'B';
		rowthreetwo[22] = 'A';
		break;
	case 41:
		rowfourtwo[0] = 'B';
		rowfourtwo[1] = 'A';
		break;
	case 42:
		rowfourtwo[3] = 'B';
		rowfourtwo[4] = 'A';
		break;
	case 43:
		rowfourtwo[6] = 'B';
		rowfourtwo[7] = 'A';
		break;
	case 44:
		rowfourtwo[9] = 'B';
		rowfourtwo[10] = 'A';
		break;
	case 45:
		rowfourtwo[12] = 'B';
		rowfourtwo[13] = 'A';
		break;
	case 46:
		rowfourtwo[15] = 'B';
		rowfourtwo[16] = 'A';
		break;
	case 47:
		rowfourtwo[18] = 'B';
		rowfourtwo[19] = 'A';
		break;
	case 48:
		rowfourtwo[21] = 'B';
		rowfourtwo[22] = 'A';
		break;
	case 51:
		rowfivetwo[0] = 'B';
		rowfivetwo[1] = 'A';
		break;
	case 52:
		rowfivetwo[3] = 'B';
		rowfivetwo[4] = 'A';
		break;
	case 53:
		rowfivetwo[6] = 'B';
		rowfivetwo[7] = 'A';
		break;
	case 54:
		rowfivetwo[9] = 'B';
		rowfivetwo[10] = 'A';
		break;
	case 55:
		rowfivetwo[12] = 'B';
		rowfivetwo[13] = 'A';
		break;
	case 56:
		rowfivetwo[15] = 'B';
		rowfivetwo[16] = 'A';
		break;
	case 57:
		rowfivetwo[18] = 'B';
		rowfivetwo[19] = 'A';
		break;
	case 58:
		rowfivetwo[21] = 'B';
		rowfivetwo[22] = 'A';
		break;
	case 61:
		rowsixtwo[0] = 'B';
		rowsixtwo[1] = 'A';
		break;
	case 62:
		rowsixtwo[3] = 'B';
		rowsixtwo[4] = 'A';
		break;
	case 63:
		rowsixtwo[6] = 'B';
		rowsixtwo[7] = 'A';
		break;
	case 64:
		rowsixtwo[9] = 'B';
		rowsixtwo[10] = 'A';
		break;
	case 65:
		rowsixtwo[12] = 'B';
		rowsixtwo[13] = 'A';
		break;
	case 66:
		rowsixtwo[15] = 'B';
		rowsixtwo[16] = 'A';
		break;
	case 67:
		rowsixtwo[18] = 'B';
		rowsixtwo[19] = 'A';
		break;
	case 68:
		rowsixtwo[21] = 'B';
		rowsixtwo[22] = 'A';
		break;
	case 71:
		rowseventwo[0] = 'B';
		rowseventwo[1] = 'A';
		break;
	case 72:
		rowseventwo[3] = 'B';
		rowseventwo[4] = 'A';
		break;
	case 73:
		rowseventwo[6] = 'B';
		rowseventwo[7] = 'A';
		break;
	case 74:
		rowseventwo[9] = 'B';
		rowseventwo[10] = 'A';
		break;
	case 75:
		rowseventwo[12] = 'B';
		rowseventwo[13] = 'A';
		break;
	case 76:
		rowseventwo[15] = 'B';
		rowseventwo[16] = 'A';
		break;
	case 77:
		rowseventwo[18] = 'B';
		rowseventwo[19] = 'A';
		break;
	case 78:
		rowseventwo[21] = 'B';
		rowseventwo[22] = 'A';
		break;
	case 81:
		roweighttwo[0] = 'B';
		roweighttwo[1] = 'A';
		break;
	case 82:
		roweighttwo[3] = 'B';
		roweighttwo[4] = 'A';
		break;
	case 83:
		roweighttwo[6] = 'B';
		roweighttwo[7] = 'A';
		break;
	case 84:
		roweighttwo[9] = 'B';
		roweighttwo[10] = 'A';
		break;
	case 85:
		roweighttwo[12] = 'B';
		roweighttwo[13] = 'A';
		break;
	case 86:
		roweighttwo[15] = 'B';
		roweighttwo[16] = 'A';
		break;
	case 87:
		roweighttwo[18] = 'B';
		roweighttwo[19] = 'A';
		break;
	case 88:
		roweighttwo[21] = 'B';
		roweighttwo[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(battlepthreetwo) {
	case 11:
		rowonetwo[0] = 'B';
		rowonetwo[1] = 'A';
		break;
	case 12:
		rowonetwo[3] = 'B';
		rowonetwo[4] = 'A';
		break;
	case 13:
		rowonetwo[6] = 'B';
		rowonetwo[7] = 'A';
		break;
	case 14:
		rowonetwo[9] = 'B';
		rowonetwo[10] = 'A';
		break;
	case 15:
		rowonetwo[12] = 'B';
		rowonetwo[13] = 'A';
		break;
	case 16:
		rowonetwo[15] = 'B';
		rowonetwo[16] = 'A';
		break;
	case 17:
		rowonetwo[18] = 'B';
		rowonetwo[19] = 'A';
		break;
	case 18:
		rowonetwo[21] = 'B';
		rowonetwo[22] = 'A';
		break;
	case 21:
		rowtwotwo[0] = 'B';
		rowtwotwo[1] = 'A';
		break;
	case 22:
		rowtwotwo[3] = 'B';
		rowtwotwo[4] = 'A';
		break;
	case 23:
		rowtwotwo[6] = 'B';
		rowtwotwo[7] = 'A';
		break;
	case 24:
		rowtwotwo[9] = 'B';
		rowtwotwo[10] = 'A';
		break;
	case 25:
		rowtwotwo[12] = 'B';
		rowtwotwo[13] = 'A';
		break;
	case 26:
		rowtwotwo[15] = 'B';
		rowtwotwo[16] = 'A';
		break;
	case 27:
		rowtwotwo[18] = 'B';
		rowtwotwo[19] = 'A';
		break;
	case 28:
		rowtwotwo[21] = 'B';
		rowtwotwo[22] = 'A';
		break;
	case 31:
		rowthreetwo[0] = 'B';
		rowthreetwo[1] = 'A';
		break;
	case 32:
		rowthreetwo[3] = 'B';
		rowthreetwo[4] = 'A';
		break;
	case 33:
		rowthreetwo[6] = 'B';
		rowthreetwo[7] = 'A';
		break;
	case 34:
		rowthreetwo[9] = 'B';
		rowthreetwo[10] = 'A';
		break;
	case 35:
		rowthreetwo[12] = 'B';
		rowthreetwo[13] = 'A';
		break;
	case 36:
		rowthreetwo[15] = 'B';
		rowthreetwo[16] = 'A';
		break;
	case 37:
		rowthreetwo[18] = 'B';
		rowthreetwo[19] = 'A';
		break;
	case 38:
		rowthreetwo[21] = 'B';
		rowthreetwo[22] = 'A';
		break;
	case 41:
		rowfourtwo[0] = 'B';
		rowfourtwo[1] = 'A';
		break;
	case 42:
		rowfourtwo[3] = 'B';
		rowfourtwo[4] = 'A';
		break;
	case 43:
		rowfourtwo[6] = 'B';
		rowfourtwo[7] = 'A';
		break;
	case 44:
		rowfourtwo[9] = 'B';
		rowfourtwo[10] = 'A';
		break;
	case 45:
		rowfourtwo[12] = 'B';
		rowfourtwo[13] = 'A';
		break;
	case 46:
		rowfourtwo[15] = 'B';
		rowfourtwo[16] = 'A';
		break;
	case 47:
		rowfourtwo[18] = 'B';
		rowfourtwo[19] = 'A';
		break;
	case 48:
		rowfourtwo[21] = 'B';
		rowfourtwo[22] = 'A';
		break;
	case 51:
		rowfivetwo[0] = 'B';
		rowfivetwo[1] = 'A';
		break;
	case 52:
		rowfivetwo[3] = 'B';
		rowfivetwo[4] = 'A';
		break;
	case 53:
		rowfivetwo[6] = 'B';
		rowfivetwo[7] = 'A';
		break;
	case 54:
		rowfivetwo[9] = 'B';
		rowfivetwo[10] = 'A';
		break;
	case 55:
		rowfivetwo[12] = 'B';
		rowfivetwo[13] = 'A';
		break;
	case 56:
		rowfivetwo[15] = 'B';
		rowfivetwo[16] = 'A';
		break;
	case 57:
		rowfivetwo[18] = 'B';
		rowfivetwo[19] = 'A';
		break;
	case 58:
		rowfivetwo[21] = 'B';
		rowfivetwo[22] = 'A';
		break;
	case 61:
		rowsixtwo[0] = 'B';
		rowsixtwo[1] = 'A';
		break;
	case 62:
		rowsixtwo[3] = 'B';
		rowsixtwo[4] = 'A';
		break;
	case 63:
		rowsixtwo[6] = 'B';
		rowsixtwo[7] = 'A';
		break;
	case 64:
		rowsixtwo[9] = 'B';
		rowsixtwo[10] = 'A';
		break;
	case 65:
		rowsixtwo[12] = 'B';
		rowsixtwo[13] = 'A';
		break;
	case 66:
		rowsixtwo[15] = 'B';
		rowsixtwo[16] = 'A';
		break;
	case 67:
		rowsixtwo[18] = 'B';
		rowsixtwo[19] = 'A';
		break;
	case 68:
		rowsixtwo[21] = 'B';
		rowsixtwo[22] = 'A';
		break;
	case 71:
		rowseventwo[0] = 'B';
		rowseventwo[1] = 'A';
		break;
	case 72:
		rowseventwo[3] = 'B';
		rowseventwo[4] = 'A';
		break;
	case 73:
		rowseventwo[6] = 'B';
		rowseventwo[7] = 'A';
		break;
	case 74:
		rowseventwo[9] = 'B';
		rowseventwo[10] = 'A';
		break;
	case 75:
		rowseventwo[12] = 'B';
		rowseventwo[13] = 'A';
		break;
	case 76:
		rowseventwo[15] = 'B';
		rowseventwo[16] = 'A';
		break;
	case 77:
		rowseventwo[18] = 'B';
		rowseventwo[19] = 'A';
		break;
	case 78:
		rowseventwo[21] = 'B';
		rowseventwo[22] = 'A';
		break;
	case 81:
		roweighttwo[0] = 'B';
		roweighttwo[1] = 'A';
		break;
	case 82:
		roweighttwo[3] = 'B';
		roweighttwo[4] = 'A';
		break;
	case 83:
		roweighttwo[6] = 'B';
		roweighttwo[7] = 'A';
		break;
	case 84:
		roweighttwo[9] = 'B';
		roweighttwo[10] = 'A';
		break;
	case 85:
		roweighttwo[12] = 'B';
		roweighttwo[13] = 'A';
		break;
	case 86:
		roweighttwo[15] = 'B';
		roweighttwo[16] = 'A';
		break;
	case 87:
		roweighttwo[18] = 'B';
		roweighttwo[19] = 'A';
		break;
	case 88:
		roweighttwo[21] = 'B';
		roweighttwo[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(battleptwotwo) {
	case 11:
		rowonetwo[0] = 'B';
		rowonetwo[1] = 'A';
		break;
	case 12:
		rowonetwo[3] = 'B';
		rowonetwo[4] = 'A';
		break;
	case 13:
		rowonetwo[6] = 'B';
		rowonetwo[7] = 'A';
		break;
	case 14:
		rowonetwo[9] = 'B';
		rowonetwo[10] = 'A';
		break;
	case 15:
		rowonetwo[12] = 'B';
		rowonetwo[13] = 'A';
		break;
	case 16:
		rowonetwo[15] = 'B';
		rowonetwo[16] = 'A';
		break;
	case 17:
		rowonetwo[18] = 'B';
		rowonetwo[19] = 'A';
		break;
	case 18:
		rowonetwo[21] = 'B';
		rowonetwo[22] = 'A';
		break;
	case 21:
		rowtwotwo[0] = 'B';
		rowtwotwo[1] = 'A';
		break;
	case 22:
		rowtwotwo[3] = 'B';
		rowtwotwo[4] = 'A';
		break;
	case 23:
		rowtwotwo[6] = 'B';
		rowtwotwo[7] = 'A';
		break;
	case 24:
		rowtwotwo[9] = 'B';
		rowtwotwo[10] = 'A';
		break;
	case 25:
		rowtwotwo[12] = 'B';
		rowtwotwo[13] = 'A';
		break;
	case 26:
		rowtwotwo[15] = 'B';
		rowtwotwo[16] = 'A';
		break;
	case 27:
		rowtwotwo[18] = 'B';
		rowtwotwo[19] = 'A';
		break;
	case 28:
		rowtwotwo[21] = 'B';
		rowtwotwo[22] = 'A';
		break;
	case 31:
		rowthreetwo[0] = 'B';
		rowthreetwo[1] = 'A';
		break;
	case 32:
		rowthreetwo[3] = 'B';
		rowthreetwo[4] = 'A';
		break;
	case 33:
		rowthreetwo[6] = 'B';
		rowthreetwo[7] = 'A';
		break;
	case 34:
		rowthreetwo[9] = 'B';
		rowthreetwo[10] = 'A';
		break;
	case 35:
		rowthreetwo[12] = 'B';
		rowthreetwo[13] = 'A';
		break;
	case 36:
		rowthreetwo[15] = 'B';
		rowthreetwo[16] = 'A';
		break;
	case 37:
		rowthreetwo[18] = 'B';
		rowthreetwo[19] = 'A';
		break;
	case 38:
		rowthreetwo[21] = 'B';
		rowthreetwo[22] = 'A';
		break;
	case 41:
		rowfourtwo[0] = 'B';
		rowfourtwo[1] = 'A';
		break;
	case 42:
		rowfourtwo[3] = 'B';
		rowfourtwo[4] = 'A';
		break;
	case 43:
		rowfourtwo[6] = 'B';
		rowfourtwo[7] = 'A';
		break;
	case 44:
		rowfourtwo[9] = 'B';
		rowfourtwo[10] = 'A';
		break;
	case 45:
		rowfourtwo[12] = 'B';
		rowfourtwo[13] = 'A';
		break;
	case 46:
		rowfourtwo[15] = 'B';
		rowfourtwo[16] = 'A';
		break;
	case 47:
		rowfourtwo[18] = 'B';
		rowfourtwo[19] = 'A';
		break;
	case 48:
		rowfourtwo[21] = 'B';
		rowfourtwo[22] = 'A';
		break;
	case 51:
		rowfivetwo[0] = 'B';
		rowfivetwo[1] = 'A';
		break;
	case 52:
		rowfivetwo[3] = 'B';
		rowfivetwo[4] = 'A';
		break;
	case 53:
		rowfivetwo[6] = 'B';
		rowfivetwo[7] = 'A';
		break;
	case 54:
		rowfivetwo[9] = 'B';
		rowfivetwo[10] = 'A';
		break;
	case 55:
		rowfivetwo[12] = 'B';
		rowfivetwo[13] = 'A';
		break;
	case 56:
		rowfivetwo[15] = 'B';
		rowfivetwo[16] = 'A';
		break;
	case 57:
		rowfivetwo[18] = 'B';
		rowfivetwo[19] = 'A';
		break;
	case 58:
		rowfivetwo[21] = 'B';
		rowfivetwo[22] = 'A';
		break;
	case 61:
		rowsixtwo[0] = 'B';
		rowsixtwo[1] = 'A';
		break;
	case 62:
		rowsixtwo[3] = 'B';
		rowsixtwo[4] = 'A';
		break;
	case 63:
		rowsixtwo[6] = 'B';
		rowsixtwo[7] = 'A';
		break;
	case 64:
		rowsixtwo[9] = 'B';
		rowsixtwo[10] = 'A';
		break;
	case 65:
		rowsixtwo[12] = 'B';
		rowsixtwo[13] = 'A';
		break;
	case 66:
		rowsixtwo[15] = 'B';
		rowsixtwo[16] = 'A';
		break;
	case 67:
		rowsixtwo[18] = 'B';
		rowsixtwo[19] = 'A';
		break;
	case 68:
		rowsixtwo[21] = 'B';
		rowsixtwo[22] = 'A';
		break;
	case 71:
		rowseventwo[0] = 'B';
		rowseventwo[1] = 'A';
		break;
	case 72:
		rowseventwo[3] = 'B';
		rowseventwo[4] = 'A';
		break;
	case 73:
		rowseventwo[6] = 'B';
		rowseventwo[7] = 'A';
		break;
	case 74:
		rowseventwo[9] = 'B';
		rowseventwo[10] = 'A';
		break;
	case 75:
		rowseventwo[12] = 'B';
		rowseventwo[13] = 'A';
		break;
	case 76:
		rowseventwo[15] = 'B';
		rowseventwo[16] = 'A';
		break;
	case 77:
		rowseventwo[18] = 'B';
		rowseventwo[19] = 'A';
		break;
	case 78:
		rowseventwo[21] = 'B';
		rowseventwo[22] = 'A';
		break;
	case 81:
		roweighttwo[0] = 'B';
		roweighttwo[1] = 'A';
		break;
	case 82:
		roweighttwo[3] = 'B';
		roweighttwo[4] = 'A';
		break;
	case 83:
		roweighttwo[6] = 'B';
		roweighttwo[7] = 'A';
		break;
	case 84:
		roweighttwo[9] = 'B';
		roweighttwo[10] = 'A';
		break;
	case 85:
		roweighttwo[12] = 'B';
		roweighttwo[13] = 'A';
		break;
	case 86:
		roweighttwo[15] = 'B';
		roweighttwo[16] = 'A';
		break;
	case 87:
		roweighttwo[18] = 'B';
		roweighttwo[19] = 'A';
		break;
	case 88:
		roweighttwo[21] = 'B';
		roweighttwo[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(subpthreetwo) {
	case 11:
		rowonetwo[0] = 'S';
		rowonetwo[1] = 'U';
		break;
	case 12:
		rowonetwo[3] = 'S';
		rowonetwo[4] = 'U';
		break;
	case 13:
		rowonetwo[6] = 'S';
		rowonetwo[7] = 'U';
		break;
	case 14:
		rowonetwo[9] = 'S';
		rowonetwo[10] = 'U';
		break;
	case 15:
		rowonetwo[12] = 'S';
		rowonetwo[13] = 'U';
		break;
	case 16:
		rowonetwo[15] = 'S';
		rowonetwo[16] = 'U';
		break;
	case 17:
		rowonetwo[18] = 'S';
		rowonetwo[19] = 'U';
		break;
	case 18:
		rowonetwo[21] = 'S';
		rowonetwo[22] = 'U';
		break;
	case 21:
		rowtwotwo[0] = 'S';
		rowtwotwo[1] = 'U';
		break;
	case 22:
		rowtwotwo[3] = 'S';
		rowtwotwo[4] = 'U';
		break;
	case 23:
		rowtwotwo[6] = 'S';
		rowtwotwo[7] = 'U';
		break;
	case 24:
		rowtwotwo[9] = 'S';
		rowtwotwo[10] = 'U';
		break;
	case 25:
		rowtwotwo[12] = 'S';
		rowtwotwo[13] = 'U';
		break;
	case 26:
		rowtwotwo[15] = 'S';
		rowtwotwo[16] = 'U';
		break;
	case 27:
		rowtwotwo[18] = 'S';
		rowtwotwo[19] = 'U';
		break;
	case 28:
		rowtwotwo[21] = 'S';
		rowtwotwo[22] = 'U';
		break;
	case 31:
		rowthreetwo[0] = 'S';
		rowthreetwo[1] = 'U';
		break;
	case 32:
		rowthreetwo[3] = 'S';
		rowthreetwo[4] = 'U';
		break;
	case 33:
		rowthreetwo[6] = 'S';
		rowthreetwo[7] = 'U';
		break;
	case 34:
		rowthreetwo[9] = 'S';
		rowthreetwo[10] = 'U';
		break;
	case 35:
		rowthreetwo[12] = 'S';
		rowthreetwo[13] = 'U';
		break;
	case 36:
		rowthreetwo[15] = 'S';
		rowthreetwo[16] = 'U';
		break;
	case 37:
		rowthreetwo[18] = 'S';
		rowthreetwo[19] = 'U';
		break;
	case 38:
		rowthreetwo[21] = 'S';
		rowthreetwo[22] = 'U';
		break;
	case 41:
		rowfourtwo[0] = 'S';
		rowfourtwo[1] = 'U';
		break;
	case 42:
		rowfourtwo[3] = 'S';
		rowfourtwo[4] = 'U';
		break;
	case 43:
		rowfourtwo[6] = 'S';
		rowfourtwo[7] = 'U';
		break;
	case 44:
		rowfourtwo[9] = 'S';
		rowfourtwo[10] = 'U';
		break;
	case 45:
		rowfourtwo[12] = 'S';
		rowfourtwo[13] = 'U';
		break;
	case 46:
		rowfourtwo[15] = 'S';
		rowfourtwo[16] = 'U';
		break;
	case 47:
		rowfourtwo[18] = 'S';
		rowfourtwo[19] = 'U';
		break;
	case 48:
		rowfourtwo[21] = 'S';
		rowfourtwo[22] = 'U';
		break;
	case 51:
		rowfivetwo[0] = 'S';
		rowfivetwo[1] = 'U';
		break;
	case 52:
		rowfivetwo[3] = 'S';
		rowfivetwo[4] = 'U';
		break;
	case 53:
		rowfivetwo[6] = 'S';
		rowfivetwo[7] = 'U';
		break;
	case 54:
		rowfivetwo[9] = 'S';
		rowfivetwo[10] = 'U';
		break;
	case 55:
		rowfivetwo[12] = 'S';
		rowfivetwo[13] = 'U';
		break;
	case 56:
		rowfivetwo[15] = 'S';
		rowfivetwo[16] = 'U';
		break;
	case 57:
		rowfivetwo[18] = 'S';
		rowfivetwo[19] = 'U';
		break;
	case 58:
		rowfivetwo[21] = 'S';
		rowfivetwo[22] = 'U';
		break;
	case 61:
		rowsixtwo[0] = 'S';
		rowsixtwo[1] = 'U';
		break;
	case 62:
		rowsixtwo[3] = 'S';
		rowsixtwo[4] = 'U';
		break;
	case 63:
		rowsixtwo[6] = 'S';
		rowsixtwo[7] = 'U';
		break;
	case 64:
		rowsixtwo[9] = 'S';
		rowsixtwo[10] = 'U';
		break;
	case 65:
		rowsixtwo[12] = 'S';
		rowsixtwo[13] = 'U';
		break;
	case 66:
		rowsixtwo[15] = 'S';
		rowsixtwo[16] = 'U';
		break;
	case 67:
		rowsixtwo[18] = 'S';
		rowsixtwo[19] = 'U';
		break;
	case 68:
		rowsixtwo[21] = 'S';
		rowsixtwo[22] = 'U';
		break;
	case 71:
		rowseventwo[0] = 'S';
		rowseventwo[1] = 'U';
		break;
	case 72:
		rowseventwo[3] = 'S';
		rowseventwo[4] = 'U';
		break;
	case 73:
		rowseventwo[6] = 'S';
		rowseventwo[7] = 'U';
		break;
	case 74:
		rowseventwo[9] = 'S';
		rowseventwo[10] = 'U';
		break;
	case 75:
		rowseventwo[12] = 'S';
		rowseventwo[13] = 'U';
		break;
	case 76:
		rowseventwo[15] = 'S';
		rowseventwo[16] = 'U';
		break;
	case 77:
		rowseventwo[18] = 'S';
		rowseventwo[19] = 'U';
		break;
	case 78:
		rowseventwo[21] = 'S';
		rowseventwo[22] = 'U';
		break;
	case 81:
		roweighttwo[0] = 'S';
		roweighttwo[1] = 'U';
		break;
	case 82:
		roweighttwo[3] = 'S';
		roweighttwo[4] = 'U';
		break;
	case 83:
		roweighttwo[6] = 'S';
		roweighttwo[7] = 'U';
		break;
	case 84:
		roweighttwo[9] = 'S';
		roweighttwo[10] = 'U';
		break;
	case 85:
		roweighttwo[12] = 'S';
		roweighttwo[13] = 'U';
		break;
	case 86:
		roweighttwo[15] = 'S';
		roweighttwo[16] = 'U';
		break;
	case 87:
		roweighttwo[18] = 'S';
		roweighttwo[19] = 'U';
		break;
	case 88:
		roweighttwo[21] = 'S';
		roweighttwo[22] = 'U';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(subptwotwo) {
	case 11:
		rowonetwo[0] = 'S';
		rowonetwo[1] = 'U';
		break;
	case 12:
		rowonetwo[3] = 'S';
		rowonetwo[4] = 'U';
		break;
	case 13:
		rowonetwo[6] = 'S';
		rowonetwo[7] = 'U';
		break;
	case 14:
		rowonetwo[9] = 'S';
		rowonetwo[10] = 'U';
		break;
	case 15:
		rowonetwo[12] = 'S';
		rowonetwo[13] = 'U';
		break;
	case 16:
		rowonetwo[15] = 'S';
		rowonetwo[16] = 'U';
		break;
	case 17:
		rowonetwo[18] = 'S';
		rowonetwo[19] = 'U';
		break;
	case 18:
		rowonetwo[21] = 'S';
		rowonetwo[22] = 'U';
		break;
	case 21:
		rowtwotwo[0] = 'S';
		rowtwotwo[1] = 'U';
		break;
	case 22:
		rowtwotwo[3] = 'S';
		rowtwotwo[4] = 'U';
		break;
	case 23:
		rowtwotwo[6] = 'S';
		rowtwotwo[7] = 'U';
		break;
	case 24:
		rowtwotwo[9] = 'S';
		rowtwotwo[10] = 'U';
		break;
	case 25:
		rowtwotwo[12] = 'S';
		rowtwotwo[13] = 'U';
		break;
	case 26:
		rowtwotwo[15] = 'S';
		rowtwotwo[16] = 'U';
		break;
	case 27:
		rowtwotwo[18] = 'S';
		rowtwotwo[19] = 'U';
		break;
	case 28:
		rowtwotwo[21] = 'S';
		rowtwotwo[22] = 'U';
		break;
	case 31:
		rowthreetwo[0] = 'S';
		rowthreetwo[1] = 'U';
		break;
	case 32:
		rowthreetwo[3] = 'S';
		rowthreetwo[4] = 'U';
		break;
	case 33:
		rowthreetwo[6] = 'S';
		rowthreetwo[7] = 'U';
		break;
	case 34:
		rowthreetwo[9] = 'S';
		rowthreetwo[10] = 'U';
		break;
	case 35:
		rowthreetwo[12] = 'S';
		rowthreetwo[13] = 'U';
		break;
	case 36:
		rowthreetwo[15] = 'S';
		rowthreetwo[16] = 'U';
		break;
	case 37:
		rowthreetwo[18] = 'S';
		rowthreetwo[19] = 'U';
		break;
	case 38:
		rowthreetwo[21] = 'S';
		rowthreetwo[22] = 'U';
		break;
	case 41:
		rowfourtwo[0] = 'S';
		rowfourtwo[1] = 'U';
		break;
	case 42:
		rowfourtwo[3] = 'S';
		rowfourtwo[4] = 'U';
		break;
	case 43:
		rowfourtwo[6] = 'S';
		rowfourtwo[7] = 'U';
		break;
	case 44:
		rowfourtwo[9] = 'S';
		rowfourtwo[10] = 'U';
		break;
	case 45:
		rowfourtwo[12] = 'S';
		rowfourtwo[13] = 'U';
		break;
	case 46:
		rowfourtwo[15] = 'S';
		rowfourtwo[16] = 'U';
		break;
	case 47:
		rowfourtwo[18] = 'S';
		rowfourtwo[19] = 'U';
		break;
	case 48:
		rowfourtwo[21] = 'S';
		rowfourtwo[22] = 'U';
		break;
	case 51:
		rowfivetwo[0] = 'S';
		rowfivetwo[1] = 'U';
		break;
	case 52:
		rowfivetwo[3] = 'S';
		rowfivetwo[4] = 'U';
		break;
	case 53:
		rowfivetwo[6] = 'S';
		rowfivetwo[7] = 'U';
		break;
	case 54:
		rowfivetwo[9] = 'S';
		rowfivetwo[10] = 'U';
		break;
	case 55:
		rowfivetwo[12] = 'S';
		rowfivetwo[13] = 'U';
		break;
	case 56:
		rowfivetwo[15] = 'S';
		rowfivetwo[16] = 'U';
		break;
	case 57:
		rowfivetwo[18] = 'S';
		rowfivetwo[19] = 'U';
		break;
	case 58:
		rowfivetwo[21] = 'S';
		rowfivetwo[22] = 'U';
		break;
	case 61:
		rowsixtwo[0] = 'S';
		rowsixtwo[1] = 'U';
		break;
	case 62:
		rowsixtwo[3] = 'S';
		rowsixtwo[4] = 'U';
		break;
	case 63:
		rowsixtwo[6] = 'S';
		rowsixtwo[7] = 'U';
		break;
	case 64:
		rowsixtwo[9] = 'S';
		rowsixtwo[10] = 'U';
		break;
	case 65:
		rowsixtwo[12] = 'S';
		rowsixtwo[13] = 'U';
		break;
	case 66:
		rowsixtwo[15] = 'S';
		rowsixtwo[16] = 'U';
		break;
	case 67:
		rowsixtwo[18] = 'S';
		rowsixtwo[19] = 'U';
		break;
	case 68:
		rowsixtwo[21] = 'S';
		rowsixtwo[22] = 'U';
		break;
	case 71:
		rowseventwo[0] = 'S';
		rowseventwo[1] = 'U';
		break;
	case 72:
		rowseventwo[3] = 'S';
		rowseventwo[4] = 'U';
		break;
	case 73:
		rowseventwo[6] = 'S';
		rowseventwo[7] = 'U';
		break;
	case 74:
		rowseventwo[9] = 'S';
		rowseventwo[10] = 'U';
		break;
	case 75:
		rowseventwo[12] = 'S';
		rowseventwo[13] = 'U';
		break;
	case 76:
		rowseventwo[15] = 'S';
		rowseventwo[16] = 'U';
		break;
	case 77:
		rowseventwo[18] = 'S';
		rowseventwo[19] = 'U';
		break;
	case 78:
		rowseventwo[21] = 'S';
		rowseventwo[22] = 'U';
		break;
	case 81:
		roweighttwo[0] = 'S';
		roweighttwo[1] = 'U';
		break;
	case 82:
		roweighttwo[3] = 'S';
		roweighttwo[4] = 'U';
		break;
	case 83:
		roweighttwo[6] = 'S';
		roweighttwo[7] = 'U';
		break;
	case 84:
		roweighttwo[9] = 'S';
		roweighttwo[10] = 'U';
		break;
	case 85:
		roweighttwo[12] = 'S';
		roweighttwo[13] = 'U';
		break;
	case 86:
		roweighttwo[15] = 'S';
		roweighttwo[16] = 'U';
		break;
	case 87:
		roweighttwo[18] = 'S';
		roweighttwo[19] = 'U';
		break;
	case 88:
		roweighttwo[21] = 'S';
		roweighttwo[22] = 'U';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(subpone) {
	case 11:
		rowonetwo[0] = 'S';
		rowonetwo[1] = 'U';
		break;
	case 12:
		rowonetwo[3] = 'S';
		rowonetwo[4] = 'U';
		break;
	case 13:
		rowonetwo[6] = 'S';
		rowonetwo[7] = 'U';
		break;
	case 14:
		rowonetwo[9] = 'S';
		rowonetwo[10] = 'U';
		break;
	case 15:
		rowonetwo[12] = 'S';
		rowonetwo[13] = 'U';
		break;
	case 16:
		rowonetwo[15] = 'S';
		rowonetwo[16] = 'U';
		break;
	case 17:
		rowonetwo[18] = 'S';
		rowonetwo[19] = 'U';
		break;
	case 18:
		rowonetwo[21] = 'S';
		rowonetwo[22] = 'U';
		break;
	case 21:
		rowtwotwo[0] = 'S';
		rowtwotwo[1] = 'U';
		break;
	case 22:
		rowtwotwo[3] = 'S';
		rowtwotwo[4] = 'U';
		break;
	case 23:
		rowtwotwo[6] = 'S';
		rowtwotwo[7] = 'U';
		break;
	case 24:
		rowtwotwo[9] = 'S';
		rowtwotwo[10] = 'U';
		break;
	case 25:
		rowtwotwo[12] = 'S';
		rowtwotwo[13] = 'U';
		break;
	case 26:
		rowtwotwo[15] = 'S';
		rowtwotwo[16] = 'U';
		break;
	case 27:
		rowtwotwo[18] = 'S';
		rowtwotwo[19] = 'U';
		break;
	case 28:
		rowtwotwo[21] = 'S';
		rowtwotwo[22] = 'U';
		break;
	case 31:
		rowthreetwo[0] = 'S';
		rowthreetwo[1] = 'U';
		break;
	case 32:
		rowthreetwo[3] = 'S';
		rowthreetwo[4] = 'U';
		break;
	case 33:
		rowthreetwo[6] = 'S';
		rowthreetwo[7] = 'U';
		break;
	case 34:
		rowthreetwo[9] = 'S';
		rowthreetwo[10] = 'U';
		break;
	case 35:
		rowthreetwo[12] = 'S';
		rowthreetwo[13] = 'U';
		break;
	case 36:
		rowthreetwo[15] = 'S';
		rowthreetwo[16] = 'U';
		break;
	case 37:
		rowthreetwo[18] = 'S';
		rowthreetwo[19] = 'U';
		break;
	case 38:
		rowthreetwo[21] = 'S';
		rowthreetwo[22] = 'U';
		break;
	case 41:
		rowfourtwo[0] = 'S';
		rowfourtwo[1] = 'U';
		break;
	case 42:
		rowfourtwo[3] = 'S';
		rowfourtwo[4] = 'U';
		break;
	case 43:
		rowfourtwo[6] = 'S';
		rowfourtwo[7] = 'U';
		break;
	case 44:
		rowfourtwo[9] = 'S';
		rowfourtwo[10] = 'U';
		break;
	case 45:
		rowfourtwo[12] = 'S';
		rowfourtwo[13] = 'U';
		break;
	case 46:
		rowfourtwo[15] = 'S';
		rowfourtwo[16] = 'U';
		break;
	case 47:
		rowfourtwo[18] = 'S';
		rowfourtwo[19] = 'U';
		break;
	case 48:
		rowfourtwo[21] = 'S';
		rowfourtwo[22] = 'U';
		break;
	case 51:
		rowfivetwo[0] = 'S';
		rowfivetwo[1] = 'U';
		break;
	case 52:
		rowfivetwo[3] = 'S';
		rowfivetwo[4] = 'U';
		break;
	case 53:
		rowfivetwo[6] = 'S';
		rowfivetwo[7] = 'U';
		break;
	case 54:
		rowfivetwo[9] = 'S';
		rowfivetwo[10] = 'U';
		break;
	case 55:
		rowfivetwo[12] = 'S';
		rowfivetwo[13] = 'U';
		break;
	case 56:
		rowfivetwo[15] = 'S';
		rowfivetwo[16] = 'U';
		break;
	case 57:
		rowfivetwo[18] = 'S';
		rowfivetwo[19] = 'U';
		break;
	case 58:
		rowfivetwo[21] = 'S';
		rowfivetwo[22] = 'U';
		break;
	case 61:
		rowsixtwo[0] = 'S';
		rowsixtwo[1] = 'U';
		break;
	case 62:
		rowsixtwo[3] = 'S';
		rowsixtwo[4] = 'U';
		break;
	case 63:
		rowsixtwo[6] = 'S';
		rowsixtwo[7] = 'U';
		break;
	case 64:
		rowsixtwo[9] = 'S';
		rowsixtwo[10] = 'U';
		break;
	case 65:
		rowsixtwo[12] = 'S';
		rowsixtwo[13] = 'U';
		break;
	case 66:
		rowsixtwo[15] = 'S';
		rowsixtwo[16] = 'U';
		break;
	case 67:
		rowsixtwo[18] = 'S';
		rowsixtwo[19] = 'U';
		break;
	case 68:
		rowsixtwo[21] = 'S';
		rowsixtwo[22] = 'U';
		break;
	case 71:
		rowseventwo[0] = 'S';
		rowseventwo[1] = 'U';
		break;
	case 72:
		rowseventwo[3] = 'S';
		rowseventwo[4] = 'U';
		break;
	case 73:
		rowseventwo[6] = 'S';
		rowseventwo[7] = 'U';
		break;
	case 74:
		rowseventwo[9] = 'S';
		rowseventwo[10] = 'U';
		break;
	case 75:
		rowseventwo[12] = 'S';
		rowseventwo[13] = 'U';
		break;
	case 76:
		rowseventwo[15] = 'S';
		rowseventwo[16] = 'U';
		break;
	case 77:
		rowseventwo[18] = 'S';
		rowseventwo[19] = 'U';
		break;
	case 78:
		rowseventwo[21] = 'S';
		rowseventwo[22] = 'U';
		break;
	case 81:
		roweighttwo[0] = 'S';
		roweighttwo[1] = 'U';
		break;
	case 82:
		roweighttwo[3] = 'S';
		roweighttwo[4] = 'U';
		break;
	case 83:
		roweighttwo[6] = 'S';
		roweighttwo[7] = 'U';
		break;
	case 84:
		roweighttwo[9] = 'S';
		roweighttwo[10] = 'U';
		break;
	case 85:
		roweighttwo[12] = 'S';
		roweighttwo[13] = 'U';
		break;
	case 86:
		roweighttwo[15] = 'S';
		roweighttwo[16] = 'U';
		break;
	case 87:
		roweighttwo[18] = 'S';
		roweighttwo[19] = 'U';
		break;
	case 88:
		roweighttwo[21] = 'S';
		roweighttwo[22] = 'U';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(patrolptwo) {
	case 11:
		rowonetwo[0] = 'P';
		rowonetwo[1] = 'A';
		break;
	case 12:
		rowonetwo[3] = 'P';
		rowonetwo[4] = 'A';
		break;
	case 13:
		rowonetwo[6] = 'P';
		rowonetwo[7] = 'A';
		break;
	case 14:
		rowonetwo[9] = 'P';
		rowonetwo[10] = 'A';
		break;
	case 15:
		rowonetwo[12] = 'P';
		rowonetwo[13] = 'A';
		break;
	case 16:
		rowonetwo[15] = 'P';
		rowonetwo[16] = 'A';
		break;
	case 17:
		rowonetwo[18] = 'P';
		rowonetwo[19] = 'A';
		break;
	case 18:
		rowonetwo[21] = 'P';
		rowonetwo[22] = 'A';
		break;
	case 21:
		rowtwotwo[0] = 'P';
		rowtwotwo[1] = 'A';
		break;
	case 22:
		rowtwotwo[3] = 'P';
		rowtwotwo[4] = 'A';
		break;
	case 23:
		rowtwotwo[6] = 'P';
		rowtwotwo[7] = 'A';
		break;
	case 24:
		rowtwotwo[9] = 'P';
		rowtwotwo[10] = 'A';
		break;
	case 25:
		rowtwotwo[12] = 'P';
		rowtwotwo[13] = 'A';
		break;
	case 26:
		rowtwotwo[15] = 'P';
		rowtwotwo[16] = 'A';
		break;
	case 27:
		rowtwotwo[18] = 'P';
		rowtwotwo[19] = 'A';
		break;
	case 28:
		rowtwotwo[21] = 'P';
		rowtwotwo[22] = 'A';
		break;
	case 31:
		rowthreetwo[0] = 'P';
		rowthreetwo[1] = 'A';
		break;
	case 32:
		rowthreetwo[3] = 'P';
		rowthreetwo[4] = 'A';
		break;
	case 33:
		rowthreetwo[6] = 'P';
		rowthreetwo[7] = 'A';
		break;
	case 34:
		rowthreetwo[9] = 'P';
		rowthreetwo[10] = 'A';
		break;
	case 35:
		rowthreetwo[12] = 'P';
		rowthreetwo[13] = 'A';
		break;
	case 36:
		rowthreetwo[15] = 'P';
		rowthreetwo[16] = 'A';
		break;
	case 37:
		rowthreetwo[18] = 'P';
		rowthreetwo[19] = 'A';
		break;
	case 38:
		rowthreetwo[21] = 'P';
		rowthreetwo[22] = 'A';
		break;
	case 41:
		rowfourtwo[0] = 'P';
		rowfourtwo[1] = 'A';
		break;
	case 42:
		rowfourtwo[3] = 'P';
		rowfourtwo[4] = 'A';
		break;
	case 43:
		rowfourtwo[6] = 'P';
		rowfourtwo[7] = 'A';
		break;
	case 44:
		rowfourtwo[9] = 'P';
		rowfourtwo[10] = 'A';
		break;
	case 45:
		rowfourtwo[12] = 'P';
		rowfourtwo[13] = 'A';
		break;
	case 46:
		rowfourtwo[15] = 'P';
		rowfourtwo[16] = 'A';
		break;
	case 47:
		rowfourtwo[18] = 'P';
		rowfourtwo[19] = 'A';
		break;
	case 48:
		rowfourtwo[21] = 'P';
		rowfourtwo[22] = 'A';
		break;
	case 51:
		rowfivetwo[0] = 'P';
		rowfivetwo[1] = 'A';
		break;
	case 52:
		rowfivetwo[3] = 'P';
		rowfivetwo[4] = 'A';
		break;
	case 53:
		rowfivetwo[6] = 'P';
		rowfivetwo[7] = 'A';
		break;
	case 54:
		rowfivetwo[9] = 'P';
		rowfivetwo[10] = 'A';
		break;
	case 55:
		rowfivetwo[12] = 'P';
		rowfivetwo[13] = 'A';
		break;
	case 56:
		rowfivetwo[15] = 'P';
		rowfivetwo[16] = 'A';
		break;
	case 57:
		rowfivetwo[18] = 'P';
		rowfivetwo[19] = 'A';
		break;
	case 58:
		rowfivetwo[21] = 'P';
		rowfivetwo[22] = 'A';
		break;
	case 61:
		rowsixtwo[0] = 'P';
		rowsixtwo[1] = 'A';
		break;
	case 62:
		rowsixtwo[3] = 'P';
		rowsixtwo[4] = 'A';
		break;
	case 63:
		rowsixtwo[6] = 'P';
		rowsixtwo[7] = 'A';
		break;
	case 64:
		rowsixtwo[9] = 'P';
		rowsixtwo[10] = 'A';
		break;
	case 65:
		rowsixtwo[12] = 'P';
		rowsixtwo[13] = 'A';
		break;
	case 66:
		rowsixtwo[15] = 'P';
		rowsixtwo[16] = 'A';
		break;
	case 67:
		rowsixtwo[18] = 'P';
		rowsixtwo[19] = 'A';
		break;
	case 68:
		rowsixtwo[21] = 'P';
		rowsixtwo[22] = 'A';
		break;
	case 71:
		rowseventwo[0] = 'P';
		rowseventwo[1] = 'A';
		break;
	case 72:
		rowseventwo[3] = 'P';
		rowseventwo[4] = 'A';
		break;
	case 73:
		rowseventwo[6] = 'P';
		rowseventwo[7] = 'A';
		break;
	case 74:
		rowseventwo[9] = 'P';
		rowseventwo[10] = 'A';
		break;
	case 75:
		rowseventwo[12] = 'P';
		rowseventwo[13] = 'A';
		break;
	case 76:
		rowseventwo[15] = 'P';
		rowseventwo[16] = 'A';
		break;
	case 77:
		rowseventwo[18] = 'P';
		rowseventwo[19] = 'A';
		break;
	case 78:
		rowseventwo[21] = 'P';
		rowseventwo[22] = 'A';
		break;
	case 81:
		roweighttwo[0] = 'P';
		roweighttwo[1] = 'A';
		break;
	case 82:
		roweighttwo[3] = 'P';
		roweighttwo[4] = 'A';
		break;
	case 83:
		roweighttwo[6] = 'P';
		roweighttwo[7] = 'A';
		break;
	case 84:
		roweighttwo[9] = 'P';
		roweighttwo[10] = 'A';
		break;
	case 85:
		roweighttwo[12] = 'P';
		roweighttwo[13] = 'A';
		break;
	case 86:
		roweighttwo[15] = 'P';
		roweighttwo[16] = 'A';
		break;
	case 87:
		roweighttwo[18] = 'P';
		roweighttwo[19] = 'A';
		break;
	case 88:
		roweighttwo[21] = 'P';
		roweighttwo[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(patrolpone) {
	case 11:
		rowonetwo[0] = 'P';
		rowonetwo[1] = 'A';
		break;
	case 12:
		rowonetwo[3] = 'P';
		rowonetwo[4] = 'A';
		break;
	case 13:
		rowonetwo[6] = 'P';
		rowonetwo[7] = 'A';
		break;
	case 14:
		rowonetwo[9] = 'P';
		rowonetwo[10] = 'A';
		break;
	case 15:
		rowonetwo[12] = 'P';
		rowonetwo[13] = 'A';
		break;
	case 16:
		rowonetwo[15] = 'P';
		rowonetwo[16] = 'A';
		break;
	case 17:
		rowonetwo[18] = 'P';
		rowonetwo[19] = 'A';
		break;
	case 18:
		rowonetwo[21] = 'P';
		rowonetwo[22] = 'A';
		break;
	case 21:
		rowtwotwo[0] = 'P';
		rowtwotwo[1] = 'A';
		break;
	case 22:
		rowtwotwo[3] = 'P';
		rowtwotwo[4] = 'A';
		break;
	case 23:
		rowtwotwo[6] = 'P';
		rowtwotwo[7] = 'A';
		break;
	case 24:
		rowtwotwo[9] = 'P';
		rowtwotwo[10] = 'A';
		break;
	case 25:
		rowtwotwo[12] = 'P';
		rowtwotwo[13] = 'A';
		break;
	case 26:
		rowtwotwo[15] = 'P';
		rowtwotwo[16] = 'A';
		break;
	case 27:
		rowtwotwo[18] = 'P';
		rowtwotwo[19] = 'A';
		break;
	case 28:
		rowtwotwo[21] = 'P';
		rowtwotwo[22] = 'A';
		break;
	case 31:
		rowthreetwo[0] = 'P';
		rowthreetwo[1] = 'A';
		break;
	case 32:
		rowthreetwo[3] = 'P';
		rowthreetwo[4] = 'A';
		break;
	case 33:
		rowthreetwo[6] = 'P';
		rowthreetwo[7] = 'A';
		break;
	case 34:
		rowthreetwo[9] = 'P';
		rowthreetwo[10] = 'A';
		break;
	case 35:
		rowthreetwo[12] = 'P';
		rowthreetwo[13] = 'A';
		break;
	case 36:
		rowthreetwo[15] = 'P';
		rowthreetwo[16] = 'A';
		break;
	case 37:
		rowthreetwo[18] = 'P';
		rowthreetwo[19] = 'A';
		break;
	case 38:
		rowthreetwo[21] = 'P';
		rowthreetwo[22] = 'A';
		break;
	case 41:
		rowfourtwo[0] = 'P';
		rowfourtwo[1] = 'A';
		break;
	case 42:
		rowfourtwo[3] = 'P';
		rowfourtwo[4] = 'A';
		break;
	case 43:
		rowfourtwo[6] = 'P';
		rowfourtwo[7] = 'A';
		break;
	case 44:
		rowfourtwo[9] = 'P';
		rowfourtwo[10] = 'A';
		break;
	case 45:
		rowfourtwo[12] = 'P';
		rowfourtwo[13] = 'A';
		break;
	case 46:
		rowfourtwo[15] = 'P';
		rowfourtwo[16] = 'A';
		break;
	case 47:
		rowfourtwo[18] = 'P';
		rowfourtwo[19] = 'A';
		break;
	case 48:
		rowfourtwo[21] = 'P';
		rowfourtwo[22] = 'A';
		break;
	case 51:
		rowfivetwo[0] = 'P';
		rowfivetwo[1] = 'A';
		break;
	case 52:
		rowfivetwo[3] = 'P';
		rowfivetwo[4] = 'A';
		break;
	case 53:
		rowfivetwo[6] = 'P';
		rowfivetwo[7] = 'A';
		break;
	case 54:
		rowfivetwo[9] = 'P';
		rowfivetwo[10] = 'A';
		break;
	case 55:
		rowfivetwo[12] = 'P';
		rowfivetwo[13] = 'A';
		break;
	case 56:
		rowfivetwo[15] = 'P';
		rowfivetwo[16] = 'A';
		break;
	case 57:
		rowfivetwo[18] = 'P';
		rowfivetwo[19] = 'A';
		break;
	case 58:
		rowfivetwo[21] = 'P';
		rowfivetwo[22] = 'A';
		break;
	case 61:
		rowsixtwo[0] = 'P';
		rowsixtwo[1] = 'A';
		break;
	case 62:
		rowsixtwo[3] = 'P';
		rowsixtwo[4] = 'A';
		break;
	case 63:
		rowsixtwo[6] = 'P';
		rowsixtwo[7] = 'A';
		break;
	case 64:
		rowsixtwo[9] = 'P';
		rowsixtwo[10] = 'A';
		break;
	case 65:
		rowsixtwo[12] = 'P';
		rowsixtwo[13] = 'A';
		break;
	case 66:
		rowsixtwo[15] = 'P';
		rowsixtwo[16] = 'A';
		break;
	case 67:
		rowsixtwo[18] = 'P';
		rowsixtwo[19] = 'A';
		break;
	case 68:
		rowsixtwo[21] = 'P';
		rowsixtwo[22] = 'A';
		break;
	case 71:
		rowseventwo[0] = 'P';
		rowseventwo[1] = 'A';
		break;
	case 72:
		rowseventwo[3] = 'P';
		rowseventwo[4] = 'A';
		break;
	case 73:
		rowseventwo[6] = 'P';
		rowseventwo[7] = 'A';
		break;
	case 74:
		rowseventwo[9] = 'P';
		rowseventwo[10] = 'A';
		break;
	case 75:
		rowseventwo[12] = 'P';
		rowseventwo[13] = 'A';
		break;
	case 76:
		rowseventwo[15] = 'P';
		rowseventwo[16] = 'A';
		break;
	case 77:
		rowseventwo[18] = 'P';
		rowseventwo[19] = 'A';
		break;
	case 78:
		rowseventwo[21] = 'P';
		rowseventwo[22] = 'A';
		break;
	case 81:
		roweighttwo[0] = 'P';
		roweighttwo[1] = 'A';
		break;
	case 82:
		roweighttwo[3] = 'P';
		roweighttwo[4] = 'A';
		break;
	case 83:
		roweighttwo[6] = 'P';
		roweighttwo[7] = 'A';
		break;
	case 84:
		roweighttwo[9] = 'P';
		roweighttwo[10] = 'A';
		break;
	case 85:
		roweighttwo[12] = 'P';
		roweighttwo[13] = 'A';
		break;
	case 86:
		roweighttwo[15] = 'P';
		roweighttwo[16] = 'A';
		break;
	case 87:
		roweighttwo[18] = 'P';
		roweighttwo[19] = 'A';
		break;
	case 88:
		roweighttwo[21] = 'P';
		roweighttwo[22] = 'A';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
		switch(airpone) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airptwo) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airpone) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airpfour) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(airpfive) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(airpthree) {
	case 11:
		rowonetwo[0] = 'A';
		rowonetwo[1] = 'C';
		break;
	case 12:
		rowonetwo[3] = 'A';
		rowonetwo[4] = 'C';
		break;
	case 13:
		rowonetwo[6] = 'A';
		rowonetwo[7] = 'C';
		break;
	case 14:
		rowonetwo[9] = 'A';
		rowonetwo[10] = 'C';
		break;
	case 15:
		rowonetwo[12] = 'A';
		rowonetwo[13] = 'C';
		break;
	case 16:
		rowonetwo[15] = 'A';
		rowonetwo[16] = 'C';
		break;
	case 17:
		rowonetwo[18] = 'A';
		rowonetwo[19] = 'C';
		break;
	case 18:
		rowonetwo[21] = 'A';
		rowonetwo[22] = 'C';
		break;
	case 21:
		rowtwotwo[0] = 'A';
		rowtwotwo[1] = 'C';
		break;
	case 22:
		rowtwotwo[3] = 'A';
		rowtwotwo[4] = 'C';
		break;
	case 23:
		rowtwotwo[6] = 'A';
		rowtwotwo[7] = 'C';
		break;
	case 24:
		rowtwotwo[9] = 'A';
		rowtwotwo[10] = 'C';
		break;
	case 25:
		rowtwotwo[12] = 'A';
		rowtwotwo[13] = 'C';
		break;
	case 26:
		rowtwotwo[15] = 'A';
		rowtwotwo[16] = 'C';
		break;
	case 27:
		rowtwotwo[18] = 'A';
		rowtwotwo[19] = 'C';
		break;
	case 28:
		rowtwotwo[21] = 'A';
		rowtwotwo[22] = 'C';
		break;
	case 31:
		rowthreetwo[0] = 'A';
		rowthreetwo[1] = 'C';
		break;
	case 32:
		rowthreetwo[3] = 'A';
		rowthreetwo[4] = 'C';
		break;
	case 33:
		rowthreetwo[6] = 'A';
		rowthreetwo[7] = 'C';
		break;
	case 34:
		rowthreetwo[9] = 'A';
		rowthreetwo[10] = 'C';
		break;
	case 35:
		rowthreetwo[12] = 'A';
		rowthreetwo[13] = 'C';
		break;
	case 36:
		rowthreetwo[15] = 'A';
		rowthreetwo[16] = 'C';
		break;
	case 37:
		rowthreetwo[18] = 'A';
		rowthreetwo[19] = 'C';
		break;
	case 38:
		rowthreetwo[21] = 'A';
		rowthreetwo[22] = 'C';
		break;
	case 41:
		rowfourtwo[0] = 'A';
		rowfourtwo[1] = 'C';
		break;
	case 42:
		rowfourtwo[3] = 'A';
		rowfourtwo[4] = 'C';
		break;
	case 43:
		rowfourtwo[6] = 'A';
		rowfourtwo[7] = 'C';
		break;
	case 44:
		rowfourtwo[9] = 'A';
		rowfourtwo[10] = 'C';
		break;
	case 45:
		rowfourtwo[12] = 'A';
		rowfourtwo[13] = 'C';
		break;
	case 46:
		rowfourtwo[15] = 'A';
		rowfourtwo[16] = 'C';
		break;
	case 47:
		rowfourtwo[18] = 'A';
		rowfourtwo[19] = 'C';
		break;
	case 48:
		rowfourtwo[21] = 'A';
		rowfourtwo[22] = 'C';
		break;
	case 51:
		rowfivetwo[0] = 'A';
		rowfivetwo[1] = 'C';
		break;
	case 52:
		rowfivetwo[3] = 'A';
		rowfivetwo[4] = 'C';
		break;
	case 53:
		rowfivetwo[6] = 'A';
		rowfivetwo[7] = 'C';
		break;
	case 54:
		rowfivetwo[9] = 'A';
		rowfivetwo[10] = 'C';
		break;
	case 55:
		rowfivetwo[12] = 'A';
		rowfivetwo[13] = 'C';
		break;
	case 56:
		rowfivetwo[15] = 'A';
		rowfivetwo[16] = 'C';
		break;
	case 57:
		rowfivetwo[18] = 'A';
		rowfivetwo[19] = 'C';
		break;
	case 58:
		rowfivetwo[21] = 'A';
		rowfivetwo[22] = 'C';
		break;
	case 61:
		rowsixtwo[0] = 'A';
		rowsixtwo[1] = 'C';
		break;
	case 62:
		rowsixtwo[3] = 'A';
		rowsixtwo[4] = 'C';
		break;
	case 63:
		rowsixtwo[6] = 'A';
		rowsixtwo[7] = 'C';
		break;
	case 64:
		rowsixtwo[9] = 'A';
		rowsixtwo[10] = 'C';
		break;
	case 65:
		rowsixtwo[12] = 'A';
		rowsixtwo[13] = 'C';
		break;
	case 66:
		rowsixtwo[15] = 'A';
		rowsixtwo[16] = 'C';
		break;
	case 67:
		rowsixtwo[18] = 'A';
		rowsixtwo[19] = 'C';
		break;
	case 68:
		rowsixtwo[21] = 'A';
		rowsixtwo[22] = 'C';
		break;
	case 71:
		rowseventwo[0] = 'A';
		rowseventwo[1] = 'C';
		break;
	case 72:
		rowseventwo[3] = 'A';
		rowseventwo[4] = 'C';
		break;
	case 73:
		rowseventwo[6] = 'A';
		rowseventwo[7] = 'C';
		break;
	case 74:
		rowseventwo[9] = 'A';
		rowseventwo[10] = 'C';
		break;
	case 75:
		rowseventwo[12] = 'A';
		rowseventwo[13] = 'C';
		break;
	case 76:
		rowseventwo[15] = 'A';
		rowseventwo[16] = 'C';
		break;
	case 77:
		rowseventwo[18] = 'A';
		rowseventwo[19] = 'C';
		break;
	case 78:
		rowseventwo[21] = 'A';
		rowseventwo[22] = 'C';
		break;
	case 81:
		roweighttwo[0] = 'A';
		roweighttwo[1] = 'C';
		break;
	case 82:
		roweighttwo[3] = 'A';
		roweighttwo[4] = 'C';
		break;
	case 83:
		roweighttwo[6] = 'A';
		roweighttwo[7] = 'C';
		break;
	case 84:
		roweighttwo[9] = 'A';
		roweighttwo[10] = 'C';
		break;
	case 85:
		roweighttwo[12] = 'A';
		roweighttwo[13] = 'C';
		break;
	case 86:
		roweighttwo[15] = 'A';
		roweighttwo[16] = 'C';
		break;
	case 87:
		roweighttwo[18] = 'A';
		roweighttwo[19] = 'C';
		break;
	case 88:
		roweighttwo[21] = 'A';
		roweighttwo[22] = 'C';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
	switch(destroypfour) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
				switch(destroypthree) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
				switch(destroyptwo) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;
	
		printf("Error342.  Restart.");
		break;
	}
			switch(destroypone) {
	case 11:
		rowonetwo[0] = 'D';
		rowonetwo[1] = 'E';
		break;
	case 12:
		rowonetwo[3] = 'D';
		rowonetwo[4] = 'E';
		break;
	case 13:
		rowonetwo[6] = 'D';
		rowonetwo[7] = 'E';
		break;
	case 14:
		rowonetwo[9] = 'D';
		rowonetwo[10] = 'E';
		break;
	case 15:
		rowonetwo[12] = 'D';
		rowonetwo[13] = 'E';
		break;
	case 16:
		rowonetwo[15] = 'D';
		rowonetwo[16] = 'E';
		break;
	case 17:
		rowonetwo[18] = 'D';
		rowonetwo[19] = 'E';
		break;
	case 18:
		rowonetwo[21] = 'D';
		rowonetwo[22] = 'E';
		break;
	case 21:
		rowtwotwo[0] = 'D';
		rowtwotwo[1] = 'E';
		break;
	case 22:
		rowtwotwo[3] = 'D';
		rowtwotwo[4] = 'E';
		break;
	case 23:
		rowtwotwo[6] = 'D';
		rowtwotwo[7] = 'E';
		break;
	case 24:
		rowtwotwo[9] = 'D';
		rowtwotwo[10] = 'E';
		break;
	case 25:
		rowtwotwo[12] = 'D';
		rowtwotwo[13] = 'E';
		break;
	case 26:
		rowtwotwo[15] = 'D';
		rowtwotwo[16] = 'E';
		break;
	case 27:
		rowtwotwo[18] = 'D';
		rowtwotwo[19] = 'E';
		break;
	case 28:
		rowtwotwo[21] = 'D';
		rowtwotwo[22] = 'E';
		break;
	case 31:
		rowthreetwo[0] = 'D';
		rowthreetwo[1] = 'E';
		break;
	case 32:
		rowthreetwo[3] = 'D';
		rowthreetwo[4] = 'E';
		break;
	case 33:
		rowthreetwo[6] = 'D';
		rowthreetwo[7] = 'E';
		break;
	case 34:
		rowthreetwo[9] = 'D';
		rowthreetwo[10] = 'E';
		break;
	case 35:
		rowthreetwo[12] = 'D';
		rowthreetwo[13] = 'E';
		break;
	case 36:
		rowthreetwo[15] = 'D';
		rowthreetwo[16] = 'E';
		break;
	case 37:
		rowthreetwo[18] = 'D';
		rowthreetwo[19] = 'E';
		break;
	case 38:
		rowthreetwo[21] = 'D';
		rowthreetwo[22] = 'E';
		break;
	case 41:
		rowfourtwo[0] = 'D';
		rowfourtwo[1] = 'E';
		break;
	case 42:
		rowfourtwo[3] = 'D';
		rowfourtwo[4] = 'E';
		break;
	case 43:
		rowfourtwo[6] = 'D';
		rowfourtwo[7] = 'E';
		break;
	case 44:
		rowfourtwo[9] = 'D';
		rowfourtwo[10] = 'E';
		break;
	case 45:
		rowfourtwo[12] = 'D';
		rowfourtwo[13] = 'E';
		break;
	case 46:
		rowfourtwo[15] = 'D';
		rowfourtwo[16] = 'E';
		break;
	case 47:
		rowfourtwo[18] = 'D';
		rowfourtwo[19] = 'E';
		break;
	case 48:
		rowfourtwo[21] = 'D';
		rowfourtwo[22] = 'E';
		break;
	case 51:
		rowfivetwo[0] = 'D';
		rowfivetwo[1] = 'E';
		break;
	case 52:
		rowfivetwo[3] = 'D';
		rowfivetwo[4] = 'E';
		break;
	case 53:
		rowfivetwo[6] = 'D';
		rowfivetwo[7] = 'E';
		break;
	case 54:
		rowfivetwo[9] = 'D';
		rowfivetwo[10] = 'E';
		break;
	case 55:
		rowfivetwo[12] = 'D';
		rowfivetwo[13] = 'E';
		break;
	case 56:
		rowfivetwo[15] = 'D';
		rowfivetwo[16] = 'E';
		break;
	case 57:
		rowfivetwo[18] = 'D';
		rowfivetwo[19] = 'E';
		break;
	case 58:
		rowfivetwo[21] = 'D';
		rowfivetwo[22] = 'E';
		break;
	case 61:
		rowsixtwo[0] = 'D';
		rowsixtwo[1] = 'E';
		break;
	case 62:
		rowsixtwo[3] = 'D';
		rowsixtwo[4] = 'E';
		break;
	case 63:
		rowsixtwo[6] = 'D';
		rowsixtwo[7] = 'E';
		break;
	case 64:
		rowsixtwo[9] = 'D';
		rowsixtwo[10] = 'E';
		break;
	case 65:
		rowsixtwo[12] = 'D';
		rowsixtwo[13] = 'E';
		break;
	case 66:
		rowsixtwo[15] = 'D';
		rowsixtwo[16] = 'E';
		break;
	case 67:
		rowsixtwo[18] = 'D';
		rowsixtwo[19] = 'E';
		break;
	case 68:
		rowsixtwo[21] = 'D';
		rowsixtwo[22] = 'E';
		break;
	case 71:
		rowseventwo[0] = 'D';
		rowseventwo[1] = 'E';
		break;
	case 72:
		rowseventwo[3] = 'D';
		rowseventwo[4] = 'E';
		break;
	case 73:
		rowseventwo[6] = 'D';
		rowseventwo[7] = 'E';
		break;
	case 74:
		rowseventwo[9] = 'D';
		rowseventwo[10] = 'E';
		break;
	case 75:
		rowseventwo[12] = 'D';
		rowseventwo[13] = 'E';
		break;
	case 76:
		rowseventwo[15] = 'D';
		rowseventwo[16] = 'E';
		break;
	case 77:
		rowseventwo[18] = 'D';
		rowseventwo[19] = 'E';
		break;
	case 78:
		rowseventwo[21] = 'D';
		rowseventwo[22] = 'E';
		break;
	case 81:
		roweighttwo[0] = 'D';
		roweighttwo[1] = 'E';
		break;
	case 82:
		roweighttwo[3] = 'D';
		roweighttwo[4] = 'E';
		break;
	case 83:
		roweighttwo[6] = 'D';
		roweighttwo[7] = 'E';
		break;
	case 84:
		roweighttwo[9] = 'D';
		roweighttwo[10] = 'E';
		break;
	case 85:
		roweighttwo[12] = 'D';
		roweighttwo[13] = 'E';
		break;
	case 86:
		roweighttwo[15] = 'D';
		roweighttwo[16] = 'E';
		break;
	case 87:
		roweighttwo[18] = 'D';
		roweighttwo[19] = 'E';
		break;
	case 88:
		roweighttwo[21] = 'D';
		roweighttwo[22] = 'E';
		break;
	printf(rowonetwo); /* Prints P2 ships positions */
	printf(rowtwotwo);
	printf(rowthreetwo);
	printf(rowfourtwo);
	printf(rowfivetwo);
	printf(rowsixtwo);
	printf(rowseventwo);
	printf(roweighttwo);
	}
}
