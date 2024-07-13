#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/******************************************************************************
This is to certify that this project is my own work, based on my personal
efforts in studying and applying the concepts learned. I have constructed 
the functions and their respective algorithms and corresponding code by 
myself. The program was run, tested, and debugged by my own efforts. I 
further certify that I have not copied in part or whole or otherwise 
plagiarized the work of other students and/or persons.
<Charlize Kirsten M. Brodeth> - <12205400> - <S17>
******************************************************************************/

// USER DEFINED FUNCTIONS

/* Display1 FUNCTION*************************
This void function displays the start screen
********************************************/
void Display1()
{
	system("CLS");
	printf("***********************************************************************************************************\n");
	 printf("HELLO!! WELCOME TO MASTERMIND (Charlize's Version)!! \n ");
	 printf("To Start please choose among the following: ");
	 printf("\n[1] START GAME");
	 printf("\n[2] Introduction to the Game");
	 printf("\n[3] Game Mechanics");
	 printf("\n[4] Exit");
	 printf("\n***********************************************************************************************************\n");
}

/* DisplayEnd FUNCTION*********************
This void function displays the end screen
*******************************************/
void DisplayEnd()
{
	system("CLS");
	printf("***********************************************************************************************************\n");
	printf("Thanks for playing MASTERMIND (Charlize's Version)!!");
	printf("\nThis Game was made by: Charlize Kirsten Brodeth");
	printf("\n***********************************************************************************************************\n");
}

/* DisplayIntro FUNCTION*********************************************
This void function displays the game: MASTERMIND and its descriptions
*********************************************************************/
void DisplayIntro()
{
	system("CLS");
	printf("*********************************************************************************************************************************************\n");
	printf("WELCOME TO MASTERMIND (Charlize's Version)");
	printf("\nFor this game it will be like the regular mastermind though instead of using color pegs, it will make use of numbers as the code pegs");
	printf("\nIf you are unaware of this game, well allow it to introduce itself ;)");
	printf("\nTo get a gist of it, basically there will be one person who will be a CODEMAKE and another will be a CODEBREAKER, roles can be in reverse");
	printf("\ndepending on the number of rounds you agree with the other player (though for this game the so called 'other player')");
	printf("\nThe CODEMAKER then makes a secret code for the other player to guess, the CODEBREAKER has 10 attempts to try and guess the code");
	printf("\nafter every guess hints will be given: 'B' means that A PEG is part of the code AND in the right spot while 'W' means that A PEG");
	printf("\nis ONLY part of the code but NOT in the right place");
	printf("\nAfter the 10 rounds or when the codebreak guesses the code within the 10 rounds, you may tally up the scores");
	printf("\nAND THAT'S ALL YOU NEED TO KNOW ABOUT THE GAME GOOD LUCK!'");
	printf("\n*******************************************************************************************************************************************\n");
}

/* DisplayMechanics FUNCTION**************************
This function displays the instructions for the game
*****************************************************/
void DisplayMechanics()
{
	system("CLS");
	printf("*********************************************************************************************************************************************\n");
	printf("Here are the mechanics of the game: ");
	printf("\n[1] First the player chooses how many games they would like to play either 2, 4, 6, 8, or 10");
	printf("\n\tThe number of games will determine how many times will the player and AI will play [ex] if 2 is chosen it means that the AI and");
	printf("\nhuman player will alternate between being the codemake and codebreaker once");
	printf("\n[2] Once number of games is chosen, it will always start with the human player being the CODEBREAKER while the AI will be the CODEMAKER");
	printf("\n\t in short the ODD number of rounds will be played with the AI bewing the CODEMAKER and the EVEN number of round will be played with");
	printf("\nthe HUMAN PLAYER being the CODEMAKER");
	printf("\n[3] For odd number of rounds");
	printf("\n\t-In these rounds the human player will be the one guessing the secret code; the secret code will be automatically be generated by the AI");
	printf("\n\t-The player willenter a 4 DIGIT code only with the numbers from 1-6 without repitition");
	printf("\n\t-Once the player input their guess, it would be checked automatically; 'B'' will be printed when A PEG is part of the code and is in the");
	printf("\n\tright place; 'W' will be printed if A PEG is ONLY part of the code");
	printf("\n\t-This pattern will go on for 10 rounds or when the player actually guess the code");
	printf("\n\t-The socre then of the CODEMAKER will be printed given the process");
	printf("\n[4] For even number of rounds");
	printf("\n\t-In these rounds the computer AI will be guessing the code; the secret code will be generated by the human player");
	printf("\n\t-The player should input a 4 DIGIT secret code only with the numbers from 1-6 withour repitition");
	printf("\n\t-No need to manually input the checking part for the AI as this will be done automatically");
	printf("\n\t-This will go on for 10 turns or when the computer guesses the right code within 10 tries");
	printf("\n\t-The socre then of the CODEMAKER will be printed given the process");
	printf("\n\nADDITIONAL INSTRUCTIONS AND REMINDERS WILL BE GIVEN AS YOU PLAY ALONG, GOODLUCK!");
	printf("\n*******************************************************************************************************************************************\n");
}

