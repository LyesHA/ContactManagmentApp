#pragma once
#include <string>
using namespace std;



struct Date {
	string month;
	string day;
	string year;
};

struct Phone {
	string international_code;
	string country_code;
	string city_code;
	string cell_code;
};

struct Address {
	string street_number;
	string street_name;
	string city;
	string province;
	string postal_code;
	string country;
};

struct Contact {
	Address contact_number;
	string first_name;
	string last_name;
	string company_name;
	Phone phone_number;
	string fax;
	Date meeting_date;
};