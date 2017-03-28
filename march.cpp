#include <stdio.h>
int* SurpassersKing(int input1_size, int* input1,int* output_size)
    {
      int i,j,count=0;
        int output[input1_size];
        for(i = 0;i<input1_size;i++){
            for(j=i+1;j<input1_size;j++){
                if(input1[i] < input1[j]){
                    count++;
                }
            }
            output[i] = count;
            count = 0;
        }

        for(i=0;i<input1_size;i++)
        {
            printf("%d\n",output[i]);
        }
    }

int main()
{
    int output_size;
    int* output;
    int ip1_size = 0;
    int ip1_i;
    scanf("%d\n", &ip1_size);
    int ip1[ip1_size];
    for(ip1_i = 0; ip1_i < ip1_size; ip1_i++)
    {
        int ip1_item;
        scanf("%d", &ip1_item);

        ip1[ip1_i] = ip1_item;
    }
    output = SurpassersKing(ip1_size,ip1,&output_size);
    int output_i;
    for(output_i=0; output_i < output_size; output_i++)
    {
        printf("%d\n", output[output_i]);
    }
    return 0;
}
