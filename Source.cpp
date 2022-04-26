








//-----------------------------------------------
//				CS 215 - Fall 2020
//					Project 1
//-----------------------------------------------
// Author: Chandler Hamilton
// Section: 005
// Project 1 gas pump simulation.
//
//I recieved help from a youtube channel called code the universe and the website stack overflow. 
// to get help with sytanx of rand, sleep and forloops. I also reviewed the powerpoints on the website.


#include <iomanip>;
#include <string>;
#include <iostream>;
#include <Windows.h>;


using namespace std;



const int second = 1000;


int main() {


	int customerNum = 2135679;
	int noGallons;
	int amountGal;
	double highPrice;
	double medPrice;
	double lowPrice;
	char userInput;
	char gradeSelection;
	string shutdown;



	cout << "+---------------------------------+\n";
	cout << "|          PUMP START UP          |\n";
	cout << "+---------------------------------+\n";
	
	cout << "Enter gallons in pump and today's price per gallon for: \n";
	cout << "High Octane:    ";
	cin >> noGallons; cin >> highPrice;
	cout << "Medium Octane:  ";
	cin >> noGallons; cin >> medPrice;
	cout << "Low Octane:     ";
	cin >> noGallons; cin >> lowPrice;

	
	cout << "Starting pump";

	for (int i=0;i<5;i++)
	{ 
		cout << ".";
		Sleep(second);

	}
	cout << endl;
	cout << endl;


	do {
		// Menu
		cout << "+---------------------------------------------+\n";
		cout << "|      WELCOME TO HUCKABILLY'SELF SERVE!      |\n";
		cout << "|          Chandler Hamilton, Owner.          |\n";
		cout << "+---------------------------------------------+\n";


		cout << "Are you a rewards customer?  (Y/N): ";
		cin >> userInput;
	
		// What to do if the user is a rewards member
		if (userInput == 'Y')
		{
			cout << "Enter Customer rewards number: ";
			cin >> customerNum;
			if (customerNum == customerNum)
			{

				double PPG = 2135679 % 10;
				PPG = PPG + 1;
				PPG = PPG / 100;
				cout << "Price Per Gallon Discount: $" <<fixed << setprecision(2) << PPG;
				cout << endl << endl;
				
				

				cout << "Prices per Gallon:\n";
				cout << "High Octane:        " << "$" << fixed << setprecision(2) << highPrice - PPG << endl;
				cout << "Medium Octane:      " << "$" << fixed << setprecision(2) << medPrice - PPG << endl;
				cout << "Low Octane:         " << "$" << fixed << setprecision(2) << lowPrice - PPG << endl;
				cout << endl;
				cout << "Select Octane: (H/M/L): ";
				cin >> gradeSelection;
				cout << endl;

				if (gradeSelection == 'H')
					cout << highPrice;

				else if (gradeSelection == 'M')
					cout << medPrice;

				else if (gradeSelection == 'L') 
					cout << lowPrice;

					cout << "Enter number of gallons (-1 to Fill it up): ";
					cin >> amountGal;
					cout << endl;
				
			

				if (amountGal > noGallons)
				{
					cout << "Sorry, our tank is nearly empty. We only have " << noGallons << " gallons available.\n";
					cout << fixed << setprecision(2) << "Pumping Gas";
					for (int i = 0; i < 3; i++)
					{

						Sleep(second);
						cout << ".";
					};
					cout << endl;
					for (double i = 0; i <= noGallons; i = i + 0.50)
					{
						
						cout << setprecision(4)<< i << "  gallons pumped...\n";

						Sleep(2 * second);


					};
					cout << endl;

					cout << "--------------- Your Receipt ----------------\n";
					if (gradeSelection == 'H')
					{
						
						cout << "Octane:              High" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << highPrice-PPG << endl;
						cout << "Total:                $  " << fixed << setprecision(2) << (highPrice - PPG) * noGallons << endl;
					}
					else if (gradeSelection == 'M')
					{
						
						cout << "Octane:              Medium" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << medPrice-PPG << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << (medPrice - PPG) * noGallons << endl;
					}
					else
					{
				
						cout << "Octane:              Low" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << lowPrice-PPG << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << (lowPrice - PPG) * noGallons << endl;
					}
					cout << "Thanks you for visiting Huckabilly's!!\n";
					cout << endl;
					cout << "-------------------------------------------\n";
					cout << endl;
					system("pause");
				}
				else if (amountGal == -1)

				{
					
					// random number between 1-8
					double sensor = 1+(rand()%8);
					cout << "Sensor reports " << sensor << " gallons needed to fill up. \n";
					cout << "Pumping gas";
					for (int i = 0; i < 3; i++)
					{
						Sleep(second);
						cout << ".";
					};
					cout << endl;

					for (double i = 0; i <= amountGal; i = i + 0.50)
					{
						
						cout << fixed << setprecision(2) << i << "  gallons pumped...\n";

						Sleep(2 * second);

					};
					cout << endl;

					// The receipt
					cout << "--------------- Your Receipt ----------------\n";
					if (gradeSelection == 'H')
					{
						setprecision(4);
						cout << "Octane:              High" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << highPrice-PPG << endl;
						cout << "Total:                $  " << fixed << setprecision(2) << (highPrice-PPG) * sensor << endl;
					}
					else if (gradeSelection == 'M')
					{
						setprecision(4);
						cout << "Octane:              Medium" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << medPrice-PPG << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << (medPrice-PPG) * sensor << endl;
					}
					else
					{
						setprecision(4);
						cout << "Octane:              Low" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << lowPrice-PPG << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << (lowPrice-PPG) * sensor << endl;
					}
					cout << "Thanks you for visiting Huckabilly's!!\n";
					cout << endl;
					cout << "-------------------------------------------\n";

					cout << endl;
					system("pause");


				}
				else
				{
				
					cout << "Pumping gas";
					for (int i = 0; i < 3; i++)
					{
						Sleep(second);
						cout << ".";
					};
					cout << endl;

					for (double i = 0; i <= amountGal; i = i + 0.50)
					{
					
						cout << fixed << setprecision(2)<< i << "  gallons pumped...\n";

						Sleep(2 * second);

					};
					cout << endl;
					// The receipt
					cout << "--------------- Your Receipt ----------------\n";
					if (gradeSelection == 'H')
					{
					;
						cout << "Octane:              High" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << highPrice-PPG << endl;
						cout << "Total:                $  " << fixed << setprecision(2) << (highPrice-PPG) * amountGal << endl;
					}
					else if (gradeSelection == 'M')
					{
						
						cout << "Octane:              Medium" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << medPrice-PPG << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << (medPrice-PPG) * amountGal << endl;
					}
					else
					{
						
						cout << "Octane:              Low" << endl;
						cout << "Price per gallon:    $  " << lowPrice-PPG << endl;
						cout << "Total:               $  " << (lowPrice-PPG) * amountGal << endl;
						
					}
					cout << "Thanks you for visiting Huckabilly's!!\n";
					cout << endl;
					cout << "---------------------------------------------\n";
					cout << endl;
					system("pause");
				
				}
			}
		}
			// If the user isnt a rewards member 
			else if (userInput == 'N')
			{
				cout << "Price per Gallon discount:     $0.00\n";
				cout << endl << endl;
				

				cout << "Prices per Gallon:\n";
				cout << "High Octane:        " << "$" << fixed << setprecision(2) << highPrice << endl;
				cout << "Medium Octane:      " << "$" << fixed << setprecision(2) << medPrice << endl;
				cout << "Low Octane:         " << "$" << fixed << setprecision(2) << lowPrice << endl;
				cout << endl;
				cout << "Select Octane: (H/M/L): ";
				cin >> gradeSelection;
				cout << endl;
				if (gradeSelection == 'H')
					cout << highPrice;

				else if (gradeSelection == 'M')
					cout << medPrice;

				else if (gradeSelection == 'L')
					cout << lowPrice;


				cout << "Enter number of gallons (-1 to Fill it up): ";
				cin >> amountGal;

				if (amountGal > noGallons)
				{
					cout << "Sorry, our tank is nearly empty. We only have " << noGallons << " gallons available.\n";
					cout << "Pumping Gas";
					for (int i = 0; i < 3; i++)
					{

						Sleep(second);
						cout << ".";
					};
					cout << endl;
					for (double i = 0; i <= noGallons; i = i + 0.50)
					{
					
						cout << fixed << setprecision(2) << i << " gallons pumped...\n";

						Sleep(2 * second);

					};
					cout << endl;
					cout << "--------------- Your Receipt ----------------\n";
					if (gradeSelection == 'H')
					{
						cout << "Octane:              High" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << highPrice << endl;
						cout << "Total:                $  " << fixed << setprecision(2) << highPrice * noGallons << endl;
					}
					else if (gradeSelection == 'M')
					{
						cout << "Octane:              Medium" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << medPrice << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << medPrice * noGallons << endl;
					}
					else
					{
						cout << "Octane:              Low" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << lowPrice << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << lowPrice * noGallons << endl;
					}
					cout << "Thanks you for visiting Huckabilly's!!\n";
					cout << endl;
					cout << "-------------------------------------------\n";
					cout << endl;
					system("pause");
				}
				else if (amountGal == -1)
				{
					// random number between 1-8
					double sensor = 1+(rand()%8);
					cout << "Sensor reports " << sensor << " gallons needed to fill up. \n";
					cout << "Pumping gas";
					for (int i = 0; i < 3; i++)
					{
						Sleep(second);
						cout << ".";
					};
					cout << endl;

					for (double i = 0; i <= sensor; i = i + 0.50)
					{
						setprecision(2);
						cout << i << " gallons pumped...<<\n";

						Sleep(2 * second);

					};
					cout << endl;
					// The receipt
					cout << "--------------- Your Receipt ----------------\n";
					if (gradeSelection == 'H')
					{
						cout << "Octane:              High" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << highPrice << endl;
						cout << "Total:                $  " << fixed << setprecision(2) << highPrice * sensor << endl;
					}
					else if (gradeSelection == 'M')
					{
						cout << "Octane:              Medium" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << medPrice << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << medPrice * sensor << endl;
					}
					else
					{
						cout << "Octane:              Low" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << lowPrice << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << lowPrice * sensor << endl;
					}
					cout << "Thanks you for visiting Huckabilly's!!\n";
					cout << endl;
					cout << "-------------------------------------------\n";
					cout << endl;
					system("pause");



				}
				else
				{
					cout << "Pumping gas";
					for (int i = 0; i < 3; i++)
					{
						Sleep(second);
						cout << ".";
					};
					cout << endl;

					for (double i = 0; i <= amountGal; i = i + 0.50)
					{
						setprecision(2);
						cout << i << " gallons pumped...\n";

						Sleep(2 * second);

					};
					cout << endl;

					// The receipt
					cout << "--------------- Your Receipt ----------------\n";
					if (gradeSelection == 'H')
					{
						cout << "Octane:              High" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << highPrice << endl;
						cout << "Total:                $  " << fixed << setprecision(2) << highPrice * amountGal << endl;
					}
					else if (gradeSelection == 'M')
					{
						cout << "Octane:              Medium" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << medPrice << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << medPrice * amountGal << endl;
					}
					else
					{
						cout << "Octane:              Low" << endl;
						cout << "Price per gallon:    $  " << fixed << setprecision(2) << lowPrice << endl;
						cout << "Total:               $  " << fixed << setprecision(2) << lowPrice * amountGal << endl;
					}
					cout << "Thanks you for visiting Huckabilly's!!\n";
					cout << endl;
					cout << "-------------------------------------------\n";
					cout << endl;
					system("pause");
				}

				cout << endl;
			}
			else if (userInput == 'S' || userInput == 's')
			{
			cout << "Shutting down.";
			Sleep(3 * second);
				
			cout << endl;
			return(0);
			}
			
			else
				cout << "Please enter Y or N.\n";
		
	}while (userInput != 'S');


	













	

};