/*
Adds up the values an assigns each element, an equal share.
*/

void communsimSort(int * in, int length){
    int summ;
    int share;
    for(int i = 0; i < length; i++){
        summ += in[i];
    }
    share = summ / length;
    for(int i = 0; i < length; i++){
        in[i] = share;
    }
}