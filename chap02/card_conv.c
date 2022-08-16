/* 정수를 2진수 ~ 36진수로 기수 변환 */
#include <stdio.h>

/* 정수 값 x를 n진수로 변환하여 배열 d에 아랫자리부터 저장 */
int card_convr(unsigned s, int n, char d[]) {
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;     /*  */
    if(x == 0)
        d[dights++] = dchar[0];
    else
        while(x)    {
            d[digits++] = dchar[x %n];
            x/=n;
        }
        return digits;
}

int main(void)  {
    int i;
    unsigned no;    /* 변환하는 정수 */
    int cd;         /* 기수 */
    int dno;        /* 변환 후 자릿수 */
    char cno[512];  /* 변환한 값의 각 자리의 숫자를 저장하는 문자 배열 */
    int retry;      /* 한 번 더? */
    puts("");
    do {
        printf("");
        scanf("%d", &no);
        do {
            printf("");
            scanf("%d", &cd);
        }   while(cd<2 || cd > 36);
        dno = card_convr(no,cd,cno);    /* no를 cd진수로 변환 */
        printf("%d", cd);
        for(i=dno-1 ; i>=0 ; i--)                /* 윗자리부터 차례로 출력 */
            printf("%c", cno[i]);
        printf("\n");
        printf("");
        scanf("%d", &retry);
    }   while(retry == 1);

    return 0;
}
