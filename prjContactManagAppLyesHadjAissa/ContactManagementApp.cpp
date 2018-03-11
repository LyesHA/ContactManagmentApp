/*		Name : Lyes Hadj Aissa
		Teacher's name : Houria Houmel 
		Submitted  date : 22-03-2018
		Description : 

*/

#include <iostream>
#include <string>
#include "StructHeader.h"
using namespace std;

//Function to load data by reference and by pointers
void Load_Data(Contact AddCont[], int max);
void Load_Data(Contact *fe, Contact *le);

//Function to Display data by reference and by pointers
void Display_Data(Contact ShowCont[], int max);
void Display_Data(Contact *fe, Contact *le);

//Functions to overload inserter and extractor stream operators 
istream & operator >> (istream &in_stream, Contact &Add_Cont);
ostream & operator << (ostream &out_stream, Contact &Show_Cont);

int main() {
	//Declaration of variables
	int menu = 0;
	int max;
	cout << "********** Welcome to Contact Management Application ********** " << endl;
	system("pause");
	do {
		system("cls");
		cout << "****** Please choose one of these following choices ******" << endl;
		cout << "1- Create a contact " << endl;
		cout << "2- Display all the contacts " << endl;
		cout << "3- Search for a contact by : Contact number or first name and last name ?" << endl;
		cout << "4- Sort the contacts by : Contact number or company name ?" << endl;
		cout << "5- Exit application " << endl;
		cin >> menu;
		switch (menu)
		{
		case 1: {
			cout << "How many contact you want to create? :" << endl;
			cin >> max;
			Contact *NvxCont = new Contact[max];
			Load_Data(NvxCont, max);
			break;
		}
		case 2 : 
			break;
		case 3 : 
			break;
		case 4 : 
			break;
		case 5 : 
			cout << "Good bye !" << endl;
			break;
		default:
			cout << "Invalid choice ! Please enter a valid number !" << endl;
			break;
		}
	} while (menu != 5);

	system("pause");
	return 0;
}

//Functions to load and display data by references
void Load_Data(Contact AddCont[], int max) {
	for (int i = 0; i < max; i++) {
		cout << " The address :" << endl;
		cout << "Enter the street number ? :" << endl;
		cin >> AddCont[i].contact_number.street_number;
		cout << "Enter the street name ? :" << endl;
		cin >> AddCont[i].contact_number.street_name;
		cout << "Enter the city ? :" << endl;
		cin >> AddCont[i].contact_number.city;
		cout << "Enter the province name ? :" << endl;
		cin >> AddCont[i].contact_number.province;
		cout << "Enter the country name ? :" << endl;
		cin >> AddCont[i].contact_number.country;
		cout << "Enter the postal code ? :" << endl;
		cin >> AddCont[i].contact_number.postal_code;

		cout << endl << " Personal Informations :" << endl;
		cout << "Enter your first name ?" << endl;
		getline(cin, AddCont[i].first_name);
		cout << "Enter your last name ?" << endl;
		getline(cin, AddCont[i].last_name);
		cout << "Enter the company name ?" << endl;
		getline(cin, AddCont[i].company_name);

		cout << endl << " Contact Informations :" << endl;
		cout << "Enter your international code ? :" << endl;
		cin >> AddCont[i].phone_number.international_code;
		cout << "Enter your country code ? :" << endl;
		cin >> AddCont[i].phone_number.country_code;
		cout << "Enter your city code ? :" << endl;
		cin >> AddCont[i].phone_number.city_code;
		cout << "Enter your cell code ? :" << endl;
		cin >> AddCont[i].phone_number.cell_code;

		cout << "Enter your fax ? :" << endl;
		cin >> AddCont[i].fax;

		cout << endl << " Please enter the meeting date ?" << endl;
		cout << "Enter the day? :" << endl;
		cin >> AddCont[i].meeting_date.day;
		cout << "Enter the month? :" << endl;
		cin >> AddCont[i].meeting_date.month;
		cout << "Enter the year? :" << endl;
		cin >> AddCont[i].meeting_date.year;
	}
}
void Display_Data(Contact ShowCont[], int max) {
	for (int i = 0; i < max; i++) {
		cout << "*** Contact number : " << i << " ***" << endl;
		cout << "The contact address : " << endl <<
			ShowCont[i].contact_number.street_number << " " <<
			ShowCont[i].contact_number.street_name << ", " <<
			ShowCont[i].contact_number.city << ", " <<
			ShowCont[i].contact_number.province << ", " <<
			ShowCont[i].contact_number.country << ", " <<
			ShowCont[i].contact_number.postal_code << "."
			<< endl << endl << endl;

		cout << "The contact Information : " << endl;
		cout << " Name : " << ShowCont[i].first_name << " "
			<< ShowCont[i].last_name << endl;
		cout << " Company name : " << ShowCont[i].company_name << endl << endl;

		cout << "The Contact phone number and fax : " << endl;
		cout << " Phone number : " << ShowCont[i].phone_number.international_code <<
			ShowCont[i].phone_number.country_code <<
			ShowCont[i].phone_number.cell_code <<
			ShowCont[i].phone_number.city_code << endl;
		cout << "Fax : " << ShowCont[i].fax << endl << endl;

		cout << "The contact meeting date : " << endl;
		cout << "Date : " << ShowCont[i].meeting_date.day <<
			"-" << ShowCont[i].meeting_date.month <<
			"-" << ShowCont[i].meeting_date.year << endl << endl;
	}
}

