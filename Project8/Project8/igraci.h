#define _CRT_SECURE_NO_WARNINGS
#ifndef IGRACI_H
#define IGRACI_H

#define MAX_IGRACA 100
#define IME 50
#define PREZIME 50
#define POZICIJA 30

typedef struct {
    int brojDresa;
    char ime[IME];
    char prezime[PREZIME];
    char pozicija[POZICIJA];
} Igrac;

extern Igrac* igraci;
extern int brojIgraca;

void ucitajIgraceIzDatoteke();
void prikaziIgrace();
void upisiIgraca();
void sortirajIgracePoBrojuDresa(Igrac* igraci, int n);
void pretraziIgracePoPrezimenu();
void pretraziIgracePoPoziciji();
void izbrisiIgraca();
static inline void oslobodiMemoriju(int* igraci) {
    free(igraci);
}
void azurirajIgraca();
void bubbleSortRekurzivno(Igrac* igraci, int n);
#endif
