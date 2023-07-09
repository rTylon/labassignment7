#include <stdio.h>

void BubbleSort(int data[],int size)
{

    int count;
    for(int step = 0;step<size-1;++step){
        count = 0;
        for(int i = 0;i<size-step-1;++i){
            if(data[i]>data[i+1]){
                int temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
                count++;
            }
        }    
    printf("%d",count);
    } 
}

int main()
{
    int data[] = {97,16,45,63,13,22,7,58,72};
    BubbleSort(data,9);
    return 0;
}