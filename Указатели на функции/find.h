#ifndef __FIND_H
#define __FIND_H

#include <stdio.h>
#include <string.h>

void find(int (*match) (char*));
int sports_no_bieber(char *s);
int sports_or_workout(char *s);
int ns_theater(char *s);
int atrs_theater_or_dining(char *s);

#endif