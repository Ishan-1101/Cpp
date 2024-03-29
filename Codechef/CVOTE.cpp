/* Long Challenge at Codechef
 * Complexity:  O((N + M) * log N * maxL)
 * Description:
 * We store the country of each chef in map<string, string>.
 * Also we store the number of votes for each chef and each country in two maps<string, int>.
 * We use the map of countries for chefs to calculate votes for countries properly.
 * Finally we iterate over each map<string, int> to find the best country and the best chef
 */
#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef map<string, int> MSI;

// returns the lexicographically smallest string having the maximal number of votes
string best_string(const MSI &votes)
{
	int max_votes = 0;
	string res = "";
	for (MSI::const_iterator it = votes.begin(); it != votes.end(); ++it) {
		// it->second is the number of votes
		// it->first is the string
		// since map stores keys (strings) in sorted order
		// the first string with maximal number of votes we meet
		// is also the lexicographically smallest one
		if(max_votes < it->second) {
			max_votes = it->second;
			res = it->first;
		}
	}
	return res;
}

int main() {
	// input number of chefs and number of votes
	int N, M;
	cin >> N >> M;

	// will contain country of each chef
	map<string, string> chefs_countries;

	// loop over chefs
	for (int i = 0; i < N; ++i) {

		// input chef and his country
		string chef, country;
		cin >> chef >> country;

		// assign this country to this chef
		chefs_countries[chef] = country;
	}

	// will contain the number of votes for each chef and each country
	// since some chefs names could coincide with countries names
	// we should have two separate maps
	MSI chefs_votes, countries_votes;

	// loop over votes
	for (int i = 0; i < M; ++i) {

		// input subject of the e-mail which is some chefs name
		string chef;
		cin >> chef;

		// increase number of votes of this chef
		chefs_votes[chef]++;

		// getting country of this chef
		string country = chefs_countries[chef];

		// increase number of votes for his country
		countries_votes[country]++;
	}

	// find and output best country and best chef
	cout << best_string(countries_votes) << endl;
	cout << best_string(chefs_votes) << endl;
	return 0;
}
