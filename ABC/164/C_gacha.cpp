#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
 
int main(){
  	int N;
  	cin >> N;
 
  	vector<string> S(N);
  	for (auto& s:S){
      	cin >> s;
    }
  
  	map<string, int> num;
  
  	for (auto t:S){
      	num[t]++;
    }
	
    cout << num.size() << endl;   
}