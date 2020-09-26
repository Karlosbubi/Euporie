/*
Eliminates every "non superior" Element.
*/

void hitlerSort(int* in, int& length, int superior){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(in[i] == superior){
            in[count] = superior;
            count++;
        }
    }
    length = count;
}