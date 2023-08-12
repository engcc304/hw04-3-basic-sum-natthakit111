
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/

#include <stdio.h>

int main() {
    int n1, n2, n3;    
    printf( "Enter three numbers: " ) ;
    scanf( "%d %d %d", &n1, &n2, &n3 ) ;

    int sum = n1 + n2 + n3;
    printf( "Answer = %d\n", sum ) ;

    return 0 ;
}//end function