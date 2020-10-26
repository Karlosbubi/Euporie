/*
Eliminates every "non superior" Element,
then Bubble sorts.
*/

void hitlerSort(int* in, int& length, int* superior){
    int count = 0;

    for(int i = 0; i < length; i++){
        for(auto j : superior){
            if(in[i] == superior){
                in[count] = superior;
                count++;
            }
        }
    }

    length = count;

    int temp = 0;
    for(int i = 0; i < length; i++){
        for(int j = 1; j < length; i++){
            if(in[j] < in[j-1]){
                temp = in[j-1];
                in[j-1] = in[j];
                in[j] = temp;
            }
        }
    }
}
