
// string.h

// 实现字符串基本操作函数


#ifndef __KSTRING_H__
#define __KSTRING_H__


void kstrcpy(char* dest, const char* src);        // 复制
void kstrcat(char* dest, const char* src);        // 连接
int  kstrcmp(const char* str1, const char* str2); // 比较
int  kstrlen(const char* str);                    // 长度


#endif // __KSTRING_H__
