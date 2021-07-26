/**
 * CLITS
 */


#include <iostream>
#include <vector>
#include <string>
#include "session.hpp"

using namespace std;


namespace CLITS
{

      struct GSL {
            	vector <string> general;
            	vector <string> emails;
            	vector <string> firstNames;
            	vector <string> lastNames;
      };

      struct response
      {
            	int charLength;
            	bool containsSpec;

      };

      struct Request
      {
            	int charLength;
            	bool containsSpec;
            	string content;

		Request(string cont) : content(cont, SessionHandler* sh)
	    		{

	    			string Uentry;
	    			this->charLength = content.size();
	    			this->containsSpec = false;
	    			cout << this->content << endl;
	    			cin >> Uentry;
	    			sh.
	    		}
      };

      bool isThisEmail(string canadate);





};