//Functions to load and display data by pointers
void Load_Data(Contact *fe, Contact *le) {
	for (Contact *index = fe; index < le; index++) {
		cout << " The address :" << endl;
		cout << "Enter the street number ? :" << endl;
		cin >> index ->contact_number.street_number;
		cout << "Enter the street name ? :" << endl;
		cin >> index->contact_number.street_name;
		cout << "Enter the city ? :" << endl;
		cin >> index->contact_number.city;
		cout << "Enter the province name ? :" << endl;
		cin >> index ->contact_number.province;
		cout << "Enter the country name ? :" << endl;
		cin >> index->contact_number.country;
		cout << "Enter the postal code ? :" << endl;
		cin >> index->contact_number.postal_code;

		cout << endl << " Personal Informations :" << endl;
		cout << "Enter your first name ?" << endl;
		getline(cin, index->first_name);
		cout << "Enter your last name ?" << endl;
		getline(cin, index->last_name);
		cout << "Enter the company name ?" << endl;
		getline(cin, index->company_name);

		cout << endl << " Contact Informations :" << endl;
		cout << "Enter your international code ? :" << endl;
		cin >> index->phone_number.international_code;
		cout << "Enter your country code ? :" << endl;
		cin >> index->phone_number.country_code;
		cout << "Enter your city code ? :" << endl;
		cin >> index->phone_number.city_code;
		cout << "Enter your cell code ? :" << endl;
		cin >> index->phone_number.cell_code;

		cout << "Enter your fax ? :" << endl;
		cin >> index->fax;

		cout << endl << " Please enter the meeting date ?" << endl;
		cout << "Enter the day? :" << endl;
		cin >> index->meeting_date.day;
		cout << "Enter the month? :" << endl;
		cin >> index->meeting_date.month;
		cout << "Enter the year? :" << endl;
		cin >> index->meeting_date.year;
	}
}
void Display_Data(Contact *fe, Contact *le) {
	for (Contact *index = fe; index < le; index++) {
		cout << "*** Contact number : " << index << " ***" << endl;
		cout << "The contact address : " << endl <<
			index->contact_number.street_number << " " <<
			index->contact_number.street_name << ", " <<
			index->contact_number.city << ", " <<
			index->contact_number.province << ", " <<
			index ->contact_number.country << ", " <<
			index->contact_number.postal_code << "."
			<< endl << endl << endl;

		cout << "The contact Information : " << endl;
		cout << " Name : " << index->first_name << " "
			<< index->last_name << endl;
		cout << " Company name : " << index->company_name << endl << endl;

		cout << "The Contact phone number and fax : " << endl;
		cout << " Phone number : " << index->phone_number.international_code <<
			index->phone_number.country_code <<
			index->phone_number.cell_code <<
			index->phone_number.city_code << endl;
		cout << "Fax : " << index->fax << endl << endl;

		cout << "The contact meeting date : " << endl;
		cout << "Date : " << index->meeting_date.day <<
			"-" << index->meeting_date.month <<
			"-" << index->meeting_date.year << endl << endl;
	}
}

