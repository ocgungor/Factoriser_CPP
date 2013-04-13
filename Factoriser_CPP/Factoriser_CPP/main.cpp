//
//  main.cpp
//  Factoriser_CPP
//
//  Created by Oguzhan Gungor on 14/04/13.
//  Copyright (c) 2013 Oguzhan Gungor. All rights reserved.
//

#include <iostream>
#include "Factoriser.h"

int main(int argc, const char * argv[])
{

	Factoriser *f = new Factoriser();
	
	f->factorise(100);
    
	delete f;
    
	return EXIT_SUCCESS;
}

