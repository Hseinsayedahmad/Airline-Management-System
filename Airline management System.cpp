#define _CRT_SECURE_NO_WARNINGS

// Airline Management System
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;

string toLower(string str)
{
	string lowerStr = str;

	for (size_t i = 0; i < str.length(); ++i) {
		lowerStr[i] = tolower((unsigned char)str[i]);
	}
	return lowerStr;
}

time_t t = time(NULL);
tm* timePtr = localtime(&t);

const int MAX_VALID_YR = timePtr->tm_year + 1901;
const int MIN_VALID_YR = timePtr->tm_year + 1900;

const int MIN_VALID_MNTH = timePtr->tm_mon + 1;
const int MAX_VALID_MNTH = timePtr->tm_mon + 2;

// Returns true if
// given year is valid.
bool isLeap(int year)
{
	// Return true if year
	// is a multiple of 4 and
	// not multiple of 100.
	// OR year is multiple of 400.
	return (((year % 4 == 0) &&
		(year % 100 != 0)) ||
		(year % 400 == 0));
}

// Returns true if given
// year is valid or not.
bool isValidDate(int d, int m, int y)
{
	// If year, month and day
	// are not in given range
	if (y > MAX_VALID_YR ||
		y < MIN_VALID_YR)
		return false;
	if (m < MIN_VALID_MNTH || m > MAX_VALID_MNTH)
		return false;
	if (d < 1 || d > 31)
		return false;

	// Handle February month
	// with leap year
	if (m == 2)
	{
		if (isLeap(y))
			return (d <= 29);
		else
			return (d <= 28);
	}

	// Months of April, June,
	// Sept and Nov must have
	// number of days less than
	// or equal to 30.
	if (m == 4 || m == 6 ||
		m == 9 || m == 11)
		return (d <= 30);

	return true;
}

// Class for selecting flight destinationCitys of your choice

class flightDetails
{

	int flightSerial[15] = { 101, 102, 103, 122, 123, 124, 131, 132, 133, 241, 242, 243, 501, 502, 503 };
	int price[16] = { 1200, 1000, 1500, 1100, 1400, 1000, 1200, 1350, 900, 1250, 1400, 1200, 1600, 1650, 1350 };
	int availableSeats[16] = {1, 2, 5, 2, 3, 4, 1, 0, 2, 2, 5, 3, 1, 2, 3};
	int selectFlight;
	int perPersonPrice;

public:

	int Ksarnaba(int* x)
	{
		cout << "\n\n Flights available for Ksarnaba:";
		cout << "\n  " << flightSerial[0] << "-Flight (time: 5:00pm) " << price[0] <<"$- per person";
		cout << "\n  " << flightSerial[1] << "-Flight (time: 12:00am) " << price[1] <<"$- per person";
		cout << "\n  " << flightSerial[2] << "-Flight (time: 8:00pm) " << price[2] <<"$- per person";

		cout << "\nChoose your flight: ";
		bool valid;
		do {
        valid = false;
		cin >> selectFlight;
		for (int i = 0; i <3; i++) {
            if(selectFlight == flightSerial[i] ) {
                valid = true;
                    break;
}
		}
		if(!valid)
        cout << "\nInvalid flight number, please reenter it carefully: ";
		}while(!valid);

		for (int i = 0; i < 3; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				(*x)=i;
				return availableSeats[i];
			}
		}
	}

public:
	int Shahabya(int* x)
	{
		cout << "\n You have chosen Shahabya.";
		cout << "\n Flights available for Shahabya:";
		cout << "\n  " << flightSerial[3] << "-Flight (time: 3:00pm) " << price[3] << "/- per person";
		cout << "\n  " << flightSerial[4] << "-Flight (time: 7:00pm) " << price[4] << "/- per person";
		cout << "\n  " << flightSerial[5] << "-Flight (time: 2:00am) " << price[5] << "/- per person";

		cout << "\nChoose your flight: ";
		bool valid;
		do {
        valid = false;
		cin >> selectFlight;
		for (int i = 3; i <= 5; i++) {
            if(selectFlight == flightSerial[i] ) {
                valid = true;
                 return availableSeats[i];
            }

		}
		if(!valid)
        cout << "\nInvalid flight number, please reenter it carefully: ";
		}while(!valid);

		for (int i = 3; i <= 5; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
                (*x)=i;
				break;
			}
		}
	}

