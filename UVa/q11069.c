#include <stdio.h>

int main(){
    /*int rec[77]={0,1,2,2,3,4,5,7,9,12,16,21,28,37,49,65,86,114,151,200,265,351,465,616,816,1081,1432,1897,2513,3329,4410,5842,7739,10252,13581,17991,23833,31572,41824,55405,73396
                 ,97229,128801,170625,226030,299426,396655,525456,696081,922111,1221537,1618192,2143648,2839729,3761840,4983377,6601569,8745217,11584946,15346786,20330163,26931732
                 ,35676949,47261895,62608681,82938844,109870576,145547525,192809420,255418101,338356945,448227521,593775046,786584466,1042002567,1380359512,1828587033};*/
    int rec[77],i;
    rec[1] = 1;
    rec[2] = 2;
    rec[3] = 2;
    for( i=4; i<77; i++ )
         rec[i] = rec[i-2] + rec[i-3];  /*key function a[n]=a[n-2]+a[n-3]*/
    while(scanf("%d",&i)!=EOF){
       printf("%d\n", rec[i]);
    }
    return 0;
}
