# Elaborato2c

Specifiche:
• Implementare le seguenti macro per calcolare alcune proprietà di una
funzione di secondo grado nel campo reale:
f(x) = ax2 + bx + c
1. NUM_OF_ROOTS(a,b,c). Implementa un’espressione che può valere
0, 1 o 2, a seconda che l’equazione ax2 + bx + c = 0 ammetta
0, 1 o 2 radici nel campo reale (i.e. gli zeri della funzione).
2. ROOT1(a,b,c). Implementa un’espressione che calcola la radice
più grande dell’equazione ax2 + bx + c = 0. Non è necessario che
la macro verifichi che l’equazione abbia effettivamente almeno una
soluzione. Nel caso in cui non ci siano soluzioni, l’espressione può
essere non definita.
3. ROOT2(a,b,c). Espressione che calcola la radice più piccola dell’equazione ax2 +bx+c = 0. Se l’equazione ha una sola soluzione,
il valore dell’espressione coinciderà con quello di ROOT1(a,b,c).
Come sopra, non è necessario che la macro verifichi che l’equazione
abbia effettivamente soluzioni.
4. EXTREME_POINT(a,b,c). Implementa un’espressione che calcola
il punto estremo (massimo o minimo) della funzione di secondo
grado f(x) = ax2 + bx + c.
5. MAXIMUM_POINT(a,b,c). Implementa un’espressione (booleana)
che vale 1 oppure 0 a seconda che il punto estremo della funzione
f(x) = ax2 + bx + c sia un punto di massimo oppure di minimo,
rispettivamente.
• Si assume che il coefficiente a sia sempre diverso da 0. Le macro non
sono tenute a gestire il caso in cui vengano richiamate con parametro
a uguale a 0.
• Le macro devono essere definite in un file con nome quadratic_eq.h.
• Deve essere sottomesso unicamente il file quadratic_eq.h.
• E’ possibile sviluppare altre macro oltre a quelle richieste.
