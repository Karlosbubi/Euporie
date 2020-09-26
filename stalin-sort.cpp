/*
Eliminates every element out of Order.
*/

void stalinSort(int* in, int& length){
    int* temp = new int[length];
    int count = 1;
    temp[0] = in[0];
    for(int i = 1; i < length; i++){
        if(temp[count - 1] < in[i]){
            temp[count] = in[i];
            count++;
        }
    }
    length = count;
    for(int i = 0; i < length; i++){
        in[i] = temp[i];
    }
    
    delete []temp;
}