#include <stdio.h>
#include <stdbool.h>

void functionD() {
    char const *const zodiacSignsEnglish[] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};
    char const *const zodiacSignsChinese[] = {"水瓶座", "双鱼座", "白羊座", "金牛座", "双子座", "巨蟹座", "狮子座", "处女座", "天秤座", "天蝎座", "射手座", "摩羯座"};

    int i;
    char signEnglish[10];

    printf("请输入你的星座英文：");
    scanf("%s", signEnglish);

    for (i = 0; i < 12; i++) {
        if (strcmp(signEnglish, zodiacSignsEnglish[i]) == 0) {
            printf("你的星座中文是：%s\n", zodiacSignsChinese[i]);
            break;
        }
    }

    if (i == 12) {
        printf("输入的星座英文有误，请重新输入。\n");
    }

    return 0;
}