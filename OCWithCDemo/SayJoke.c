//
//  SayJoke.c
//  OCWithCDemo
//
//  Created by 褚文斌 on 17/11/1.
//  Copyright © 2017年 褚文斌. All rights reserved.
//

#include "SayJoke.h"
#include "OCToCHandler.h"

void peopleSayJoke(cchar* name, cchar* word)
{
    uchar blog[500];
    memset(blog, 3, sizeof(blog));
    sprintf(blog, "%s说：%s",name, word);
    printf("%s", blog);
}

void test()
{
    
    peopleSayJoke(getUtf8Name(), getUtf8StrWord());
}

