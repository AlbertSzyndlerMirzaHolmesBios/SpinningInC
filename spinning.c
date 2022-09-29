#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
/*

        XXXX
    XXXX    XXXX
XXXX            XXXX
    XXXX    XXXX
        XXXX


            1xXX
        12XX    2XXX
    11XX            3XXX     
10XX                    4XXX 
    9XXX            5XXX     
        8XXX    6XXX         
            7XXX             


*/

void genSpaceArr(int wLen, int sqLen, int* spaceArr){
    int start = (sqLen - 1) * wLen;
    int len = (4 * sqLen) - 4;
    int accend = 1; //accending is 1
    int max = (2*sqLen - 2) * wLen;
    //printf("MAX %d\n",max);
    *spaceArr = start;

    for (int i = 1; i < len; i++){
        if (accend){
            start += wLen;
            *(spaceArr + i) = start;
            if (start == max){
                accend = 0;
            }
        }else{
            start -= wLen;
            *(spaceArr + i) = start;
            if (start == 0){
                accend = 1;
            }
        }
    }
}

void space(int num){
    for (int i = 0; i < num; i++){
        printf(" ");
    }
}

void printCircle(char*words[], int spaceArr[], int sqLen){
    int max = 4*sqLen - 4;
    int min = 1;
    space(spaceArr[0]);
    printf("%s\n",words[0]);
    //printf("here%d",spaceArr[max-1]);

    for (int i = 0; i < sqLen+1; i++){
        space(spaceArr[max-1]);
        printf("%s",words[max-1]);
        space((spaceArr[min] - spaceArr[max-1] - 4));
        printf("%s\n",words[min]);
        min++;
        max--;
    }
    space(spaceArr[min]);
    printf("%s\n",words[min]);
}

void shuffle(char* words[], int len){
    char* wordBuff[len];
    for (int i = 0; i < len; i++){
        wordBuff[i] = words[i];
    }
    words[0] = wordBuff[len-1];
    
    for (int i = 0; i < len-1; i++){
        words[i + 1] = wordBuff[i];
    }
}

void clear(){
    system("clear");
}

int main(){
    char* words[12] = {"This", "XXXX","XXXX","XXXX","XXXX","XXXX","FUCK","XXXX","XXXX","XXXX","XXXX","XXXX"};
    int spaceArr[12];
    genSpaceArr(4,4,&spaceArr[0]);
    while (1){
        printCircle(words,spaceArr,4);
        shuffle(words,12);
        sleep(1.0);
		clear();
    }
}
