#include <stdio.h>
#include "mujik.h"

void catalog(mujik f) {
    printf("%s - eto %s s %d zubami, emu %d goda\n", f.name, f.species, f.teeth, f.age );
}

void label(mujik f) {
    printf("Klichka: %s\nRaznovidnost: %s\n%d goda, %d zubov\n", f.name, f.species, f.teeth, f.age);

    printf("Delat %2.5f %s i begit %s na probejka %2.2f chasov",
        f.care.food.weight, f.care.food.ingridients, f.care.exercise.description, f.care.exercise.duration);
}
