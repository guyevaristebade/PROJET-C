#include <stdio.h>
int main(int argc, char* argv[]){

    int d1, d2, d3, d4, d5, d6, x1, y1, z1, x2, y2, z2;

    scanf ("%d%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5, &d6);

    if (d1 > d2){
        if (d2 > d3){
             z1 = d1;
             y1 = d2;
             x1 = d3;
        }
        else{
            if (d1 > d3){
                 z1 = d1;
                 y1 = d3;
                 x1 = d2;
            }
            else{
                 z1 = d3;
                 y1 = d1;
                 x1 = d2;
            }
        }
    }

    else{
        if(d3 >= d2){
             z1 = d3;
             y1 = d2;
             x1 = d1;
        }
        else{
            if (d3 >= d1){
                 z1 = d2;
                 y1 = d3;
                 x1 = d1;
            }
            else{
                 z1 = d2;
                 y1 = d1;
                 x1 = d3;
            }
        }
    }


    if (d4 > d5){
        if (d5 > d6){
             z2 = d4;
             y2 = d5;
             x2 = d6;
        }
        else{
            if (d4 > d6){
                 z2 = d4;
                 y2 = d6;
                 x2 = d5;
            }
            else{
                 z2 = d6;
                 y2 = d4;
                 x2 = d5;
            }
        }
    }

    else{
        if(d6 >= d5){
             z2 = d6;
             y2 = d5;
             x2 = d4;
        }
        else{
            if (d6 >= d4){
                 z2 = d5;
                 y2 = d6;
                 x2 = d4;
            }
            else{
                 z2 = d5;
                 y2 = d4;
                 x2 = d6;
            }
        }
    }



    if( x1 == x2 && y1 == y2 && z1 == z2)
        printf("Draw\n");

        //421
    else  if (x1==1 && y1==2 && z1==4)
        printf("Player1 wins\n");
    else if (x2==1 && y2==2 && z2==4)
        printf("Player2 wins\n");

        //triplet
    else if((x1==y1 && x1==z1) && !(x2==y2 && x2==z2))
        printf("Player1 wins\n");
    else if((x2==y2 && x2==z2) && !(x1==y1 && x1==z1))
        printf("Player2 wins\n");

        // fiches
    else if ((x1==1 && y1==1 && z1!=1) && ! (x2==1 && y2==1 && z2!=1))
        printf("Player1 wins\n");

    else if ((x2==1 && y2==1 && z2!=1) && ! (x1==1 && y1==1 && z1!=1))
        printf("Player2 wins\n");

        // suite
    else if (((y1==x1+1) && (z1==y1+1)) && !((y2==x2+1 && z2==y2+1)))
        printf("Player1 wins\n");

    else if ((y2==x2+1 && z2==y2+1) && !(y1==x1+1 && z1==y1+1))
        printf("Player2 wins\n");

        // quelconque
    else if  (((x1 > x2) || (y1 > y2) || (z1 > z2)))
        printf("Player1 wins\n");

    else if (((x2 > x1) || (y2 > y1) || (z2 > z1)))
        printf("Player2 wins\n");


    return 0;
}
