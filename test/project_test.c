#include "project.h"
#include "ctest.h"
#include <iostream>
#include <stdio.h>


CTEST(wonQ,Xcount)
{    
	const int result = wonQ('X',1);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,2count)
{     
    
	const int result = wonQ('2',1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,xcount)
{     
    
	const int result = wonQ('x',1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,5count)
{     
    
	const int result = wonQ('5',1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,Ocount)
{      
    
	const int result = wonQ('1',1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,0count)
{     
    
	const int result = wonQ('0',1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(wonQ,ocount)
{    

	const int result = wonQ('o',1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}
