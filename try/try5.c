#include <stdio.h>
int main(void)
{
    int a =1, b=2;
    int *px[2];//[]优先级比 * 高 
    //px 与 [] 结合后是数组 然后与 * 结合就是指针数组  记忆：跟平常声明指针一样，只不过这个数组全是指针
    //int (*p)[2]  * 先和p结合，然后整体与[2]结合     记忆：先数组后指针  数组指针  后边是包含几个类型值  一般用于指向多维数组
    //
    px[0] = &a;
    px[1] = &b;
    printf("a = %d, b = %d", *px[0], *px[1]);

    // int (*p)[2];
    // int arr[3][2] = { 1,2,3,4,5,6 };
    // p = arr;
    // printf("%d", (*p)[0]);

/*如果是更高维度的多维数组，也需要相应维度的指针进行访问。
例如，对于一个三维数组，需要使用类似 int (*p)[3][4] 的指针来指向它。
*/
    return 0;
}