#include <stdio.h>

int main(){
    int diode1, diode2, nserie, nmbbat, portpara;
    
    char Vcolor;
    //lecture des variable char et int 
    scanf("%c %d %d %d %d %d", &Vcolor, &diode1, &diode2, &nserie, &nmbbat,&portpara);

                    //couper le fil 
    int final =     (Vcolor=='b' && diode1==1 && diode2==0) ||
                    (Vcolor=='r' && diode1==1 && diode2==0) ||
                    (Vcolor =='b' && diode1 == 0 && diode2 == 0) ||

                    //couper si numéro seri est paire 
                    (Vcolor=='r' && diode1==0 && diode2==0 && nserie%2==0) ||
                    (Vcolor=='d' && diode1==0 && diode2==0 && nserie%2==0) ||
                    (Vcolor=='n' && diode1==0 && diode2==0 && nserie%2==0) ||
                    (Vcolor=='d' && diode1==0 && diode2==1 && nserie%2==0) ||

                    //couper s'il y a un port parallèle 
                    (Vcolor=='d' && diode1==1 && diode2==0 && portpara==1) ||
                    (Vcolor=='n' && diode1==0 && diode2==1 && portpara==1) ||
                    (Vcolor=='n' && diode1==1 && diode2==1 && portpara==1) ||

                    // couper s'il y a 2 oiu plusieurs batteries 
                    (Vcolor=='r' && diode1==0 && diode2==1 && nmbbat>=2) ||
                    (Vcolor=='r' && diode1==1 && diode2==1 && nmbbat>=2) ||
                    (Vcolor=='b' && diode1==1 && diode2==1 && nmbbat>=2);
   
    printf("%d\n", final);
   
    return 0;
}

