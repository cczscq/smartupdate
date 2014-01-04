//
//  main.c
//  SmartUpdate
//
//  Created by zhaosc  on 1/4/14.
//  Copyright (c) 2014 zhaosc . All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
//#include "smart_diff.h"
//#include "smart_patch.h"


void test_so(){
    
    char* oldFile = "/Users/zhaosc/Downloads/weiboV3.apk";
    char* newFile = "/Users/zhaosc/Desktop/weiboV000.apk";
    char* patchFile = "/Users/zhaosc/Desktop/000.patch";
    
    void *handle;
    int (*smart_diff)(char*, char*, char*);
    char *error;
    handle = dlopen ("/Users/zhaosc/github/SmartUpdate/SmartUpdate/smart.so", RTLD_LAZY);
    if (!handle)
    {
        fputs (dlerror(), stderr);
        exit(1);
        
    }
    smart_diff = dlsym(handle, "bspatch");
    if ((error = dlerror()) != NULL)
    {
        fputs(error, stderr);
        exit(1);
    }
    printf ("%d\n", (*smart_diff)(oldFile, newFile, patchFile));
    dlclose(handle);
}


void test_bsdiff(){
    char* oldFile = "/Users/zhaosc/Downloads/weiboV3.apk";
    char* newFile = "/Users/zhaosc/Downloads/weiboV4.apk";
    char* patchFile = "/Users/zhaosc/Desktop/000.patch";
    
    int ret = bsdiff(oldFile, newFile, patchFile);
    printf("ret = %d\n", ret);
}

void test_bspatch(){
    char* oldFile = "/Users/zhaosc/Downloads/weiboV3.apk";
    char* newFile = "/Users/zhaosc/Desktop/weiboV5.apk";
    char* patchFile = "/Users/zhaosc/Desktop/1.patch";

    int ret = bspatch(oldFile, newFile, patchFile);
    printf("ret = %d\n", ret);
}

int sum(int a, int b){
    int c = a + b;
    printf("result = %d\n", c);
    return a + b;
}

int main(int argc, const char * argv[])
{
    test_bsdiff();
    test_bspatch();
    test_so();
    sum(2, 4);
    return 0;
}



