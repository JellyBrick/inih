// Example that shows simple usage of the INIReader class

//#include <iostream>
#include "INIReader.h"

int main()
{
    INIReader reader("../examples/test.ini");

    if (reader.ParseError() < 0) {
        printf("Can't load 'test.ini'\n");
        return 1;
    }
	
	printf("Config loaded from 'test.ini': version=%d, name=%s, email=%s, pi=%f, active=%s\n",
              reader.GetInteger("protocol", "version", -1) ,
              reader.Get("user", "name", "UNKNOWN").c_str() ,
              reader.Get("user", "email", "UNKNOWN").c_str() ,
              reader.GetReal("user", "pi", -1) ,
              reader.GetBoolean("user", "active", true)? "true" : "false"
			  );
    return 0;
}
