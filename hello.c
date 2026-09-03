#include<stdio.h>
void greet(const char *name);
int main(){
    printf("Hello World !");
    greet("Jeevika");
    return 0;
}
void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);

}