//Functions to overload inserter and extractor stream operators 
istream & operator >> (istream &in_stream, Contact &Add_Cont) {
	cout << " The address :" << endl;
	cout << "Enter the street number ? :" << endl;
	in_stream >> Add_Cont.contact_number.street_number;
	cout << "Enter the street name ? :" << endl;
	in_stream >> Add_Cont.contact_number.street_name;
	cout << "Enter the city ? :" << endl;
	in_stream >> Add_Cont.contact_number.city;
	cout << "Enter the province name ? :" << endl;
	in_stream >> Add_Cont.contact_number.province;
	cout << "Enter the country name ? :" << endl;
	in_stream >> Add_Cont.contact_number.country;
	cout << "Enter the postal code ? :" << endl;
	in_stream >> Add_Cont.contact_number.postal_code;

	cout << endl << " Personal Informations :" << endl;
	cout << "Enter your first name ?" << endl;
	getline(in_stream ,Add_Cont.first_name);
	cout << "Enter your last name ?" << endl;
	getline(in_stream, Add_Cont.last_name);
	cout << "Enter the company name ?" << endl;
	getline(in_stream, Add_Cont.company_name);

	cout << endl << " Contact Informations :" << endl;
	cout << "Enter your international code ? :" << endl;
	in_stream >> Add_Cont.phone_number.international_code;
	cout << "Enter your country code ? :" << endl;
	in_stream >> Add_Cont.phone_number.country_code;
	cout << "Enter your city code ? :" << endl;
	in_stream >> Add_Cont.phone_number.city_code;
	cout << "Enter your cell code ? :" << endl;
	in_stream >> Add_Cont.phone_number.cell_code;

	cout << "Enter your fax ? :" << endl;
	in_stream >> Add_Cont.fax;

	cout << endl << " Please enter the meeting date ?" << endl;
	cout << "Enter the day? :" << endl;
	in_stream >> Add_Cont.meeting_date.day;
	cout << "Enter the month? :" << endl;
	in_stream >> Add_Cont.meeting_date.month;
	cout << "Enter the year? :" << endl;
	in_stream >> Add_Cont.meeting_date.year;
}
ostream & operator << (ostream &out_stream, Contact &Show_Cont) {
	out_stream << "*** Contact number : " << "1" << " ***" << endl;
	out_stream << "The contact address : " << endl <<
		Show_Cont.contact_number.street_number << " " <<
		Show_Cont.contact_number.street_name << ", " <<
		Show_Cont.contact_number.city << ", " <<
		Show_Cont.contact_number.province << ", " <<
		Show_Cont.contact_number.country << ", " <<
		Show_Cont.contact_number.postal_code << "."
		<< endl << endl << endl;

	out_stream << "The contact Information : " << endl;
	out_stream << " Name : " << Show_Cont.first_name << " "
		<< Show_Cont.last_name << endl;
	out_stream << " Company name : " << Show_Cont.company_name << endl << endl;

	out_stream << "The Contact phone number and fax : " << endl;
	out_stream << " Phone number : " << Show_Cont.phone_number.international_code <<
		Show_Cont.phone_number.country_code <<
		Show_Cont.phone_number.cell_code <<
		Show_Cont.phone_number.city_code << endl;
	out_stream << "Fax : " << Show_Cont.fax << endl << endl;

	out_stream << "The contact meeting date : " << endl;
	out_stream << "Date : " << Show_Cont.meeting_date.day <<
		"-" << Show_Cont.meeting_date.month <<
		"-" << Show_Cont.meeting_date.year << endl << endl;
}