/* DisplayPlayerRound FUNCTION*********************************************************************************
This void fucntion displays the remindiers for when the AI is the CODEMAKER and human player is the CODEBREAKER
***************************************************************************************************************/
void DisplayPlayerRound()
{
	system("CLS");
	printf("*********************************************************************************************************************************************\n");
	printf("For this round, the Computer AI will be the one to generate the code");
	printf("\nYour goal is to guess the 4 NUMBER code. You can choose from the numbers: [1], [2], [3], [4], [5], [6] ONLY");
	printf("\nNote that when you enter each peg there should be spaces in between each number and no number whould repeat. For example: 1 2 3 4");
	printf("\ninvalid: 1234 or 1,2,3,4 or 1123 or 1 1 2 3");
	printf("\nAlso note that you should only enter 4 pegs, if you enter more it will be simply ignored by the program ");
	printf("\nEntering a number other than 1-6 will be considered invalid and you will be asked to enter a combinationa again");
	printf("\nbut don't worry it will not count as a turn, the screen will show the attempt you are on, you only have 10 tries ");
	printf("\nto guess the code given the hints.Once you've guessed the code, points will be given to the codemaker which in this case is the computer AI");
	printf("\nthe points will depend on how many attempts you've used to guess the secret code, once you used up all your attempts and have not guessed");
	printf("\nthe code, the computer AI will receive 11 points. GOOD LUCK!");
	printf("\n\nFor your reference: [B] means that a peg is prt of the code and is in the right place while [W] means that a peg is in part of the code");
	printf("\n*******************************************************************************************************************************************\n");
	
}

/* Display1ComputerRound FUNCTION*******************************************************************************
This void fucntion displays the remindiers for when the human player is the CODEMAKER and AI is the CODEBREAKER
***************************************************************************************************************/
void DisplayComputerRound()
{
	system("CLS");
	printf("*********************************************************************************************************************************************\n");
	printf("For this round, the YOU, as the human player, will be the one to enter the code");
	printf("\nYou must enter a 4 DIGIT CODE. You can choose from the numbers: [1], [2], [3], [4], [5], [6] ONLY");
	printf("\nNote that when you enter each peg there should be spaces in between each number and no number whould repeat. For example: 1 2 3 4");
	printf("\ninvalid: 1234 or 1,2,3,4 or 1123 or 1 1 2 3");
	printf("\nAlso note that you should only enter 4 pegs, if you enter more it will be simply ignored by the program ");
	printf("\nEntering a number other than 1-6 will be considered invalid and you will be asked to enter a combinationa again");
	printf("\nOnce you have entered a valid code, the computer will try and guess the code within 10 attempts, you score will depend on the number of");
	printf("\nof attempts the computer used to guess the code, if the computer did not get the code within the 10th try you will receive 11 points");
	printf("\n*******************************************************************************************************************************************\n");
}

/* CheckPegs FUNCTION***********************************************************************************************************************************
	This function has 4 parameters
	param1 = p1
	param2 = p2
	param3 = p3
	param4 = p4
	
	These represent the 4 pegs that would be checked 
	
	This functions checks if the pegs are in the range of 1 - 6 and check its validity
	it returns 1 (valid) if it is and 0 (invalid) if not
*****************************************************************************************************************************************************/
	
int CheckPegs( int p1, int p2, int p3, int p4) 
{
	if ((p1 >= 1 && p1 <= 6) && (p2 >= 1 && p2 <= 6) && (p3 >= 1 && p3 <= 6) && (p4 >= 1 && p4 <= 6))
	  {
		return 1;
      }
    else
      return 0;	
}

