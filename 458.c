#include <stdio.h>
#include <math.h>

int poorPigs(int buckets, int minutesToDie, int minutesToTest){
    int round = minutesToTest / minutesToDie;   //count round

    int pigs, sumPigs;
    //count pigs
    int i;
    for(i = 2; i < buckets; ++i){
        if(pow((double)i, (double)round) >= buckets){
            pigs = i;
            break;
        }
    }

    return pigs + round - 1;
}

//用来测试的main函数
int main(){
    //int sumPigs = poorPigs(1000, 15, 60);
    int sumPigs = poorPigs(1000, 15, 75);
    printf("minimum pigs number is %d\n", sumPigs);

    return 0;
}