#ifndef __MUJIK_H
#define __MUJIK_H

typedef struct exercise {
    const char *description;
    float duration;
} exercise;

typedef struct meal {
    const char *ingridients;
    float weight;
} meal;

typedef struct preferences {
    meal food;
    exercise exercise;
} preferences;

typedef struct mujik{
    const char *name;
    const char *species;
    int age;
    int teeth;
    preferences care;
} mujik;
void catalog(mujik);
void label(mujik);

#endif