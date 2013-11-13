#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

string completeLength(string word, int desiredLength) {

	while ( word.size() < desiredLength) {
		word = "0" + word;
	}

	return word;

}

string getCid(int genderparam, string dateparam, int cityparam, int countryparam, int randomparam) {

	string cid;
	stringstream streamgender;
	streamgender << genderparam;
	string gend = streamgender.str();

	stringstream streamcity;
	streamcity << cityparam;
	string city = streamcity.str();

	stringstream streamcountry;
	streamcountry << countryparam;
	string country = streamcountry.str();

	stringstream streamrandom;
	streamrandom << randomparam;
	string random = streamrandom.str();

	size_t pos = dateparam.find("/");
	string day = dateparam.substr(0, pos);
	size_t pos2 = dateparam.find("/", pos + 1);
	string month = dateparam.substr(pos + 1, pos2 - pos - 1);
	string year = dateparam.substr(pos2 + 1);

	year = completeLength(year, 4);
	month = completeLength(month, 2);
	day = completeLength(day, 2);
	city = completeLength(city, 4);
	country = completeLength(country, 3);
	random = completeLength(random, 4);

	cid.append(gend);
	cid.append("-");
	cid.append(year);
	cid.append("-");
	cid.append(month);
	cid.append("-");
	cid.append(day);
	cid.append("-");
	cid.append(city);
	cid.append("-");
	cid.append(country);
	cid.append("-");
	cid.append(random);
	
	return cid;
}

int main() {

	string date, cid;
	int n, gender, city, country, random;
	
	cin>>n;
	for ( int a = 0; a < n; a++) {
		cin>>gender;
		cin>>date;

		cin>>city>>country>>random;
		cout<<getCid(gender, date, city, country, random)<<endl;
	}
	
}
