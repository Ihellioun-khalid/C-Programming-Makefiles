/*
* @Author: ihelliounkhalid
* @Date:   2018-03-05 18:10:26
* @Last Modified by:   ihelliounkhalid
* @Last Modified time: 2018-03-05 19:12:50
*/
#include <stdio.h>
#include <math.h>
#include "gd.h"

int main()
{
	double x = get_double("Enter the x value :",-100,100);
	double y = get_double("Enter the y value :",-100,100);

	double d =sqrt( pow(x,2) + pow(y,2) );
	printf("Distance is %lf miles \n",d);
	return 0;
}