/* CheckDup FUNCTION***********************************************************************************************************************************
	This function has 4 parameters
	param1 = p1
	param2 = p2
	param3 = p3
	param4 = p4
	
	These represent the 4 pegs that would be checked 
	
	This functions checks if there are any pegs that are a duplicate or repeating
	it returns 0 when there are duplicates and returns 1 if there are none
	*****************************************************************************************************************************************************/
int CheckDup( int p1, int p2, int p3, int p4) 
{
	if (p1 == p2 || p1 == p3 || p1 == p4 || p2 == p3 || p2 == p4 || p3 == p4)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

/* CheckingPlace FUNCTION***********************************************************************************************************************************
	This function has 8 parameters
	param1 = p1
	param2 = p2
	param3 = p3
	param4 = p4
	param5 = c1
	param6 = c2
	param7 = c3
	param8 = c4
	
	These represent the 8 pegs that would be checked 
	
	This functions checks if the peg inputs (c1, c2, c3, c4) is part of the code and if they are in the right placement
	if a peg is correct and in the right place 'B' will be printed
	if a peg is correct but not in the right place 'W' will be printed
***********************************************************************************************************************************************************/
void CheckingPlace(int p1, int p2, int p3, int p4, int c1, int c2, int c3, int c4) 
{
	// checking for correct pegs and placements
	if (p1 == c1)
	{
		printf("B ");
	}
	if (p2 == c2)
	{
		printf("B ");
	}
	if (p3 == c3)
	{
		printf("B ");
	}
	if (p4 == c4)
	{
		printf("B ");
	}
	
	// checking if peg 1 is part of the code
	if(p1 == c2)
	{
		printf("W ");	
	}
	else if(p1 == c3)
	{
		printf("W ");
	}
	else if(p1 == c4)
	{
		printf("W ");
	}
	
	//checking if peg 2 is part of the code
	if(p2 == c1)
	{
		printf("W ");
	}
	else if (p2 == c3)
	{
		printf("W ");
	}
	else if (p2 == c4)
	{
		printf("W ");
	}
	
	//checking if peg 3 is part of the code
	if (p3 == c1)
	{
		printf("W ");
	}
	else if (p3 == c2)
	{
		printf("W ");
	}
	else if (p3 == c4)
	{
		printf("W ");
	}
	
	//checking if peg 4 is part of the code
	if (p4 == c1)
	{
		printf("W ");
	}
	else if (p4 == c2)
	{
		printf("W ");
	}
	else if (p4 == c3)
	{
		printf("W ");
	}
}

/* CheckRight FUNCTION********************************************************************************************************************************

This fucntion has 2 parameters

param1 = Peg
param2 = Guess

This function will be used when its the computer AI's turn to guess to help store the value of correct pegs

it checks if the received guess (guess) of the computer matches the correct peg in the same placement 

it returns 1 if the guess matches the peg and 0 if it does not

******************************************************************************************************************************************************/
int CheckRight(Peg, Guess)
{
	if(Peg == Guess)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}

/* PlayerRound FUNCTION*******************************************************************************************************************************

This fucntion has 1 parameter

param1 = *Points

This function will be used when the computer AI is the CODEMAKER and the human player is the CODEBREAKER 

it has local variables:

 1 - Peg1, Peg2, Peg3, Peg4 - for the secret code
 2 - playG1, playG2, playG3, playG4 - for the player guess
 3- counter1 - counter for the loop

first, Peg1, Peg2, Peg3, Peg4 will be randomize into a 4 digit NUMBER code (choosing from the numbers from 1-6) and it should not repeat -- to help
with this, the CheckPegs and CheckDup function is called. -- it will be done in a loop so that the code to be used is valid

next, a for loop is made to count the attempts of the human player guesses

inside the loop is where the player makes their guesses to break the code; after inputing the guesses, CheckPegs and CheckDup function is called 
if either return 0 that means the number inputed is invalid and the player would have to input another guess

once the guess is validated, the CheckingPlace function is called to print the checking of the pegs

this goes on until counter reaches 10; unless when the player guesses the code within the 10 attempts and exits the loop 

The function then returns the points of the CODEMAKER based on the outcome of the precess

******************************************************************************************************************************************************/
int PlayerRound(int *Points) 
{
	int Peg1=1, Peg2=1, Peg3=1, Peg4=1; //Variables for the pegs of the secret code
	
	int playG1, playG2, playG3, playG4;// Varables for the player guesses 
	
	int counter1; //Counter for loop 
	
	*Points = 0;
	srand(time(NULL));
	while(Peg1==Peg2 || Peg1==Peg3 || Peg1==Peg4 || Peg2==Peg3 || Peg2==Peg4 || Peg3==Peg4) // while function to generate a random code without repitition of numbers
	{
		Peg1 = rand() % 6 + 1;
		Peg2 = rand() % 6 + 1;
		Peg3 = rand() % 6 + 1;
		Peg4 = rand() % 6 + 1;
	}
	//printf("%d %d %d %d", Peg1, Peg2, Peg3, Peg4); // to show the secret code || DON'T REMOVE FOR DEMO PURPOSES
	
	for (counter1 = 1; counter1<= 10; counter1++)
	{
		do
		{
			printf("\nAttempt: [%d]", counter1);
			printf("*******************************************************************************");
			printf("\nGuess Code:");
			scanf("%d %d %d %d", &playG1, &playG2, &playG3, &playG4);
			if((CheckPegs(playG1, playG2, playG3, playG4) == 0) || (CheckDup(playG1, playG2, playG3, playG4) == 0))
			{
				printf("---------------------------invalid input---------------------------------\n");
			
			}
		}
		while ((CheckPegs(playG1, playG2, playG3, playG4) == 0) || (CheckDup(playG1, playG2, playG3, playG4) == 0));
		printf("processing........here are the results: ");
		sleep(1);
		CheckingPlace(playG1, playG2, playG3, playG4, Peg1, Peg2, Peg3, Peg4);
		if (Peg1 == playG1 && Peg2 == playG2 && Peg3 == playG3 && Peg4 == playG4)
		{
			*Points = counter1;
			counter1 = 11; 
		}
	}
	if (counter1 == 11)
	{
		*Points = counter1;
	}
	return *Points;
}

/* ComputerRound FUNCTION*******************************************************************************************************************************

This fucntion has 1 parameter

param1 = *Points

This function will be used when the computer AI is the CODEBREAKER and the human player is the CODEMAKER 

it has local variables:

 1 - Peg1, Peg2, Peg3, Peg4 - for the secret code
 2 - compG1, compG2, compG3, compG4 - for the computer  guess
 3 - ch1, ch2, ch3, ch4 - to aid in storing the correct values of the code to the computer AI
 4 - counter2 - to count the loops

first, Peg1, Peg2, Peg3, Peg4 will be inputed by the human player. The human player chooses from the numbers 1-6 as the code's pegs
after inputting,  the CheckPegs and CheckDup function is called to check the validity---it will be done in a loop so that the code to be used is valid

next, a do while loop is made for the guessing process of the computer AI

the AI player guesses the codes via randomization and also has the ability to know if their guess on one peg matches its counterpart on the secret code
to aid with this, the CheckRight function is called to let the computer know if it already guessed the peg correctly -- it also makes sure that no pegs
are the same as the others -- after every 'guess' of the computer the CheckingPlace function will the be called to print thr checking

this goes on until counter reaches 10; unless when the AI guesses the code within the 10 attempts and exits the loop 

The function then returns the points of the CODEMAKER based on the outcome of the precess

******************************************************************************************************************************************************/
int ComputerRound(int *Points) 
{
	int Peg1, Peg2, Peg3, Peg4;// variables to hold the secret code
	
	int compG1, compG2, compG3, compG4;// Variables for computer guess
	int ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0; //Variables to aid in checking for right guesses of the computer 
	int counter2; //counter for loop 
	
	do{ 
		printf("\nPlease type the code in mind\n");
		scanf("%d %d %d %d",&Peg1, &Peg2, &Peg3, &Peg4);
		if ((CheckPegs(Peg1, Peg2, Peg3, Peg4) == 0) || (CheckDup(Peg1, Peg2, Peg3, Peg4) == 0))
		{
			printf("Invalid iput... try again");
			sleep(1);
		}
			
	}
	while((CheckPegs(Peg1, Peg2, Peg3, Peg4) == 0) || (CheckDup(Peg1, Peg2, Peg3, Peg4) == 0));
	
	DisplayComputerRound();
	printf("Secret code is: %d %d %d %d", Peg1, Peg2, Peg3, Peg4);
	
	
	
	srand(time(NULL));
	
	counter2 = 1;
	do
	{
		printf("\n");
		//reset g1
		if (ch1 == 0)
		{
			compG1 = 0;
		 } 
		else 
		{
			compG1 = Peg1;
		}
		
		// reset g2
		if (ch2 == 0)
		{
			compG2 = 0;
		}
		else
		{
			compG2 = Peg2;
		}
		
		// reset g3
		if (ch3 == 0)
		{
			compG3 = 0;
		}
		else 
		{
			compG3 = Peg3;
		}
		
		//reset g4
		if (ch4 == 0)
		{
			compG4 = 0;
		}
		else
		{
			compG4 = Peg4;
		}
		
		
		//randomize AI guesses
		if(ch1 == 0)
		{
			do 
			{
				compG1 = rand() % 6 + 1;
			}
			while (compG1 == compG2 || compG1 == compG3 || compG1 == compG4);
		}
		
		if(ch2 == 0)
		{
			do
			{
				compG2 = rand() % 6 + 1;
			}
			while (compG2 == compG1 || compG2 == compG3 || compG2 == compG4);
			
		}
		
		if(ch3 == 0)
		{
			do
			{
				compG3 = rand() % 6 + 1;
			}
			while (compG3 == compG1 || compG3 == compG2 || compG3 == compG4);
			
		}
		
		if(ch4 == 0)
		{
			do
			{
				compG4 = rand() % 6 + 1; 
			}
			while (compG4 == compG1 || compG4 == compG2 || compG4 == compG3);
			
		}
		printf("Attempt [%d]", counter2);
		printf("*******************************************************************************");
		printf("\nComputer's Guess: ");
		sleep(1);
		printf("%d %d %d %d\n", compG1, compG2, compG3, compG4);
		ch1 = CheckRight(Peg1, compG1);//These will take note is the computer already guessed a peg that is part of the code and in the right placement
		ch2 = CheckRight(Peg2, compG2);
		ch3 = CheckRight(Peg3, compG3);
		ch4 = CheckRight(Peg4, compG4);
		printf("Checking...................Done: ");
		sleep(1);
		CheckingPlace(Peg1, Peg2, Peg3, Peg4, compG1, compG2, compG3, compG4);
		if(ch1 == 1 && ch2 == 1 && ch3 == 1 && ch4 == 1)
		{
			*Points = counter2;
			counter2 = 11;
			return *Points;
		}
		
		counter2++;
	}
	while(counter2 <= 10);
	*Points = counter2;
	return *Points;
}

/* ComputerRound FUNCTION*******************************************************************************************************************************
 
this has 2 parameters
param1 - Ppoints
param2 - Cpoints

This function compares the scores of the players after the agreed upon rounds and prints the winner of the game
******************************************************************************************************************************************************/
void CheckScores(int Ppoints, int Cpoints)
{
	if(Ppoints > Cpoints)
		{
			printf("\nCongratulations You Win!!");
		}
	else if (Ppoints == Cpoints)
		{
			printf("\nIt''s a tie, Good Game!");
		}
	else
		{
			printf("\nComputer AI won, Better luck next time!");
		}
}

/* NumGames FUNCTION*******************************************************************************************************************************
 
this has 2 parameter
param1 - *choices

This function requests the player to input the number of games they wished to play; the player only have to choose between even numbers from 2-10 
if it does not receive an even number then the player will be asked to input again until the number is valid
******************************************************************************************************************************************************/
int NumGames(int *choice1) 
{
	
	do
	{
		printf("******************************************************************************\n");
		printf("Please enter the number of games you wished to play");
		printf("\nNote that the number should be even, either [2] or [4] or [6] or [8] or [10]\nYour Choice: ");
		scanf("%d", choice1);
		printf("\n******************************************************************************\n");
		if ((*choice1 % 2 != 0) || (*choice1 > 10) )
		{
			printf("Invalid Input! please try again...");
			sleep(1); 
			system("CLS");
		}
	}
	while ((*choice1 % 2 != 0) || (*choice1 > 10));
	return *choice1;
}


//------------------------------------------------------------------------------------MAIN FUNCTION OF PROGRAM-----------------------------------------------------------------------//
int main()
{
	int nGames; //Variable to choose the number of games
	int choice1, choice2, choice3; //Variables for the differnet choices to makes in the progeram
	int round1P, round2P, round3P, round4P, round5P; //Variables to store Human Player's Score
	int round1C, round2C, round3C, round4C, round5C; //Variables to store Computer AI's Score
	int FinalPointsP, FinalPointsC;
	
	do
	{
		Display1();
		printf("Your choice: ");
		scanf("%d", &choice1);
		switch(choice1)
		{
			case 2: //Introduction to the game
			{
				DisplayIntro();
				printf("Enter any number to exit");
				scanf("%d", &choice2);
				break;
			}
			case 3:  //Game instructions
			{
				DisplayMechanics();
				printf("Enter any number to exit");
				scanf("%d", &choice2);
				break;
			}
		}
	}
	while(choice1 != 1 && choice1 != 4);
	
	switch(choice1)
	{
		case 1: //Game itself
			printf("LETSSS GOO!!\n");
			NumGames(&nGames);
			switch(nGames)
			{
				case 2: 
				{
					printf("You want to play 2 games");
					sleep(2);
					
					//Round 1
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 1");
					PlayerRound(&round1C);
					printf("\nEnd of Round 1");
					printf("\nComputer AI's points: %d", round1C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 2
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 2");
					ComputerRound(&round1P);
					printf("\nEnd of Round 2");
					printf("\nHuman Player's points: %d", round1P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Point Tally
					system("CLS");
					printf("After the 2 rounds");
					FinalPointsP = round1P;
					FinalPointsC = round1C;
					printf("\nHuman Player's Score: %d", FinalPointsP);
					printf("\nComputer AI's Score: %d", FinalPointsC);
					sleep(3);
					
					CheckScores(FinalPointsP, FinalPointsC);
					; break;
				}
				case 4:
				{
					printf("You want to play 4 games");
					sleep(2);
					
					//Round 1
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 1");
					PlayerRound(&round1C);
					printf("\nEnd of Round 1");
					printf("\nComputer AI's points: %d", round1C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 2
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 2");
					ComputerRound(&round1P);
					printf("\nEnd of Round 2");
					printf("\nHuman Player's points: %d", round1P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 3
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 3");
					PlayerRound(&round2C);
					printf("\nEnd of Round 3");
					printf("\nComputer AI's points: %d", round2C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 4
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 4");
					ComputerRound(&round2P);
					printf("\nEnd of Round 4");
					printf("\nHuman Player's points: %d", round2P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Point Tally
					system("CLS");
					printf("After the 4 rounds");
					FinalPointsP = round1P + round2P;
					FinalPointsC = round1C + round2C;
					printf("\nHuman Player's Score: %d", FinalPointsP);
					printf("\nComputer AI's Score: %d", FinalPointsC);
					sleep(3);
					
					CheckScores(FinalPointsP, FinalPointsC);
			        break;
				}
				case 6:
				{
					printf("You want to play 6 games"); 
					sleep(2);
					
					//Round 1
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 1");
					PlayerRound(&round1C);
					printf("\nEnd of Round 1");
					printf("\nComputer AI's points: %d", round1C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 2
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 2");
					ComputerRound(&round1P);
					printf("\nEnd of Round 2");
					printf("\nHuman Player's points: %d", round1P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 3
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 3");
					PlayerRound(&round2C);
					printf("\nEnd of Round 3");
					printf("\nComputer AI's points: %d", round2C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 4
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 4");
					ComputerRound(&round2P);
					printf("\nEnd of Round 4");
					printf("\nHuman Player's points: %d", round2P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 5
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 5");
					PlayerRound(&round3C);
					printf("\nEnd of Round 5");
					printf("\nComputer AI's points: %d", round3C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 6
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 6");
					ComputerRound(&round3P);
					printf("\nEnd of Round 6");
					printf("\nHuman Player's points: %d", round3P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					
					//Point Tally
					system("CLS");
					printf("After the 6 rounds");
					FinalPointsP = round1P + round2P + round3P;
					FinalPointsC = round1C + round2C + round3C;
					printf("\nHuman Player's Score: %d", FinalPointsP);
					printf("\nComputer AI's Score: %d", FinalPointsC);
					sleep(3);
					
					CheckScores(FinalPointsP, FinalPointsC);
					break;
				}
				case 8:
				{
					printf("You want to play 8 games"); 
					sleep(2);
					
					//Round 1
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 1");
					PlayerRound(&round1C);
					printf("\nEnd of Round 1");
					printf("\nComputer AI's points: %d", round1C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 2
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 2");
					ComputerRound(&round1P);
					printf("\nEnd of Round 2");
					printf("\nHuman Player's points: %d", round1P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 3
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 3");
					PlayerRound(&round2C);
					printf("\nEnd of Round 3");
					printf("\nComputer AI's points: %d", round2C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 4
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 4");
					ComputerRound(&round2P);
					printf("\nEnd of Round 4");
					printf("\nHuman Player's points: %d", round2P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 5
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 5");
					PlayerRound(&round3C);
					printf("\nEnd of Round 5");
					printf("\nComputer AI's points: %d", round3C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 6
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 6");
					ComputerRound(&round3P);
					printf("\nEnd of Round 6");
					printf("\nHuman Player's points: %d", round3P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 7
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 7");
					PlayerRound(&round4C);
					printf("\nEnd of Round 7");
					printf("\nComputer AI's points: %d", round4C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 8
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 8");
					ComputerRound(&round4P);
					printf("\nEnd of Round 8");
					printf("\nHuman Player's points: %d", round4P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					
					//Point Tally
					system("CLS");
					printf("After the 8 rounds");
					FinalPointsP = round1P + round2P + round3P + round4P;
					FinalPointsC = round1C + round2C + round3C + round4C;
					printf("\nHuman Player's Score: %d", FinalPointsP);
					printf("\nComputer AI's Score: %d", FinalPointsC);
					sleep(3);
					
					CheckScores(FinalPointsP, FinalPointsC);
					break;
				}
				case 10:
				{
					printf("You want to play 10 games");
					sleep(2); 
					
					//Round 1
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 1");
					PlayerRound(&round1C);
					printf("\nEnd of Round 1");
					printf("\nComputer AI's points: %d", round1C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 2
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 2");
					ComputerRound(&round1P);
					printf("\nEnd of Round 2");
					printf("\nHuman Player's points: %d", round1P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 3
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 3");
					PlayerRound(&round2C);
					printf("\nEnd of Round 3");
					printf("\nComputer AI's points: %d", round2C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 4
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 4");
					ComputerRound(&round2P);
					printf("\nEnd of Round 4");
					printf("\nHuman Player's points: %d", round2P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 5
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 5");
					PlayerRound(&round3C);
					printf("\nEnd of Round 5");
					printf("\nComputer AI's points: %d", round3C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 6
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 6");
					ComputerRound(&round3P);
					printf("\nEnd of Round 6");
					printf("\nHuman Player's points: %d", round3P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 7
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 7");
					PlayerRound(&round4C);
					printf("\nEnd of Round 7");
					printf("\nComputer AI's points: %d", round4C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 8
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 8");
					ComputerRound(&round4P);
					printf("\nEnd of Round 8");
					printf("\nHuman Player's points: %d", round4P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 9
					DisplayPlayerRound();
					sleep(1);
					printf("\nRound 9");
					PlayerRound(&round5C);
					printf("\nEnd of Round 9");
					printf("\nComputer AI's points: %d", round5C);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					//Round 10
					DisplayComputerRound();
					sleep(1);
					printf("\nRound 10");
					ComputerRound(&round5P);
					printf("\nEnd of Round 10");
					printf("\nHuman Player's points: %d", round5P);
					printf("\nEnter any number to continue to the next round ");
					scanf("%d", &choice3);
					
					
					//Point Tally
					system("CLS");
					printf("After the 10 rounds");
					FinalPointsP = round1P + round2P + round3P + round4P + round5P;
					FinalPointsC = round1C + round2C + round3C + round4C + round5C;
					printf("\nHuman Player's Score: %d", FinalPointsP);
					printf("\nComputer AI's Score: %d", FinalPointsC);
					sleep(3);
					
					CheckScores(FinalPointsP, FinalPointsC);
					break;
				}	
			}
			break;
		case 4: //end screen
		{
			DisplayEnd();
			break;
		}
	}
	
	printf("\nEnter any number to Exit: ");
	scanf("%d", &choice3);
	DisplayEnd();
	
	return 0;
}
