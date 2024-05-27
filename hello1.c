#include<cs50.h>
#include<stdio.h>

int main(void)
{
    get_string("What's your name?");
    string name = get_string("What's your name?");
    printf("hello,%s\n," name);
}