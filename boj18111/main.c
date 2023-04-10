#include <stdio.h>

int main()
{
    int row;
    int col;
    int block;
    int block_t;
    int arr[257] = {0};
    int temp;
    int time;
    int height;
    int h_max;
    int t_min;

    scanf("%d %d %d", &row, &col, &block);
    for (int i = 0; i < (row * col); ++i)
    {
        scanf("%d", &temp);
        arr[temp]++;
        if (h_max < temp)
            h_max = temp;
    }
    t_min = 128000000;
    for (int i = h_max; i >= 0; i--)
    {
        block_t = block;
        time = 0;
        for (int j = 0; j < 257; j++) {
            if (arr[j])
                if (j < i) {
                    time += arr[j] * (i - j);
                    block_t++;
                } else if (i < j) {
                    time += 2 * arr[j] * (j - i);
                    block_t--;
                }
        }
        if (time < t_min && block_t >= 0){
            height = i;
            t_min = time;
        }
    }
    printf("%d %d\n", t_min, height);
    return (0);
}
