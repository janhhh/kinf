#include "client.h"
#include <iostream>
using namespace std;
int run_server(){
	cout<<"jestem w runie\n";
	if (!connect_to_server("ubuntu")) {
        cout << "Połączenie nie powiodło się. Odpalam server\n";
        	system ("./server&");
        	int licznik = 0;
        	while (!connect_to_server("ubuntu") && licznik < 20) {
        	    licznik++;
            	usleep(500);
        	}
        	return 1;
  	}else{
  		return 0;
  	}
}
