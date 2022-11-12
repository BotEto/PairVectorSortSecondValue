#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	pair<string, int> doter1 = { "rxm4ik ", 16000 };
	pair<string, int> doter2 = { "dendi ", 9500 };
	pair<string, int> doter3 = { "zxcursed ", 13200 };
	pair<string, int> doter4 = { "soulfoxone ", 9100 };
	pair<string, int> doter5 = { "alohadance ", 666666 };

	vector<pair<string, int>> dream_team = { doter1, doter2, doter3, doter4, doter5 };
	sort(dream_team.begin(), dream_team.end(),
		[](const auto& x, const auto& y) { return x.second > y.second; });

	for (int i = 0; i < dream_team.size(); ++i)
		cout << dream_team[i].first << dream_team[i].second << endl;
	
}
