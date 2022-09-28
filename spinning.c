#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
void newline(int number){
    for(int i = 0; i < number; i++){
        printf("\n");
    }
}
void space(int number){
    for(int i = 0; i < number; i++){
        printf(" ");
    }
}
void clear(){
    system("clear");
}
int circle(const char word1[],const char word2[],const char word3[],const char word4[],const char word5[],const char word6[],const char word7[],const char word8[]){
    const char *corners[8];
    corners[0] = word1;
    corners[1] = word2;
    corners[2] = word3;
    corners[3] = word4;
    corners[4] = word5;
    corners[5] = word6;
    corners[6] = word7;
    corners[7] = word8;
    //Printing circle
    space(11);
    printf("%s", corners[0]);
    newline(2);
    space(4);
    printf("%s", corners[7]);
    space(10);
    printf("%s", corners[1]);
    newline(3);
    printf("%s", corners[6]);
    space(19);
    printf("%s", corners[2]);
    newline(3);
    space(4);
    printf("%s", corners[5]);
    space(10);
    printf("%s", corners[3]);
    newline(2);
    space(11);
    printf("%s", corners[4]);
    newline(1);
    sleep(0.999999999999999960);
    clear();
}
int box(const char word1[],const char word2[],const char word3[],const char word4[]){
    // Create box
    // Make spin
    const char *corners[4];
    corners[0] = word1;
    corners[1] = word2;
    corners[2] = word3;
    corners[3] = word4;
    int space1 = 21 - (sizeof(corners[0]) + sizeof(corners[1]));
    int space2 = 21 - (sizeof(corners[2]) + sizeof(corners[3]));
    printf("%s",corners[0]);
    space(space1);
    printf("%s",corners[1]);
    newline(4);
    printf("%s",corners[3]);
    space(space2);
    printf("%s",corners[2]);
    newline(1);
    /*            thin
     *
     *     thin          othe
     *
     * over                    over
     *
     *      Thin         othe
     *
     *           under
     */
    //word 1.size*2 + word1.size*2
    //first line
    //newline
    sleep(0.99999999999999989999);
    clear();
}
void square_driver(){
    const char *a[4];
    a[0] = "one";
    a[1] = "two";
    a[2] = "three";
    a[3] = "four";
    int counter =0;
    while(1){
        if(counter > 2){
            counter = 0;
        }
        else{
            counter++;
        }
        int things[]= {0,1,2,3};
        for(int i = 0; i < 4; i ++){
            things[i] -= counter;
            if(things[i] < 0){
                things[i] += 4;
            }
        }
        box(a[things[0]],a[things[1]],a[things[2]],a[things[3]]);

    }

}
void circle_driver(){
    const char *a[8];
    a[0] = "XXXX";
    a[1] = "XXXX";
    a[2] = "XXXX";
    a[3] = "THIS";
    a[4] = "XXXX";
    a[5] = "XXXX";
    a[6] = "XXXX";
    a[7] = "Fuck";
    int counter = 0;
    while(1){
        if(counter > 6){
            counter = 0;
        }
        else{
            counter++;
        }
        int things[]= {0,1,2,3,4,5,6,7};
        for(int i = 0; i < 8; i ++){
            things[i] -= counter;
            if(things[i] < 0){
                things[i] += 8;
            }
        }
        circle(a[things[0]],a[things[1]],a[things[2]],a[things[3]],a[things[4]],a[things[5]],a[things[6]],a[things[7]]);

    }
}
int main(){
    circle_driver();
}