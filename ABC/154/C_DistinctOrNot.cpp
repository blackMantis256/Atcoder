#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
 
int main(){
  	long long N;
  	cin >> N;
  
  	vector<string> A(N);
  	for(auto& a:A){
      	cin >> a;
    }
  
  	map<string, long long> exist;
  	for(auto a:A){
      	exist[a]++;
    }
  
	for(auto a:exist){
      	if(a.second >= 2){
			cout << "NO" << endl;
			return 0;
        }
    }
 
  	cout << "YES" << endl;
  	return 0;
}