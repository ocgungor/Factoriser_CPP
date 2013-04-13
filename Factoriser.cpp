/*
 * Factoriser.cpp
 *
 * Created by Oguzhan Cansin Gungor on 14/04/13.
 *
 * Copyright (c) 2013 Aslan-Apps. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *       This product includes software developed by Aslan-Apps.
 * 4. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include <iostream>
#include <stdio.h>
#include "Factoriser.h"

using namespace std;

vector<int> Factoriser::factorise(int n) {
	// create an array for factors
	vector<int> factors;
    int i = n;
	int c;
	for (c = 2;  n > 1 && c*c <= n;  c++)
	{
		while (n % c == 0)
		{
			factors.push_back(c);

			n /= c;		
		}
	}
	
	if (n > 1)
		factors.push_back(n);
    
    // print the factors
    printFactors(factors, i);

	return factors;
}


void Factoriser::printFactors(vector<int> &factors, int n) {
	// get an iterator (enumerator)
	vector<int>::iterator e = factors.begin();
	
	printf("%d = ", n);
	
	while (e != factors.end())
	{
		printf("%d", *e);
		
		e++;
		
		if (e != factors.end())
			printf(" * ");
	}
	printf("\n");
}
