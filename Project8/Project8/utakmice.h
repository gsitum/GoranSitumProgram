#ifndef UTAKMICE_H
#define UTAKMICE_H

#define MAX_UTAKMICA 100
#define TIM1 50
#define TIM2 50

typedef struct {
    int id;
    char tim1[TIM1];
    char tim2[TIM2];
    int rezultat1;
    int rezultat2;
} Utakmica;

extern Utakmica utakmice[MAX_UTAKMICA];
extern int brojUtakmica;

void ucitajUtakmiceIzDatoteke();
void pregledUtakmica();
void upisRezultata();
void spremiUtakmiceUDatoteku();

#endif
