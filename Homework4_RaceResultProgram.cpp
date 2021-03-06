//Stephanie St. Louis
//Homework 4 - The Race Results Program
//This program will figure out who won the race by
//determining who has the lowest time or if there is a tie.


# include <iostream>
# include <string>
# include <cmath>
using namespace std;

//function prototyping
void getRaceTimes(string&, double&);
void findWinner(string, string, string, double, double, double);
void welcome();
double raceAverage(double, double, double);

int main()
{
	string name1, name2, name3;
	double time1 = 0;
	double time2 = 0;
	double time3 = 0;

	welcome();
	getRaceTimes(name1, time1); // Racer1
	getRaceTimes(name2, time2); // Racer2
	getRaceTimes(name3, time3); // Racer3
	findWinner(name1, name2, name3, time1, time2, time3);
	double average = raceAverage(time1, time2, time3);
	cout << endl;
	cout << endl;
	cout << "Overall Race Time Average: " << average << endl;

	return 0;
}
//function definition
void getRaceTimes(string&racerName, double&racerTime)
{
	cout << "\nPlease enter racer's first name > ";
	cin >> racerName;
	cout << "\nPlease enter racer's time > ";
	cin >> racerTime;
	while (racerTime <= 0)
	{
		cout << "Invalid time input...time must be > 0" << endl;
		cout << "Enter the racers time: ";
		cin >> racerTime;
	}


}
void findWinner(string racer1, string racer2, string racer3, double time1, double time2, double time3)
{
	string winner;
	double winningtime = 0;

	while ((time1 != 0) && (time2 != 0) && (time3 > 0))
	{


		if ((time1 == time2) && (time1 == time2) < time3)
		{
			winningtime = time1;
			cout << "We have a TIE " << racer1 << " and " << racer2 << " win!!" << endl;
			cout << "***** Your winning time is: " << winningtime << " *****" << endl;
		}
		else if ((time1 == time3) && (time1 == time3) < time2)
		{
			winningtime = time1;
			cout << "We have a TIE " << racer1 << " and " << racer3 << " win!!" << endl;
			cout << "***** Your winning time is: " << winningtime << " *****" << endl;
		}
		else if ((time2 == time3) && (time2 == time3) < time1)
		{
			winningtime = time2;
			cout << "We have a TIE " << racer2 << " and " << racer3 << " win!!" << endl;
			cout << "***** Your winning time is: " << winningtime << " *****" << endl;
		}
		else if (time1 < time2&&time3)
		{
			winner = racer1;
			winningtime = time1;
			cout << "Congratulations " << winner << "!!!" << "You are the winner!!" << endl;
			cout << "***** Your winning time is: " << winningtime << " *****" << endl;
		}
		else if (time2 < time1&&time3)
		{
			winner = racer2;
			winningtime = time2;
			cout << "Congratulations " << winner << "!!!" << "You are the winner!!" << endl;
			cout << "***** Your winning time is: " << winningtime << " *****" << endl;
		}
		else if (time3 < time1&&time2)
		{
			winner = racer3;
			winningtime = time3;
			cout << "Congratulations " << winner << "!!!" << "You are the winner!!" << endl;
			cout << "***** Your winning time is: " << winningtime << " *****" << endl;
		}
		else if ((time1 == time2) && (time1 == time2) && (time2 == time3) && (time2 == time3) && (time1 == time3) && (time1 == time3))
		{
			cout << "We have a 3 way TIE!! No winner for this race..." << endl;
		}
		break;
	}

}
void welcome()
{
	cout << "*****************************************************************************\n";
	cout << "Welcome to Race Results Program\n";
	cout << "You are Asked to Enter the Three Racers Names and their Associated Race Time\n " << endl;


	cout << "Please enter a real number for the Race Time (the race time must be > 0)\n";
	cout << "Program Developed by: Stephanie St. Louis\n";
	cout << "******************************************************************************\n" << endl;
}
double raceAverage(double time1, double time2, double time3)
{
	double average = 0.0;
	average = (time1 + time2 + time3) / 3.0;
	return average;
}