public:
	int Hadath(int* x)
	{
		cout << "\n You have chosen Hadath.";
		cout << "\n Flights available for Hadath:";
		cout << "\n  " << flightSerial[6] << "-Flight (time: 4:00pm) " << price[6] << "/- per person";
		cout << "\n  " << flightSerial[7] << "-Flight (time: 9:00pm) " << price[7] << "/- per person";
		cout << "\n  " << flightSerial[8] << "-Flight (time: 2:00am) " << price[8] << "/- per person";

		cout << "\nChoose your flight: ";
		bool valid;
		do {
        valid = false;
		cin >> selectFlight;
		for (int i = 6; i <= 8; i++) {
            if(selectFlight == flightSerial[i]) {
                valid = true;
                break;
            }

		}
		if(!valid)
        cout << "\nInvalid flight number, please reenter it carefully: ";
		}while(!valid);

		for (int i = 6; i <= 8; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				(*x)=i;
				return availableSeats[i];;
			}
		}
	}

public:
	int Kafarmelki(int* x)
	{
		cout << "\n You have chosen Kafarmelki.";
		cout << "\n Flights available for Kafarmelki:";
		cout << "\n  " << flightSerial[9] << "-Flight (time: 5:00pm) " << price[9] << "/- per person";
		cout << "\n  " << flightSerial[10] << "-Flight (time: 6:00pm) " << price[10] << "/- per person";
		cout << "\n  " << flightSerial[11] << "-Flight (time: 1:00am) " << price[11] << "/- per person";
        cout << "\nChoose your flight: ";
		bool valid;
		do {
        valid = false;
		cin >> selectFlight;
		for (int i = 9; i <= 11; i++) {
            if(selectFlight == flightSerial[i] ) {
                valid = true;
                 break;
            }

		}
		if(!valid)
        cout << "\nInvalid flight number, please reenter it carefully: ";
		}while(!valid);

		for (int i = 9; i <= 11; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				(*x)=i;
				return availableSeats[i];
			}
		}
	}

public:
	int Gaza(int* x)
	{
		cout << "\n Flights available for Gaza:";
		cout << "\n  " << flightSerial[12] << "-Flight (time: 4:00am) " << price[12] << "/- per person";
		cout << "\n  " << flightSerial[13] << "-Flight (time: 3:00pm) " << price[13] << "/- per person";
		cout << "\n  " << flightSerial[14] << "-Flight (time: 6:00am) " << price[14] << "/- per person";

        cout << "\nChoose your flight: ";
		bool valid;
		do {
        valid = false;
		cin >> selectFlight;
		for (int i = 12; i <= 14; i++) {
            if(selectFlight == flightSerial[i] ) {
                valid = true;
                 break;
            }
		}
		 if(!valid)
        cout << "\nInvalid flight number, please reenter it carefully: ";
		}while(!valid);

		for (int i = 12; i <= 14; i++)
		{
			if (selectFlight == flightSerial[i])
			{
				setPerPersonPrice(price[i]);
				(*x)=i;
				return availableSeats[i];
			}
		}
	}

	void updateSeats (int index,int n) {
	    availableSeats[index]=n;
	}

	// Set Price of per person

	void setPerPersonPrice(int price)
	{
		perPersonPrice = price;
	}

	// Get Price of per person

	int getperPersonPrice()
	{
		return perPersonPrice;
	}

	// Get selected flight by passenger

	int getSelectFlight()
	{
		return selectFlight;
	}
};

