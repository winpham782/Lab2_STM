/*
 * timer.c
 *
 *  Created on: Oct 4, 2022
 *      Author: WinZ
 */
#include "timer.h"

int timer1_count=0;
int timer1_flag=0;

void settimer1(int n)
{
	timer1_count=n;
	timer1_flag=0;
}

void timerrun()
{
	if(timer1_count>0)
	{
		timer1_count--;
	}
	else
	{
		timer1_flag=1;
	}
}

