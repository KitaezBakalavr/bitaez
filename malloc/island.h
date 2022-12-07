#ifndef __ISLAND_H
#define __ISLAND_H

typedef struct island {
    char *name;
    char *opens;
    char *close;
    struct island *next;
} island;

void display (island*);
island* create(char*);
void release(island*);

#endif