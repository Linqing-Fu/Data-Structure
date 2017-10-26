#ifndef POLYLINK_H
#define POLYLINK_H

#include <stdio.h>
#include <stdlib.h>
#include "status.h"

typedef struct 
{
	int coef;
	int exp;
}PolyTerm;

typedef struct PolyNode{
	PolyTerm data;
	struct PolyNode *next;
}PolyNode,*PolyLink;

typedef PolyLink LinkedPoly;

Status CreatPoly(LinkedPoly *P,int n,PolyTerm data[]);
Status OutputPoly(LinkedPoly P);
#endif