// Class Node saving user information

class Node
{
public:
	string name = "", date = "", departureCity = "", destinationCity = "", gender = "", ID = "";
	int age = 0, bookingCode = 0, ticketSerialNo = 0;
	float fare = 0;
	Node* next = NULL;
};


// Class for the main process of booking tickets

class bookingProcedureOfTicket
{

private:
	Node* head = NULL;
	Node* current = NULL;
	Node* front = NULL;
	Node* rear = NULL;
	int Bcode = 0;
	int Bcode2 = 0;
	flightDetails call;
	int availableSeats;

public:
	int Age = 0;
	int members = 0;
	//int count = 0;
	float sum = 0;
	float fare = 0;
	float discount = 0;
	float discountFare = 0;
	float totalFare = 0;
	string ID = "";
	int numberOfBooking = 0;

public:
	//bookingProcedureOfTicket() // Constructor
	//{
	//	head = NULL;
	//	front = NULL;
	//	rear = NULL;
	//	count = 0;
	//	sum = 0;
	//	fare = 0;
	//	discount = 0;
	//	discountFare = 0;
	//	totalFare = 0;
	//	numberOfBooking = 0;
	//}


	bool isValidCity(string city)
	{
		if (toLower(city) == "ksarnaba" || toLower(city) == "hadath" ||
			toLower(city) == "shahabya" || toLower(city) == "gaza" || toLower(city) == "kafarmelki")
		{
			return true;
		}
		return false;
	}


