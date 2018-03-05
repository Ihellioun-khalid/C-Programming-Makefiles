/*
* @Author: ihelliounkhalid
* @Date:   2018-03-05 18:10:26
* @Last Modified by:   ihelliounkhalid
* @Last Modified time: 2018-03-05 18:56:47
*/
#include <stdio.h>
#include "gd.h"

int main(int argc, char const *argv[])
{
	double price, tip;
	price = get_double("Enter price meal :",0,1000);

	tip = get_double("Enter tip amount (percent) :",0,100);

	double tipAmt = price * tip / 100.0;
	double total = price + tipAmt;

	printf("Tip amount : %lf \n:", tipAmt);
	printf("Total amount : %lf \n", total);
	return 0;
}