	// This method will contain all the passenger info
	void inputPassengersInfo()
	{
	    int count =0;
		Bcode = rand();
		Bcode2 = (((double) rand() / (RAND_MAX)) + 1)*2000;
		string departureCity = "", destinationCity = "", date = "";
		int change = 1;

		do {
			if (change == 1 || change == 2)
			{
				do
				{
					cout << "\nDEPARTURE:\n";
					cout << "   - Our flights are only available from:\n* Shahabya\n* Ksarnaba\n* Kafarmelki\n* Hadath\n* Gaza\n";
					cout << "\nEnter your departure city from above mentioned cities: ";
					cin >> departureCity;
				} while (!isValidCity(departureCity));
			}

			if (change == 1 || change == 3)
			{
				do
				{
					cout << "\nDESTINATION:\n";
					cout << "   - Our flights are only available to :\n* Shahabya\n* Ksarnaba\n* Kafarmelki\n* Hadath\n* Gaza\n";
					cout << "\nEnter your destination city from above mentioned cities: ";
					cin >> destinationCity;
				} while (!isValidCity(destinationCity));

			}

			if (toLower(departureCity) == toLower(destinationCity))
			{
				cout << "\nDeparture and Destination cities cannot be same." << endl;
				cout << "\nTo change both Enter 1.\nTo change Deaprture Enter 2.\nTo Change Destnation Enter 3.\n" << endl;
				cout << "Select: ";
				cin >> change;
			}
		} while (toLower(departureCity) == toLower(destinationCity));

		// Date Input
		int d = 0, m = 0, y = 0;
		bool validDate = false;
        int index=0;
		do
		{
			cout << "\nEnter Date: ";
			cin >> d;
			cout << "Enter Month: ";
			cin >> m;
			cout << "Enter Year: ";
			cin >> y;

			validDate = isValidDate(d, m, y);

			if (!validDate)
			{
				cout << "\nPlease enter a valid date, month and year. You can book seats up to 30 days in advance.\n";
			}

		} while (!validDate);

		date = to_string(d) + "/" + to_string(m) + "/" + to_string(y);

		if (toLower(destinationCity)  == "ksarnaba")
		{
			availableSeats=call.Ksarnaba(&index);
		}
		else if (toLower(destinationCity) == "hadath")
		{
			availableSeats=call.Hadath(&index);
		}
		else if (toLower(destinationCity) == "shahabya")
		{
			availableSeats=call.Shahabya(&index);
		}
		else if (toLower(destinationCity) == "gaza")
		{
			availableSeats=call.Gaza(&index);
		}
		else if (toLower(destinationCity) == "kafarmelki")
		{
			availableSeats=call.Kafarmelki(&index);
		}
		else
		{
			cout << "Wrong destinationCity\n";
		}

		if(availableSeats >0)
        cout<< "\n"<<availableSeats<<" Available seats";
        else
            cout<< "\n note that there are no more available seats, you will be added to the waiting list"<<endl;
		cout << "\nFor how many people you want to book tickets: ";
        cin>>members;
		cout << endl;

		numberOfBooking = count + members;


		for (int i = 1; i <= members; i++)
		{
		    if(availableSeats > 0)
		    cout<<"\n"<<availableSeats<<" more available seats"<<endl;
		    else
                cout<<"\nyou will be added to the waiting list\n";

			Node* passenger_newnode = new Node();

			cout << "Enter passenger name: ";
			cin >> passenger_newnode->name;

			cout << "Enter your age: ";
			cin >> passenger_newnode->age;

			passenger_newnode->date = date;

			cout << "Enter gender: ";
			cin >> passenger_newnode->gender;

			// ID validation
			cout << "Enter ID: ";
			cin >> ID;

			while (ID.length() != 4)
			{
				cout << "Enter correct ID number: ";
				cin >> ID;
			}



			passenger_newnode->ID = ID;

			cout << "Your ticket Serial No. is: S-"<< i;

			passenger_newnode->ticketSerialNo = i;
			cout << "\n----------------------------------------------------\n" << endl;

			passenger_newnode->departureCity = departureCity;
			passenger_newnode->destinationCity = destinationCity;

			passenger_newnode->bookingCode = Bcode2;


			if(count <= availableSeats && availableSeats!=0)
			{
			    if (head == NULL)
				{
					head = passenger_newnode;
					passenger_newnode->next = NULL;
				}

				else
				{
					current = head;

					while (current->next != NULL)
					{
						current = current->next;
					}

					current->next = passenger_newnode;
					current = current->next;
					current->next=NULL;
				}
			} else {
			   if (front == NULL)
				{
					front = passenger_newnode;
					passenger_newnode->next = NULL;
				}

				else
				{
					rear = front;

					while (rear->next != NULL)
					{
						rear = rear->next;
					}

					rear->next = passenger_newnode;
					rear = rear->next;
					rear->next=NULL;
				}
			}

			current = head;
			rear=front;

			while (current != NULL)
		{
			if (Bcode2 == current->bookingCode)
			{
				if (current->age > 0 && current->age <= 6)
				{
					discount = call.getperPersonPrice() * 0.5; // 50% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else if (current->age > 6 && current->age <= 12)
				{
					discount = call.getperPersonPrice() * 0.3; // 30% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else if (current->age >= 60)
				{
					discount = call.getperPersonPrice() * 0.2; // 20% discount
					discountFare = call.getperPersonPrice() - discount;
					current->fare = discountFare;
					sum += discountFare; // Total fare
				}
				else
				{
					fare = call.getperPersonPrice();
					current->fare = fare;
					sum += fare;
				}


			}
			current = current->next;
		}

		while (rear != NULL)
		{
			if (Bcode2 == rear->bookingCode)
			{
				if (rear->age > 0 && rear->age <= 6)
				{
					discount = call.getperPersonPrice() * 0.5; // 50% discount
					discountFare = call.getperPersonPrice() - discount;
					rear->fare = discountFare;
				}
				else if (rear->age > 6 && rear->age <= 12)
				{
					discount = call.getperPersonPrice() * 0.3; // 30% discount
					discountFare = call.getperPersonPrice() - discount;
					rear->fare = discountFare;
				}
				else if (rear->age >= 60)
				{
					discount = call.getperPersonPrice() * 0.2; // 20% discount
					discountFare = call.getperPersonPrice() - discount;
					rear->fare = discountFare;
				}
				else
				{
					fare = call.getperPersonPrice();
					rear->fare = fare;
				}
			}
			rear = rear->next;
		}


			availableSeats--;
			count++;
			call.updateSeats(index,availableSeats);
			/*
						if (numberOfBooking > 2)
			{
				if (front == NULL)
				{
					front = passenger_newnode;
					rear = passenger_newnode;
				}
				else
				{
					rear->next = passenger_newnode;
					rear = passenger_newnode;
				}
			}


			else
			{
				if (head == NULL)
				{
					head = passenger_newnode;
					passenger_newnode->next = NULL;
				}

				else
				{
					current = head;

					while (current->next != NULL)
					{
						current = current->next;
					}

					current->next = passenger_newnode;
				}
			}*/



		}


		// Check if user has entered correct destinationCity according to available flights





			cout << "\nYour booking code is " << Bcode2;
	}


	// Display Queue

	void showWaitingList()
	{
		rear = front;

		if (rear == NULL)
			cout << "Waiting list is empty" << endl;

		else
		{
			while (rear != NULL)
			{
				cout << "______________________________________________________________ " << endl << endl;
				cout << "* Serial No.:     \t" << "S-" << rear->ticketSerialNo  << endl;
				cout << "* Passenger Name: \t" << rear->name << endl;
				cout << "* Age:            \t" << rear->age << endl;
				cout << "* ID:           \t" << rear->ID << endl;
				cout << "* Booking Date:   \t" << rear->date <<endl;
				cout << "* From:           \t" << rear->departureCity <<endl;
				cout << "* To:             \t" << rear->destinationCity <<endl;
				cout << "______________________________________________________________ " << endl << endl;

				rear = rear->next;
			}
		}

	}

	// To calculate Total Price of tickets

	void calculatePrice()
	{
		current = head;
		rear = front;
		sum = 0;
		int bcode;
		cout << "Enter your booking code: ";
		cin >> bcode;

		if (current == NULL && rear==NULL)
			cout << "\nNo price to display";
        while (current != NULL)
		{
			if (bcode == current->bookingCode)
			{

            sum+=current->fare;

			}
			current = current->next;
		}

		while (rear != NULL)
		{
			if (bcode == rear->bookingCode)
			{
				sum+=rear->fare;

			}
			rear = rear->next;
		}

        if(sum==0)
            cout<<"\nwrong booking code"<<endl;
        else
            cout<<"\nyou total fare is: "<<sum<<endl;

	}





	// This will display the information of all the bookings

	void viewInfo()
	{
		cout << endl;

		current = head;
		rear=front;
		int bookCode;
		bool found = false;

		cout << "Enter ticket code: ";
		cin >> bookCode;

		if (current == NULL)
		{
			cout << "There is no booking to display." << endl;
			return;
		}

		while (current != NULL)
		{
			if (bookCode == current->bookingCode)
			{
				cout << "______________________________________________________________" << endl << endl;
				cout << "* Serial No.:     \t" << "S-" << current->ticketSerialNo << endl;
				cout << "* Passenger Name: \t" << current->name << endl;
				cout << "* Age:            \t" << current->age << endl;
				cout << "* ID:           \t" << current->ID << endl;
				cout << "* Booking Date:   \t" << current->date << endl;
				cout << "* From:           \t" << current->departureCity<< endl;
				cout << "* To:             \t" << current->destinationCity << endl;
				cout << "* Flight No.:     \tMEA-" << call.getSelectFlight()<< endl;
				cout << "* Fare:           \t" << current->fare << endl;
				cout << "______________________________________________________________" << endl;
				cout << endl;
				found = true;
			}
			current = current->next;
		}

		while (rear != NULL)
		{
			if (bookCode == rear->bookingCode)
			{
				cout << "______________________________________________________________" << endl << endl;
				cout << "* Serial No.:     \t" << "S-" << rear->ticketSerialNo << endl;
				cout << "* Passenger Name: \t" << rear->name << endl;
				cout << "* Age:            \t" << rear->age << endl;
				cout << "* ID:           \t" << rear->ID << endl;
				cout << "* Booking Date:   \t" << rear->date << endl;
				cout << "* From:           \t" << rear->departureCity<< endl;
				cout << "* To:             \t" << rear->destinationCity << endl;
				cout << "* WAITING LIST"<<endl;
				cout << "______________________________________________________________" << endl;
				cout << endl;
				found = true;
			}
			rear = rear->next;
		}

		if (found != true)
		{
			cout << "Booking not found" << endl;
		}
	}

	// Modify any user Ticket incase of incorrect information

	void modifyTicket()
	{
		int bcode;
		int serial;
		int found = -1;

		cout << "Enter your booking code: ";
		cin >> bcode;

		cout << "\nEnter serial number to edit: S-";
		cin >> serial;

		current = head;
		while (current != NULL)
		{
			if (bcode == current->bookingCode && serial == current->ticketSerialNo)
			{
				cout << "Enter passenger name: ";
				cin >> current->name;

				cout << "Enter your age: ";
				cin >> current->age;

				cout << "Enter date: ";
				cin >> current->date;

				cout << "Enter gender: ";
				cin >> current->gender;

				found = 0;
				cout << endl;
				break;
			}
			current = current->next;
		}
		current=front;
		while (current != NULL)
		{
			if (bcode == current->bookingCode && serial == current->ticketSerialNo)
			{
				cout << "Enter passenger name: ";
				cin >> current->name;

				cout << "Enter your age: ";
				cin >> current->age;

				cout << "Enter date: ";
				cin >> current->date;

				cout << "Enter gender: ";
				cin >> current->gender;

				found = 0;
				cout << endl;
				break;
			}
			current = current->next;
		}

		if (found == -1)
		{
			cout << "Record not Found" << endl;
		}
	}

	// Method to confirm payment after booking

	void confirmPayment()
	{
		current = head;

		int bcode, userInput;
		string ID;
		bool found = false;

		cout << "Enter your booking code: ";
		cin >> bcode;

		cout << "\nEnter ID number of booking of 1st person: ";
		cin >> ID;

		if (current == NULL)
		{
			cout << "\nThere is no booking aganist entered booking code" << endl;
		}

		while (current != NULL)
		{
			if (bcode == current->bookingCode && ID == current->ID)
			{
				found = true;
				break;
			}
			current = current->next;
		}

		if (found)
		{

			cout << "\nYour Total Fare is: " << current->fare << endl;

			cout << "\nPay fare amount to confirm ticket: ";
			cin >> userInput;

			if (userInput == current->fare)
			{
				cout << "\nYour booking is confirmed, enjoy your trip!!!";
			}
			else
			{
				cout << "\nPlease pay the required amount" << endl;

				cout << "\nPay fare amount to confirm ticket: ";
				cin >> userInput;

				if (userInput == current->fare)
				{
					cout << "\nYour booking is confirmed, enjoy your trip!!!";
				}

				else
				{
					cout << "\nYour Booking is cancelled, book again." << endl;
				}
			}
		}
		else
		{
			cout << "\nBookings not found, book your ticket first" << endl;
		}
	}

	// To clear all passenger data from the system

	void DeletingPassengerInfo()
	{
		current = head;
		int Bcode;
		//char decide;
		bool found = false;

		cout << "Enter your booking code to cancel booking: ";
		cin >> Bcode;

		if (head == NULL && front==NULL)
		{
			cout << "No booking to cancel" << endl;
		}
		else
		{
		    if(head!=NULL) {

                if (current->next == NULL)            // If only one Node in Linked List this condition will execute
			{
				if (Bcode == current->bookingCode)
				{
					head = NULL;
					delete(current);
					found = true;
				}
			}
			else
			{
				// If there are more than one node and first node is deleting
				if (current == head && Bcode == current->bookingCode)
				{
					Node* temp = current;
					current = current->next;
					delete(temp);
					found = true;
				}
				else  // If deleting node from end or middle
				{
					Node* previous = current;
					while (current != NULL)
					{
						if (Bcode == current->bookingCode)
						{
							previous->next = current->next;
							delete (current);
							found = true;
						}

						current = current->next;
					}

				}
			}
		    }
		    if(front!=NULL){

		    current=front;

		        if (current->next == NULL)            // If only one Node in Linked List this condition will execute
			{
				if (Bcode == current->bookingCode)
				{
					front = NULL;
					delete(current);
					found = true;
				}
			}
			else
			{
				// If there are more than one node and first node is deleting
				if (current == front && Bcode == current->bookingCode)
				{
					Node* temp = current;
					current = current->next;
					delete(temp);
					found = true;
				}
				else  // If deleting node from end or middle
				{
					Node* previous = current;
					while (current != NULL)
					{
						if (Bcode == current->bookingCode)
						{
							previous->next = current->next;
							delete (current);
							found = true;
						}

						current = current->next;
					}

				}
			}

		    }


			if (found == false)
			{
				cout << "\nBooking not found" << endl;
			}
			else {
				cout << "\nBooking is cancelled, successfully" << endl;
			}
		}
	}
};

// Menu which will select our desirable query

class Menu
{
	int choice = 0;
	bookingProcedureOfTicket call;

public:
	void showMenu()
	{

		do
		{
			cout << endl;
			cout << "\n----------------------------------" << endl;
			cout << "  Faculty of Engineering International AirPort ";
			cout << "\n";
			cout << "----------------------------------";

			cout << "\n 11 Services for the Cities";
			cout << "\n 1 Booking";
			cout << "\n 2 Price";
			cout << "\n 3 View Ticket details";
			cout << "\n 4 Modify Ticket details";
			cout << "\n 5 Payment confirmation ";
			cout << "\n 6 Cancel your booking";
			cout << "\n 7 Show waiting List";
			cout << "\n 0 Exit \n";
			cout << "\nEnter your Choice:  ";
			cin >> choice;

			switch (choice)
			{
			case 11:
				cout << endl;
				cout << "\n    Shahabya \n";
				cout << "\n    Kafarmelki \n";
				cout << "\n    Hadath \n";
				cout << "\n    Gaza \n";
				cout << "\n   Ksarnaba \n" << endl;

				break;
			case 1:
				cout << endl;
				cout << "\n    Book ULFG Flight Tickets \n"
					<< endl;
				call.inputPassengersInfo();
				break;
			case 2:
				cout << endl;
				call.calculatePrice();
				break;
			case 3:
				cout << endl;
				call.viewInfo();
				break;
			case 4:
				cout << endl;
				call.modifyTicket();
				break;
			case 5:
				cout << endl;
				call.confirmPayment();
				break;
			case 6:
				cout << endl;
				call.DeletingPassengerInfo();
				break;
			case 7:
				cout << endl;
				call.showWaitingList();
			}

		} while (choice != 0);
	}
};

// Main Method

int main()
{
	Menu call; // Menu Object

	call.showMenu(); // Called method

	return 0;
}


//time_t t = time(NULL);
//tm* timePtr = localtime(&t);
//
//cout << "seconds= " << timePtr->tm_sec << endl;
//cout << "minutes = " << timePtr->tm_min << endl;
//cout << "hours = " << timePtr->tm_hour << endl;
//cout << "day of month = " << timePtr->tm_mday << endl;
//cout << "month of year = " << timePtr->tm_mon + 1 << endl;
//cout << "year = " << timePtr->tm_year + 1900 << endl;
//cout << "weekday = " << timePtr->tm_wday << endl;
//cout << "day of year = " << timePtr->tm_yday << endl;
//cout << "daylight savings = " << timePtr->tm_isdst << endl;

